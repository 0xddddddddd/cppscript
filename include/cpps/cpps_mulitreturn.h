#ifndef CPPS_MULITRETURN_CPPS_HEAD_
#define CPPS_MULITRETURN_CPPS_HEAD_


namespace cpps {
	struct tuple
	{
		tuple(){}
		template<typename T, class... _Types>
		tuple(const T&& v, _Types&&... _Args) {
			push_back(v, _Args...);
		}
		template<typename T>
		void push_back(const T& v) {
			tuple_list.push_back(v);
		}
		template<typename T, class... _Types>
		void push_back(const T& v, _Types&&... _Args) {
			tuple_list.push_back(v);
			push_back(_Args...);
		}
		std::vector<object> tuple_list;
	};
}
#endif