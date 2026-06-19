#ifndef CPPS_THREAD_CPPS_HEAD_
#define CPPS_THREAD_CPPS_HEAD_


#ifndef _WIN32

#include <netinet/in.h>
#include <pthread.h>

#endif

namespace cpps
{
	class cpps_thread
	{
	public:
		cpps_thread();
		~cpps_thread();
	};
}

#endif // CPPS_THREAD_CPPS_HEAD_