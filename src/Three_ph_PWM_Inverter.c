/*
 * File: Three_ph_PWM_Inverter.c
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

#include "Three_ph_PWM_Inverter.h"
#include "Three_ph_PWM_Inverter_private.h"

/* Block signals and states (default storage) */
DW rtDW;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T u1_0;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = fabs(u0 / u1);
      if (!(fabs(u1_0 - floor(u1_0 + 0.5)) > DBL_EPSILON * u1_0)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void Three_ph_PWM_Inverter_step(void)
{
  real_T rtb_Fcn1;
  real_T rtb_LogicalOperator2_tmp;
  boolean_T rtb_LogicalOperator2;

  /* S-Function (sfun_spid_contc): '<S37>/State-Space' incorporates:
   *  Constant: '<S14>/DC'
   *  Constant: '<S15>/qqq'
   *  Constant: '<S17>/qqq'
   *  Constant: '<S19>/qqq'
   *  Constant: '<S21>/qqq'
   *  Constant: '<S23>/qqq'
   *  Constant: '<S25>/qqq'
   */

  /* Level2 S-Function Block: '<S37>/State-Space' (sfun_spid_contc) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* Fcn: '<S27>/Fcn1' incorporates:
   *  Clock: '<S27>/Clock'
   *  Constant: '<S27>/Constant2'
   *  Constant: '<S27>/Constant4'
   *  Gain: '<S27>/1\ib2'
   *  Math: '<S27>/Math Function1'
   *  Sum: '<S27>/Add2'
   */
  rtb_Fcn1 = rt_remd_snf(rtM->Timing.t[0] + 0.0005, 0.001) * 1000.0 * 2.0 - 1.0;

  /* Sin: '<Root>/R Sine Wave' incorporates:
   *  Sin: '<Root>/B Sine Wave2'
   *  Sin: '<Root>/Y Sine Wave1'
   */
  rtb_LogicalOperator2_tmp = 314.15926535897933 * rtM->Timing.t[0];

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   *  Sin: '<Root>/R Sine Wave'
   *  Sum: '<Root>/Add'
   */
  rtb_LogicalOperator2 = (sin(rtb_LogicalOperator2_tmp) - rtb_Fcn1 >= 0.0);

  /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
   *  Logic: '<Root>/Logical Operator'
   */
  rtDW.DataTypeConversion = !rtb_LogicalOperator2;

  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  rtDW.DataTypeConversion_k = rtb_LogicalOperator2;

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   *  Sin: '<Root>/Y Sine Wave1'
   *  Sum: '<Root>/Add1'
   */
  rtb_LogicalOperator2 = (sin(rtb_LogicalOperator2_tmp + 2.0943951023931953) -
    rtb_Fcn1 >= 0.0);

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Logic: '<Root>/Logical Operator1'
   */
  rtDW.DataTypeConversion_k1 = !rtb_LogicalOperator2;

  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  rtDW.DataTypeConversion_n = rtb_LogicalOperator2;

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   *  Sin: '<Root>/B Sine Wave2'
   *  Sum: '<Root>/Add2'
   */
  rtb_LogicalOperator2 = (sin(rtb_LogicalOperator2_tmp + -2.0943951023931953) -
    rtb_Fcn1 >= 0.0);

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Logic: '<Root>/Logical Operator2'
   */
  rtDW.DataTypeConversion_l = !rtb_LogicalOperator2;

  /* DataTypeConversion: '<S23>/Data Type Conversion' */
  rtDW.DataTypeConversion_h = rtb_LogicalOperator2;

  /* Update for S-Function (sfun_spid_contc): '<S37>/State-Space' incorporates:
   *  Constant: '<S14>/DC'
   *  Constant: '<S15>/qqq'
   *  Constant: '<S17>/qqq'
   *  Constant: '<S19>/qqq'
   *  Constant: '<S21>/qqq'
   *  Constant: '<S23>/qqq'
   *  Constant: '<S25>/qqq'
   */
  /* Level2 S-Function Block: '<S37>/State-Space' (sfun_spid_contc) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnUpdate(rts,0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  rtM->Timing.t[0] =
    ((time_T)(++rtM->Timing.clockTick0)) * rtM->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.0005s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.0005, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    rtM->Timing.clockTick1++;
  }
}

/* Model initialize function */
void Three_ph_PWM_Inverter_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&rtM->solverInfo, &rtM->Timing.simTimeStep);
    rtsiSetTPtr(&rtM->solverInfo, &rtmGetTPtr(rtM));
    rtsiSetStepSizePtr(&rtM->solverInfo, &rtM->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&rtM->solverInfo, (&rtmGetErrorStatus(rtM)));
    rtsiSetRTModelPtr(&rtM->solverInfo, rtM);
  }

  rtsiSetSimTimeStep(&rtM->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&rtM->solverInfo,"FixedStepDiscrete");
  rtM->solverInfoPtr = (&rtM->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    rtM->Timing.sampleTimes = (&rtM->Timing.sampleTimesArray[0]);
    rtM->Timing.offsetTimes = (&rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    rtM->Timing.sampleTimes[0] = (0.0);
    rtM->Timing.sampleTimes[1] = (0.0005);

    /* task offsets */
    rtM->Timing.offsetTimes[0] = (0.0);
    rtM->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(rtM, &rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(rtM, -1);
  rtM->Timing.stepSize0 = 0.0005;
  rtM->solverInfoPtr = (&rtM->solverInfo);
  rtM->Timing.stepSize = (0.0005);
  rtsiSetFixedStepSize(&rtM->solverInfo, 0.0005);
  rtsiSetSolverMode(&rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &rtM->NonInlinedSFcns.sfcnInfo;
    rtM->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(rtM)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &rtM->Sizes.numSampTimes);
    rtM->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(rtM)[0]);
    rtM->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(rtM)[1]);
    rtssSetTPtrPtr(sfcnInfo,rtM->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(rtM));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(rtM));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(rtM));
    rtssSetStepSizePtr(sfcnInfo, &rtM->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(rtM));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &rtM->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &rtM->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &rtM->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &rtM->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &rtM->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &rtM->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &rtM->solverInfoPtr);
  }

  rtM->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&rtM->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    rtM->childSfunctions = (&rtM->NonInlinedSFcns.childSFunctionPtrs[0]);
    rtM->childSfunctions[0] = (&rtM->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: Three_ph_PWM_Inverter/<S37>/State-Space (sfun_spid_contc) */
    {
      SimStruct *rts = rtM->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = rtM->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = rtM->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = rtM->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &rtM->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts, &rtM->
        NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, rtM->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &rtM->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &rtM->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &rtM->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &rtM->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts, &rtM->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts, &rtM->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &rtM->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &rtM->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &rtM->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &rtConstP.DC_Value;
          sfcnUPtrs[1] = &rtConstP.pooled1;
          sfcnUPtrs[2] = &rtConstP.pooled1;
          sfcnUPtrs[3] = &rtConstP.pooled1;
          sfcnUPtrs[4] = &rtConstP.pooled1;
          sfcnUPtrs[5] = &rtConstP.pooled1;
          sfcnUPtrs[6] = &rtConstP.pooled1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 7);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &rtM->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &rtDW.DataTypeConversion_k;
          sfcnUPtrs[1] = &rtDW.DataTypeConversion_l;
          sfcnUPtrs[2] = &rtDW.DataTypeConversion_n;
          sfcnUPtrs[3] = &rtDW.DataTypeConversion;
          sfcnUPtrs[4] = &rtDW.DataTypeConversion_h;
          sfcnUPtrs[5] = &rtDW.DataTypeConversion_k1;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 6);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts, &rtM->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &rtM->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &rtM->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 3);
          ssSetOutputPortSignal(rts, 0, ((real_T *) rtDW.StateSpace_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 12);
          ssSetOutputPortSignal(rts, 1, ((real_T *) rtDW.StateSpace_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "State-Space");
      ssSetPath(rts,
                "Three_ph_PWM_Inverter/powergui/EquivalentModel1/State-Space");
      ssSetRTModel(rts,rtM);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &rtM->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)rtConstP.StateSpace_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)rtConstP.StateSpace_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)rtConstInitP.StateSpace_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)rtConstP.StateSpace_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)rtConstP.StateSpace_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)rtConstP.StateSpace_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)rtConstP.StateSpace_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)rtConstP.StateSpace_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)rtConstP.StateSpace_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)rtConstP.StateSpace_P10_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &rtDW.StateSpace_RWORK[0]);
      ssSetIWork(rts, (int_T *) &rtDW.StateSpace_IWORK[0]);
      ssSetPWork(rts, (void **) &rtDW.StateSpace_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &rtM->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &rtM->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 4);

        /* MODE */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &rtDW.StateSpace_MODE[0]);

        /* RWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &rtDW.StateSpace_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 2, 23);
        ssSetDWorkDataType(rts, 2,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &rtDW.StateSpace_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 3, 22);
        ssSetDWorkDataType(rts, 3,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 3, 0);
        ssSetDWork(rts, 3, &rtDW.StateSpace_PWORK[0]);
      }

      ssSetModeVector(rts, (int_T *) &rtDW.StateSpace_MODE[0]);

      /* registration */
      sfun_spid_contc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }
  }

  /* Start for S-Function (sfun_spid_contc): '<S37>/State-Space' incorporates:
   *  Constant: '<S14>/DC'
   *  Constant: '<S15>/qqq'
   *  Constant: '<S17>/qqq'
   *  Constant: '<S19>/qqq'
   *  Constant: '<S21>/qqq'
   *  Constant: '<S23>/qqq'
   *  Constant: '<S25>/qqq'
   */
  /* Level2 S-Function Block: '<S37>/State-Space' (sfun_spid_contc) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for S-Function (sfun_spid_contc): '<S37>/State-Space' incorporates:
   *  Constant: '<S14>/DC'
   *  Constant: '<S15>/qqq'
   *  Constant: '<S17>/qqq'
   *  Constant: '<S19>/qqq'
   *  Constant: '<S21>/qqq'
   *  Constant: '<S23>/qqq'
   *  Constant: '<S25>/qqq'
   */
  /* Level2 S-Function Block: '<S37>/State-Space' (sfun_spid_contc) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
