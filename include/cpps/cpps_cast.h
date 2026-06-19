#ifndef CPPS_CAST_CPPS_HEAD_
#define CPPS_CAST_CPPS_HEAD_


namespace cpps
{
	template<class T>
	static T object_cast(object o)
	{
		if (o.value.tt == CPPS_TREF) {
			typedef cpps_converter<T> converter;
			if (!converter::match((*o.value.value.value)))
				throw(cpps_error("0", 0, 0, "cppsvalue can't convert to %s, cppsvalue type is %s , conversion failed", typeid(T).name(), type_s(o).c_str()));
			return converter::apply((*o.value.value.value));
		}
		else {
			typedef cpps_converter<T> converter;
			if (!converter::match((o.value)))
				throw(cpps_error("0", 0, 0, "cppsvalue can't convert to %s, cppsvalue type is %s , conversion failed", typeid(T).name(), type_s(o).c_str()));
			return converter::apply((o.value));
		}
		
	}
}
#endif // CPPS_CAST_CPPS_HEAD_