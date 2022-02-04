#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Assembly_union_99d6582_1_geometries.h"
PmfMessageId Assembly_union_99d6582_1_compDerivs ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
deriv , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; int ii [ 1 ] ; double xx [ 33 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void )
discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = - 0.98329708016856 ; xx [ 1 ]
= 0.1685696671689517 ; xx [ 2 ] = - 0.06227963397185661 ; xx [ 3 ] = -
0.02885076489219929 ; xx [ 4 ] = 0.5 * input [ 2 ] ; xx [ 5 ] =
0.1322054921478819 ; xx [ 6 ] = sin ( xx [ 4 ] ) ; xx [ 7 ] =
0.3279144929098438 ; xx [ 8 ] = 0.9354110290057608 ; xx [ 9 ] = cos ( xx [ 4
] ) ; xx [ 10 ] = - ( xx [ 5 ] * xx [ 6 ] ) ; xx [ 11 ] = - ( xx [ 7 ] * xx [
6 ] ) ; xx [ 12 ] = xx [ 8 ] * xx [ 6 ] ; pm_math_Quaternion_compose_ra ( xx
+ 0 , xx + 9 , xx + 13 ) ; xx [ 0 ] = - ( xx [ 5 ] * inputDot [ 2 ] ) ; xx [
1 ] = - ( xx [ 7 ] * inputDot [ 2 ] ) ; xx [ 2 ] = xx [ 8 ] * inputDot [ 2 ]
; xx [ 3 ] = 2.280336493391585e-3 ; xx [ 4 ] = 0.01879670760072098 ; xx [ 5 ]
= 6.26702022011044e-3 ; xx [ 6 ] = xx [ 3 ] * inputDot [ 2 ] ; xx [ 7 ] = - (
xx [ 4 ] * inputDot [ 2 ] ) ; xx [ 8 ] = - ( xx [ 5 ] * inputDot [ 2 ] ) ;
pm_math_Vector3_cross_ra ( xx + 0 , xx + 6 , xx + 9 ) ; xx [ 0 ] = 34.0 ; xx
[ 6 ] = ( xx [ 9 ] + xx [ 3 ] * inputDdot [ 2 ] ) * xx [ 0 ] ; xx [ 7 ] = (
xx [ 10 ] - xx [ 4 ] * inputDdot [ 2 ] ) * xx [ 0 ] ; xx [ 8 ] = ( xx [ 11 ]
- xx [ 5 ] * inputDdot [ 2 ] ) * xx [ 0 ] ; pm_math_Quaternion_xform_ra ( xx
+ 13 , xx + 6 , xx + 1 ) ; xx [ 1 ] = xx [ 13 ] * xx [ 13 ] ; xx [ 2 ] = 2.0
; xx [ 4 ] = 1.0 ; xx [ 5 ] = ( xx [ 1 ] + xx [ 14 ] * xx [ 14 ] ) * xx [ 2 ]
- xx [ 4 ] ; xx [ 6 ] = xx [ 14 ] * xx [ 15 ] ; xx [ 7 ] = xx [ 13 ] * xx [
16 ] ; xx [ 8 ] = xx [ 6 ] - xx [ 7 ] ; xx [ 9 ] = xx [ 14 ] * xx [ 16 ] ; xx
[ 10 ] = xx [ 13 ] * xx [ 15 ] ; xx [ 11 ] = xx [ 9 ] + xx [ 10 ] ; xx [ 12 ]
= xx [ 6 ] + xx [ 7 ] ; xx [ 6 ] = ( xx [ 1 ] + xx [ 15 ] * xx [ 15 ] ) * xx
[ 2 ] - xx [ 4 ] ; xx [ 7 ] = xx [ 15 ] * xx [ 16 ] ; xx [ 15 ] = xx [ 13 ] *
xx [ 14 ] ; xx [ 13 ] = xx [ 7 ] - xx [ 15 ] ; xx [ 14 ] = xx [ 9 ] - xx [ 10
] ; xx [ 9 ] = xx [ 7 ] + xx [ 15 ] ; xx [ 7 ] = ( xx [ 1 ] + xx [ 16 ] * xx
[ 16 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 15 ] = xx [ 5 ] ; xx [ 16 ] = xx [ 2 ]
* xx [ 8 ] ; xx [ 17 ] = xx [ 11 ] * xx [ 2 ] ; xx [ 18 ] = xx [ 12 ] * xx [
2 ] ; xx [ 19 ] = xx [ 6 ] ; xx [ 20 ] = xx [ 2 ] * xx [ 13 ] ; xx [ 21 ] =
xx [ 2 ] * xx [ 14 ] ; xx [ 22 ] = xx [ 9 ] * xx [ 2 ] ; xx [ 23 ] = xx [ 7 ]
; xx [ 1 ] = 68.0 ; xx [ 24 ] = xx [ 0 ] * xx [ 5 ] ; xx [ 25 ] = xx [ 12 ] *
xx [ 1 ] ; xx [ 26 ] = xx [ 1 ] * xx [ 14 ] ; xx [ 27 ] = xx [ 1 ] * xx [ 8 ]
; xx [ 28 ] = xx [ 0 ] * xx [ 6 ] ; xx [ 29 ] = xx [ 9 ] * xx [ 1 ] ; xx [ 30
] = xx [ 11 ] * xx [ 1 ] ; xx [ 31 ] = xx [ 1 ] * xx [ 13 ] ; xx [ 32 ] = xx
[ 0 ] * xx [ 7 ] ; pm_math_Matrix3x3_compose_ra ( xx + 15 , xx + 24 , xx + 4
) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 12 , 1 , xx + 0 ) ; if ( ii [ 0 ]
!= 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Assembly_union/Cartesian Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } deriv [ 0 ] = state [ 1 ] ; deriv [ 1 ] = - ( ( xx [ 3 ] +
xx [ 10 ] * inputDdot [ 0 ] + xx [ 11 ] * inputDdot [ 1 ] ) / xx [ 12 ] ) ;
errorResult [ 0 ] = 0.0 ; return NULL ; } PmfMessageId
Assembly_union_99d6582_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 1 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0e-9 ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [
0 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; } PmfMessageId
Assembly_union_99d6582_1_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 1 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = + pmf_get_inf ( ) ; bounds [ 0 ] = xx [ 0 ] ; bounds [
1 ] = xx [ 0 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; }
