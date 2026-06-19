#ifndef CPPS_MAKE_FUNCTION_CPPS_HEAD_
#define CPPS_MAKE_FUNCTION_CPPS_HEAD_


namespace cpps
{
	template< typename p1 >
	dofunc< p1 > make_function(p1 param1)
	{
		return dofunc< p1 >(param1);
	}
}


#endif // CPPS_MAKE_FUNCTION_CPPS_HEAD_