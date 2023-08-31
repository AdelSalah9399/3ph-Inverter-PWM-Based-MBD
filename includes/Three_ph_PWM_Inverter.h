/*
 * File: Three_ph_PWM_Inverter.h
 *
 * Code generated for Simulink model 'Three_ph_PWM_Inverter'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Aug 31 23:23:48 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Three_ph_PWM_Inverter_h_
#define RTW_HEADER_Three_ph_PWM_Inverter_h_
#include <stddef.h>
#include <string.h>
#include <float.h>
#include <math.h>
#ifndef Three_ph_PWM_Inverter_COMMON_INCLUDES_
#define Three_ph_PWM_Inverter_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif                              /* Three_ph_PWM_Inverter_COMMON_INCLUDES_ */

#include "Three_ph_PWM_Inverter_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T StateSpace_o1[3];             /* '<S37>/State-Space' */
  real_T StateSpace_o2[12];            /* '<S37>/State-Space' */
  real_T StateSpace_RWORK[2];          /* '<S37>/State-Space' */
  real_T DataTypeConversion;           /* '<S21>/Data Type Conversion' */
  real_T DataTypeConversion_k;         /* '<S15>/Data Type Conversion' */
  real_T DataTypeConversion_k1;        /* '<S25>/Data Type Conversion' */
  real_T DataTypeConversion_n;         /* '<S19>/Data Type Conversion' */
  real_T DataTypeConversion_l;         /* '<S17>/Data Type Conversion' */
  real_T DataTypeConversion_h;         /* '<S23>/Data Type Conversion' */
  int_T StateSpace_IWORK[23];          /* '<S37>/State-Space' */
  int_T StateSpace_MODE[7];            /* '<S37>/State-Space' */
  void *StateSpace_PWORK[22];          /* '<S37>/State-Space' */
} DW;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: Amplitude
   * Referenced by: '<S14>/DC'
   */
  real_T DC_Value;

  /* Computed Parameter: StateSpace_P1_Size
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P1_Size[2];

  /* Expression: S.Mg
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P1[198];

  /* Computed Parameter: StateSpace_P2_Size
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P2_Size[2];

  /* Expression: [S.nb.x S.nb.u S.nb.y S.nb.s]
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P2[4];

  /* Computed Parameter: StateSpace_P4_Size
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P4_Size[2];

  /* Computed Parameter: StateSpace_P4
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P4[726];

  /* Computed Parameter: StateSpace_P5_Size
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P5_Size[2];

  /* Expression: S.SwitchVf
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P5[12];

  /* Computed Parameter: StateSpace_P6_Size
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P6_Size[2];

  /* Expression: S.SwitchType
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P6[6];

  /* Computed Parameter: StateSpace_P7_Size
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P7_Size[2];

  /* Expression: S.SwitchGateInitialValue
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P7[6];

  /* Computed Parameter: StateSpace_P8_Size
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P8_Size[2];

  /* Expression: S.SwitchTolerance
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P8[6];

  /* Computed Parameter: StateSpace_P9_Size
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P9_Size[2];

  /* Expression: S.SaveMatrices
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P9;

  /* Computed Parameter: StateSpace_P10_Size
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P10_Size[2];

  /* Expression: S.BufferSize
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P10;

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<Root>/B Sine Wave2'
   *   '<Root>/R Sine Wave'
   *   '<Root>/Y Sine Wave1'
   *   '<S15>/qqq'
   *   '<S17>/qqq'
   *   '<S19>/qqq'
   *   '<S21>/qqq'
   *   '<S23>/qqq'
   *   '<S25>/qqq'
   */
  real_T pooled1;
} ConstP;

/* Constant parameters with dynamic initialization (default storage) */
typedef struct {
  /* Computed Parameter: StateSpace_P3_Size
   * Referenced by: '<S37>/State-Space'
   */
  real_T StateSpace_P3_Size[2];
} ConstInitP;

