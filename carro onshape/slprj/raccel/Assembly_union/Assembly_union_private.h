#ifndef RTW_HEADER_Assembly_union_private_h_
#define RTW_HEADER_Assembly_union_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
extern void MWDSPCG_FFT_Interleave_R2BR_D ( const real_T x [ ] , creal_T y [
] , int32_T nChans , int32_T nRows ) ; extern void MWDSPCG_R2DIT_TBLS_Z (
creal_T y [ ] , int32_T nChans , int32_T nRows , int32_T fftLen , int32_T
offset , const real_T tablePtr [ ] , int32_T twiddleStep , boolean_T
isInverse ) ; extern void MWDSPCG_FFT_DblLen_Z ( creal_T y [ ] , int32_T
nChans , int32_T nRows , const real_T twiddleTable [ ] , int32_T twiddleStep
) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
