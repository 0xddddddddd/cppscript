#ifndef CPPS_ASYNC_TASK_CPPS_HEAD_
#define CPPS_ASYNC_TASK_CPPS_HEAD_

namespace cpps
{
	enum
	{
		cpps_async_task_pending,
		cpps_async_task_running,
		cpps_async_task_done,
		cpps_async_task_cancelled,
		cpps_async_task_timeouted,
		cpps_async_task_thorw,
		cpps_async_task_terminate,
	};
	struct cpps_async_task
	{
		cpps_async_task();
		virtual ~cpps_async_task();
		static void			run(cpps_async_task* p,C*c);
		cpps_value			getresult();
		cpps_async_object*	getobject();
		int8				state();
		bool				cancelled();
		bool				done();
		bool				timeout();
		bool				pending();
		bool				running();
		void				cancel();
		void				start(C* cstate);
		void				add_done_callback(cpps_value func, cpps_value context);
		void				remove_done_callback();
		void				call_done_callback(C* c);
		void				set_name(std::string n);
		std::string			get_name();

		cpps_async_object* async_object;
		coroutine::routine_t rt;
		int8					runstate;
		std::vector<cpps_stack*> takestacklist;
		cpps_value ret;				/*return 返回值*/
		cpps_value callback_func;				/*call back func*/
		cpps_value callback_context;				/*call back func context*/
		std::string name;
		cpps_trycatch_error	throwerr;//可能携带异常回来
		C* c;

	};

}
#endif //CPPS_ASYNC_TASK_CPPS_HEAD_