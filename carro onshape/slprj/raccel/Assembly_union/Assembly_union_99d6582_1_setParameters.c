#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void Assembly_union_99d6582_1_computeRuntimeParameters ( real_T * in , real_T
* out ) { ( void ) in ; ( void ) out ; } void
Assembly_union_99d6582_1_computeAsmRuntimeDerivedValuesDoubles ( const double
* rtp , double * rtdvd ) { ( void ) rtp ; ( void ) rtdvd ; } void
Assembly_union_99d6582_1_computeAsmRuntimeDerivedValuesInts ( const double *
rtp , int * rtdvi ) { ( void ) rtp ; ( void ) rtdvi ; } void
Assembly_union_99d6582_1_computeAsmRuntimeDerivedValues ( const double * rtp
, RuntimeDerivedValuesBundle * rtdv ) {
Assembly_union_99d6582_1_computeAsmRuntimeDerivedValuesDoubles ( rtp , rtdv
-> mDoubles . mValues ) ;
Assembly_union_99d6582_1_computeAsmRuntimeDerivedValuesInts ( rtp , rtdv ->
mInts . mValues ) ; } void
Assembly_union_99d6582_1_computeSimRuntimeDerivedValuesDoubles ( const double
* rtp , double * rtdvd ) { ( void ) rtp ; ( void ) rtdvd ; } void
Assembly_union_99d6582_1_computeSimRuntimeDerivedValuesInts ( const double *
rtp , int * rtdvi ) { ( void ) rtp ; ( void ) rtdvi ; } void
Assembly_union_99d6582_1_computeSimRuntimeDerivedValues ( const double * rtp
, RuntimeDerivedValuesBundle * rtdv ) {
Assembly_union_99d6582_1_computeSimRuntimeDerivedValuesDoubles ( rtp , rtdv
-> mDoubles . mValues ) ;
Assembly_union_99d6582_1_computeSimRuntimeDerivedValuesInts ( rtp , rtdv ->
mInts . mValues ) ; }
