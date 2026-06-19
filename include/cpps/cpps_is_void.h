#ifndef CPPS_IS_VOID_CPPS_HEAD_
#define CPPS_IS_VOID_CPPS_HEAD_


namespace cpps
{
	template<class T>
	class cpps_is_void
	{
	public:
		cpps_is_void()
		{
			b = false;
		}
	public:
		bool b;
	};
	template<>
	class cpps_is_void<void>
	{
	public:
		cpps_is_void()
		{
			b = true;
		}

	public:
		bool b;
	}; 
	
	template<class T>
	class cpps_is_string
	{
	public:
		cpps_is_string()
		{
			b = false;
		}
	public:
		bool b;
	};
	template<>
	class cpps_is_string<std::string>
	{
	public:
		cpps_is_string()
		{
			b = true;
		}

	public:
		bool b;
	};


	

}


#endif // CPPS_IS_VOID_CPPS_HEAD_