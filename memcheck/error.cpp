#include error.hpp

using namespace std;

typedef
    enum{
        Err_Value,
        Err_Cond,
        Err_CoreMem,
        Err_Addr, 
        Err_Jump, 
        Err_RegParam,
        Err_MemParam,
        Err_User,
        Err_Free,
        Err_FreeMismatch,
        Err_Overlap,
        Err_Leak,
        Err_IllegalMempool,
        Err_FishyValue,
};