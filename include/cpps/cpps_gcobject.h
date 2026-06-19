#ifndef CPPS_GCOBJECT_CPPS_HEAD_
#define CPPS_GCOBJECT_CPPS_HEAD_


namespace cpps
{
	struct cpps_gcobject
	{
		cpps_gcobject();
		virtual ~cpps_gcobject();
		virtual void							setgcLevel(char l);
		virtual char							getgcLevel();
		void									incruse();
		void									decruse();
		int32									count();
		char									gclevel;//0 新手，1 元老 2.永恒（不知道有没有用）
		int32									gc_usecount; //usecount;
	};
}
#endif // CPPS_GCOBJECT_CPPS_HEAD_