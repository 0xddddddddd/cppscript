#ifndef CPPS_ASYNC_OBJECT_CPPS_HEAD_
#define CPPS_ASYNC_OBJECT_CPPS_HEAD_

namespace cpps
{
	struct cpps_async_object
	{
	public:
		cpps_async_object() {
			leftdomain = NULL;
			f = NULL;
			line = 0;
		}
		virtual~cpps_async_object() {}

		cpps_value call(C* c);

		cpps_std_vector params;
		cpps_domain* leftdomain;
		cpps_function* f;
		std::string filename;
		std::string funcname;
		int32 line;
	};

}
#endif //CPPS_ASYNC_OBJECT_CPPS_HEAD_