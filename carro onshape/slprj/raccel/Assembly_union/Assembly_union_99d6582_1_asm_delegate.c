#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void Assembly_union_99d6582_1_setTargets ( const RuntimeDerivedValuesBundle *
rtdv , CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
Assembly_union_99d6582_1_resetAsmStateVector ( const void * mech , double *
state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx
[ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [
0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0
] ; state [ 7 ] = xx [ 0 ] ; } void
Assembly_union_99d6582_1_initializeTrackedAngleState ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const
double * motionData , double * state , void * neDiagMgr0 ) {
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; (
void ) mech ; ( void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; (
void ) state ; ( void ) neDiagMgr ; } void
Assembly_union_99d6582_1_computeDiscreteState ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , double * state ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; } void
Assembly_union_99d6582_1_adjustPosition ( const void * mech , const double *
dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] = state [ 0 ] +
dofDeltas [ 0 ] ; state [ 1 ] = state [ 1 ] + dofDeltas [ 1 ] ; state [ 2 ] =
state [ 2 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ] + dofDeltas [ 3 ] ;
} static void perturbAsmJointPrimitiveState_0_0 ( double mag , double * state
) { state [ 0 ] = state [ 0 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_1 ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_1v ( double mag , double * state ) { state [
1 ] = state [ 1 ] + mag ; state [ 4 ] = state [ 4 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_2 ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_1_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbAsmJointPrimitiveState_1_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } void
Assembly_union_99d6582_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 2 :
perturbAsmJointPrimitiveState_0_1 ( mag , state ) ; break ; case 3 :
perturbAsmJointPrimitiveState_0_1v ( mag , state ) ; break ; case 4 :
perturbAsmJointPrimitiveState_0_2 ( mag , state ) ; break ; case 5 :
perturbAsmJointPrimitiveState_0_2v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; } } void
Assembly_union_99d6582_1_computePosDofBlendMatrix ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * state , int partialType ,
double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx *
6 + primIdx ) ) { } } void Assembly_union_99d6582_1_computeVelDofBlendMatrix
( const void * mech , size_t stageIdx , size_t primIdx , const double * state
, int partialType , double * matrix ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) state ; ( void ) partialType ; ( void ) matrix ;
switch ( ( stageIdx * 6 + primIdx ) ) { } } void
Assembly_union_99d6582_1_projectPartiallyTargetedPos ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * origState , int partialType
, double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) origState ; ( void ) partialType ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) ) { } } void
Assembly_union_99d6582_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 21 ] ; ( void ) mech ; ( void
) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.0 ; xx [ 1 ] = - 0.98329708016856 ;
xx [ 2 ] = 0.1685696671689517 ; xx [ 3 ] = - 0.06227963397185661 ; xx [ 4 ] =
- 0.02885076489219929 ; xx [ 5 ] = 0.5 * state [ 6 ] ; xx [ 6 ] =
0.1322054921478819 ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 8 ] =
0.3279144929098438 ; xx [ 9 ] = 0.9354110290057608 ; xx [ 10 ] = cos ( xx [ 5
] ) ; xx [ 11 ] = - ( xx [ 6 ] * xx [ 7 ] ) ; xx [ 12 ] = - ( xx [ 8 ] * xx [
7 ] ) ; xx [ 13 ] = xx [ 9 ] * xx [ 7 ] ; pm_math_Quaternion_compose_ra ( xx
+ 1 , xx + 10 , xx + 14 ) ; xx [ 1 ] = 0.0199784815109976 ; xx [ 2 ] =
2.14978522495203e-3 ; xx [ 3 ] = 8.215668712510818e-4 ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 1 , xx + 10 ) ; xx [ 1 ] = state
[ 3 ] ; xx [ 2 ] = state [ 4 ] ; xx [ 3 ] = state [ 5 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 14 , xx + 1 , xx + 18 ) ;
motionData [ 0 ] = - 1.0 ; motionData [ 1 ] = xx [ 0 ] ; motionData [ 2 ] =
xx [ 0 ] ; motionData [ 3 ] = xx [ 0 ] ; motionData [ 4 ] = state [ 0 ] -
1.449256e-3 ; motionData [ 5 ] = state [ 1 ] - 0.01810301200000001 ;
motionData [ 6 ] = 5.171192e-3 + state [ 2 ] ; motionData [ 7 ] = xx [ 14 ] ;
motionData [ 8 ] = xx [ 15 ] ; motionData [ 9 ] = xx [ 16 ] ; motionData [ 10
] = xx [ 17 ] ; motionData [ 11 ] = - xx [ 10 ] ; motionData [ 12 ] = - xx [
11 ] ; motionData [ 13 ] = - xx [ 12 ] ; motionData [ 14 ] = xx [ 0 ] ;
motionData [ 15 ] = xx [ 0 ] ; motionData [ 16 ] = xx [ 0 ] ; motionData [ 17
] = state [ 3 ] ; motionData [ 18 ] = state [ 4 ] ; motionData [ 19 ] = state
[ 5 ] ; motionData [ 20 ] = - ( xx [ 6 ] * state [ 7 ] ) ; motionData [ 21 ]
= - ( xx [ 8 ] * state [ 7 ] ) ; motionData [ 22 ] = xx [ 9 ] * state [ 7 ] ;
motionData [ 23 ] = xx [ 18 ] + 2.280336493391585e-3 * state [ 7 ] ;
motionData [ 24 ] = xx [ 19 ] - 0.01879670760072098 * state [ 7 ] ;
motionData [ 25 ] = xx [ 20 ] - 6.26702022011044e-3 * state [ 7 ] ; } size_t
Assembly_union_99d6582_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const double *
state , const int * modeVector , const double * motionData , double * error )
{ ( void ) mech ; ( void ) rtdv ; ( void ) state ; ( void ) modeVector ; (
void ) motionData ; ( void ) error ; switch ( constraintIdx ) { } return 0 ;
} size_t Assembly_union_99d6582_1_computeAssemblyJacobian ( const void * mech
, const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { } return 0 ; }
size_t Assembly_union_99d6582_1_computeFullAssemblyJacobian ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , const double * state , const
int * modeVector , const double * motionData , double * J ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ;
( void ) modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; } int
Assembly_union_99d6582_1_isInKinematicSingularity ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData ) { ( void ) mech ; ( void ) rtdv ; (
void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) { } return
0 ; } PmfMessageId Assembly_union_99d6582_1_convertStateVector ( const void *
asmMech , const RuntimeDerivedValuesBundle * rtdv , const void * simMech ,
const double * asmState , const int * asmModeVector , const int *
simModeVector , double * simState , void * neDiagMgr0 ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * )
neDiagMgr0 ; ( void ) asmMech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
simMech ; ( void ) asmModeVector ; ( void ) simModeVector ; ( void )
neDiagMgr ; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ]
; simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ;
simState [ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState
[ 6 ] = asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; return NULL ; }
