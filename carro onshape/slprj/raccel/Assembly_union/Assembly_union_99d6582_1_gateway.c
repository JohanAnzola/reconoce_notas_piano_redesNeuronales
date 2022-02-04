#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif
#include "nesl_rtw.h"
#include "Assembly_union_99d6582_1.h"
#include "Assembly_union_99d6582_1_gateway.h"
void Assembly_union_99d6582_1_gateway ( void ) { NeModelParameters
modelparams = { ( NeSolverType ) 0 , 0.001 , 1 , 0 , 0.001 , 0 , 0 , 0 , 0 ,
( SscLoggingSetting ) 0 , 529603436 , } ; NeSolverParameters solverparams = {
0 , 0 , 1 , 0 , 0 , 0.001 , 1e-06 , 1e-09 , 0 , 0 , 100 , 0 , 1 , 0 , 1e-09 ,
0 , ( NeLocalSolverChoice ) 0 , 0.001 , 0 , 3 , 2 , ( NeLinearAlgebraChoice )
0 , ( NeEquationFormulationChoice ) 0 , 1024 , 1 , 0.001 , (
NePartitionStorageMethod ) 0 , 1024 , ( NePartitionMethod ) 0 , } ; const
NeOutputParameters * outputparameters = NULL ; NeDae * dae ; size_t
numOutputs = 0 ; int * rtpDaes = NULL ; Assembly_union_99d6582_1_dae ( & dae
, & modelparams , & solverparams ) ; nesl_register_simulator_group (
"Assembly_union/Solver Configuration_1" , 1 , & dae , & solverparams , &
modelparams , numOutputs , outputparameters , 0 , rtpDaes ) ; }