/* Real-time Model Data Structure */
struct tag_RTM {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct _ssPortInfo2 inputOutputPortInfo2[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[7];
      real_T const *UPtrs1[6];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[4];
      struct _ssDWorkAuxRecord dWorkAux[4];
    } Sfcn0;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Constant parameters with dynamic initialization (default storage) */
extern ConstInitP rtConstInitP;        /* constant parameters */

/* Model entry point functions */
extern void Three_ph_PWM_Inverter_initialize(void);
extern void Three_ph_PWM_Inverter_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S15>/Ron' : Unused code path elimination
 * Block '<S15>/Sum' : Unused code path elimination
 * Block '<S17>/Ron' : Unused code path elimination
 * Block '<S17>/Sum' : Unused code path elimination
 * Block '<S19>/Ron' : Unused code path elimination
 * Block '<S19>/Sum' : Unused code path elimination
 * Block '<S21>/Ron' : Unused code path elimination
 * Block '<S21>/Sum' : Unused code path elimination
 * Block '<S23>/Ron' : Unused code path elimination
 * Block '<S23>/Sum' : Unused code path elimination
 * Block '<S25>/Ron' : Unused code path elimination
 * Block '<S25>/Sum' : Unused code path elimination
 * Block '<S27>/Hit  Crossing' : Unused code path elimination
 * Block '<S27>/Unit Delay' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 * Block '<S12>/Kv' : Unused code path elimination
 * Block '<S12>/Kv1' : Unused code path elimination
 * Block '<S31>/do not delete this gain' : Unused code path elimination
 * Block '<S32>/do not delete this gain' : Unused code path elimination
 * Block '<S33>/do not delete this gain' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Three_ph_PWM_Inverter'
 * '<S1>'   : 'Three_ph_PWM_Inverter/Compare To Zero'
 * '<S2>'   : 'Three_ph_PWM_Inverter/Compare To Zero1'
 * '<S3>'   : 'Three_ph_PWM_Inverter/Compare To Zero2'
 * '<S4>'   : 'Three_ph_PWM_Inverter/DC Voltage Source'
 * '<S5>'   : 'Three_ph_PWM_Inverter/S1'
 * '<S6>'   : 'Three_ph_PWM_Inverter/S2'
 * '<S7>'   : 'Three_ph_PWM_Inverter/S3'
 * '<S8>'   : 'Three_ph_PWM_Inverter/S4'
 * '<S9>'   : 'Three_ph_PWM_Inverter/S5'
 * '<S10>'  : 'Three_ph_PWM_Inverter/S6'
 * '<S11>'  : 'Three_ph_PWM_Inverter/Sawtooth Generator CARRIER'
 * '<S12>'  : 'Three_ph_PWM_Inverter/Three-Phase V-I Measurement'
 * '<S13>'  : 'Three_ph_PWM_Inverter/powergui'
 * '<S14>'  : 'Three_ph_PWM_Inverter/DC Voltage Source/Model'
 * '<S15>'  : 'Three_ph_PWM_Inverter/S1/Model'
 * '<S16>'  : 'Three_ph_PWM_Inverter/S1/Model/Measurement list'
 * '<S17>'  : 'Three_ph_PWM_Inverter/S2/Model'
 * '<S18>'  : 'Three_ph_PWM_Inverter/S2/Model/Measurement list'
 * '<S19>'  : 'Three_ph_PWM_Inverter/S3/Model'
 * '<S20>'  : 'Three_ph_PWM_Inverter/S3/Model/Measurement list'
 * '<S21>'  : 'Three_ph_PWM_Inverter/S4/Model'
 * '<S22>'  : 'Three_ph_PWM_Inverter/S4/Model/Measurement list'
 * '<S23>'  : 'Three_ph_PWM_Inverter/S5/Model'
 * '<S24>'  : 'Three_ph_PWM_Inverter/S5/Model/Measurement list'
 * '<S25>'  : 'Three_ph_PWM_Inverter/S6/Model'
 * '<S26>'  : 'Three_ph_PWM_Inverter/S6/Model/Measurement list'
 * '<S27>'  : 'Three_ph_PWM_Inverter/Sawtooth Generator CARRIER/Model'
 * '<S28>'  : 'Three_ph_PWM_Inverter/Three-Phase V-I Measurement/Mode I'
 * '<S29>'  : 'Three_ph_PWM_Inverter/Three-Phase V-I Measurement/Mode V'
 * '<S30>'  : 'Three_ph_PWM_Inverter/Three-Phase V-I Measurement/Model'
 * '<S31>'  : 'Three_ph_PWM_Inverter/Three-Phase V-I Measurement/Model/U A:'
 * '<S32>'  : 'Three_ph_PWM_Inverter/Three-Phase V-I Measurement/Model/U B:'
 * '<S33>'  : 'Three_ph_PWM_Inverter/Three-Phase V-I Measurement/Model/U C:'
 * '<S34>'  : 'Three_ph_PWM_Inverter/Three-Phase V-I Measurement/Model/U A:/Model'
 * '<S35>'  : 'Three_ph_PWM_Inverter/Three-Phase V-I Measurement/Model/U B:/Model'
 * '<S36>'  : 'Three_ph_PWM_Inverter/Three-Phase V-I Measurement/Model/U C:/Model'
 * '<S37>'  : 'Three_ph_PWM_Inverter/powergui/EquivalentModel1'
 * '<S38>'  : 'Three_ph_PWM_Inverter/powergui/EquivalentModel1/Gates'
 * '<S39>'  : 'Three_ph_PWM_Inverter/powergui/EquivalentModel1/Sources'
 * '<S40>'  : 'Three_ph_PWM_Inverter/powergui/EquivalentModel1/Status'
 * '<S41>'  : 'Three_ph_PWM_Inverter/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_Three_ph_PWM_Inverter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
