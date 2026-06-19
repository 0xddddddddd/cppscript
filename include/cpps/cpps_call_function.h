#ifndef CPPS_CALL_FUNCTION_CPPS_HEAD_
#define CPPS_CALL_FUNCTION_CPPS_HEAD_



namespace cpps
{
	template<class Type>
	struct cpps_cpp_to_cpps_converter;
	template<class retType, typename context, typename F, typename IsVoid>
	void call_function(C *c_state, cpps_value &ret, cpps_domain *domain, cpps_std_vector &o, context &c, F &f, IsVoid)
	{
		retType r = call_member<retType>(c_state, domain, o, c, f);
		if (!cpps_cpp_to_cpps_converter<retType>::match(c_state, r))
		{
			throw(cpps_error("0", 0, 0, "%s is not defined to script, conversion failed.",typeid(retType).name()));
		}
		ret = cpps_cpp_to_cpps_converter<retType>::apply(c_state,r); //c++的返回值 只有可以转换的才可以
	}
	template<class retType, typename context, typename F>
	void call_function(C *c_state, cpps_value &ret, cpps_domain *domain, cpps_std_vector &o, context &c, F &f, cpps_is_void<void>)
	{
		call_normal(c_state, domain, o, c, f);
	}
}


#endif // CPPS_CALL_FUNCTION_CPPS_HEAD_