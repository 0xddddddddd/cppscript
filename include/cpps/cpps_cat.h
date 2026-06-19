#ifndef CPPS_CAT_CPPS_HEAD_
#define CPPS_CAT_CPPS_HEAD_



#define CPPS_PP_CAT(a,b)  CPPS_PP_CAT_I(a,b)
#define CPPS_PP_CAT_I(a, b) CPPS_PP_CAT_II(a ## b)
#define CPPS_PP_CAT_II(res) res


#endif // CPPS_CAT_CPPS_HEAD_
