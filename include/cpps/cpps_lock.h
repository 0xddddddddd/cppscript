#ifndef CPPS_LOCK_CPPS_HEAD_
#define CPPS_LOCK_CPPS_HEAD_


#ifndef _WIN32

#include <netinet/in.h>
#include <pthread.h>

#endif

namespace cpps
{

	class  cpps_lock
	{
#ifdef _WIN32
		//变量定义
	private:
		CRITICAL_SECTION					thread_lock;					//临界变量

																			//函数定义
	public:
		//构造函数
		inline cpps_lock() { ::InitializeCriticalSection(&thread_lock); }
		//析构函数
		virtual ~cpps_lock() { ::DeleteCriticalSection(&thread_lock); }

		//功能函数
	public:
		//锁定函数
		virtual inline void lock() { ::EnterCriticalSection(&thread_lock); }
		//解锁函数 
		virtual inline void unlock() { ::LeaveCriticalSection(&thread_lock); }
#else
		//变量定义
	private:
		pthread_mutex_t						thread_lock;					//临界变量

																			//函数定义
	public:
		//构造函数
		inline cpps_lock() { pthread_mutex_init(&thread_lock,NULL); }
		//析构函数
		virtual ~cpps_lock() { ::pthread_mutex_destroy(&thread_lock); }

		//功能函数
	public:
		//锁定函数
		virtual inline void lock() { ::pthread_mutex_lock(&thread_lock); }
		//解锁函数 
		virtual inline void unlock() { ::pthread_mutex_unlock(&thread_lock); }
#endif
	};

	struct C;
	void	cpps_reglock(C *c);

}

#endif // CPPS_LOCK_CPPS_HEAD_