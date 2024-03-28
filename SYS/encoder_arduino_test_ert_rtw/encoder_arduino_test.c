/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: encoder_arduino_test.c
 *
 * Code generated for Simulink model 'encoder_arduino_test'.
 *
 * Model version                  : 18.0
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Mar 28 15:23:32 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "encoder_arduino_test.h"
#include "encoder_arduino_test_private.h"
#include "rt_nonfinite.h"

/* Block signals (default storage) */
B_encoder_arduino_test_T encoder_arduino_test_B;

/* Block states (default storage) */
DW_encoder_arduino_test_T encoder_arduino_test_DW;

/* Real-time model */
static RT_MODEL_encoder_arduino_test_T encoder_arduino_test_M_;
RT_MODEL_encoder_arduino_test_T *const encoder_arduino_test_M =
  &encoder_arduino_test_M_;

/* Model step function */
void encoder_arduino_test_step(void)
{
  /* MATLABSystem: '<Root>/Encoder counts' */
  if (encoder_arduino_test_DW.obj.SampleTime !=
      encoder_arduino_test_P.Encodercounts_SampleTime) {
    encoder_arduino_test_DW.obj.SampleTime =
      encoder_arduino_test_P.Encodercounts_SampleTime;
  }

  /* MATLABSystem: '<Root>/Encoder counts' */
  /*         %% Define output properties */
  /*  Call: int enc_output(int enc) */
  encoder_arduino_test_B.Encodercounts = enc_output(0.0);

  /* MATLABSystem: '<Root>/¨Potentiometer Values' */
  if (encoder_arduino_test_DW.obj_j.SampleTime !=
      encoder_arduino_test_P.PotentiometerValues_SampleTime) {
    encoder_arduino_test_DW.obj_j.SampleTime =
      encoder_arduino_test_P.PotentiometerValues_SampleTime;
  }

  encoder_arduino_test_DW.obj_j.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogIn_GetHandle(17UL);

  /* MATLABSystem: '<Root>/¨Potentiometer Values' */
  MW_AnalogInSingle_ReadResult
    (encoder_arduino_test_DW.obj_j.AnalogInDriverObj.MW_ANALOGIN_HANDLE,
     &encoder_arduino_test_B.PotentiometerValues, MW_ANALOGIN_UINT16);

  {                                    /* Sample time: [0.01s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  encoder_arduino_test_M->Timing.taskTime0 =
    ((time_T)(++encoder_arduino_test_M->Timing.clockTick0)) *
    encoder_arduino_test_M->Timing.stepSize0;
}

/* Model initialize function */
void encoder_arduino_test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(encoder_arduino_test_M, -1);
  encoder_arduino_test_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  encoder_arduino_test_M->Sizes.checksums[0] = (305878850U);
  encoder_arduino_test_M->Sizes.checksums[1] = (2910104634U);
  encoder_arduino_test_M->Sizes.checksums[2] = (1569660579U);
  encoder_arduino_test_M->Sizes.checksums[3] = (675924572U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    encoder_arduino_test_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(encoder_arduino_test_M->extModeInfo,
      &encoder_arduino_test_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(encoder_arduino_test_M->extModeInfo,
                        encoder_arduino_test_M->Sizes.checksums);
    rteiSetTPtr(encoder_arduino_test_M->extModeInfo, rtmGetTPtr
                (encoder_arduino_test_M));
  }

  /* Start for MATLABSystem: '<Root>/Encoder counts' */
  /*  Constructor */
  /*  Support name-value pair arguments when constructing the object. */
  encoder_arduino_test_DW.obj.matlabCodegenIsDeleted = false;

  /*  Do not generate code for sprintf */
  encoder_arduino_test_DW.obj.SampleTime =
    encoder_arduino_test_P.Encodercounts_SampleTime;
  encoder_arduino_test_DW.obj.isInitialized = 1L;

  /*         %% Define output properties */
  /*  Call: void enc_init(int enc, int pinA, int pinB) */
  enc_init(0.0, 2.0, 3.0);
  encoder_arduino_test_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/¨Potentiometer Values' */
  encoder_arduino_test_DW.obj_j.matlabCodegenIsDeleted = false;
  encoder_arduino_test_DW.obj_j.SampleTime =
    encoder_arduino_test_P.PotentiometerValues_SampleTime;
  encoder_arduino_test_DW.obj_j.isInitialized = 1L;
  encoder_arduino_test_DW.obj_j.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogInSingle_Open(17UL);
  encoder_arduino_test_DW.obj_j.isSetupComplete = true;
}

/* Model terminate function */
void encoder_arduino_test_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Encoder counts' */
  if (!encoder_arduino_test_DW.obj.matlabCodegenIsDeleted) {
    encoder_arduino_test_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder counts' */
  /* Terminate for MATLABSystem: '<Root>/¨Potentiometer Values' */
  if (!encoder_arduino_test_DW.obj_j.matlabCodegenIsDeleted) {
    encoder_arduino_test_DW.obj_j.matlabCodegenIsDeleted = true;
    if ((encoder_arduino_test_DW.obj_j.isInitialized == 1L) &&
        encoder_arduino_test_DW.obj_j.isSetupComplete) {
      encoder_arduino_test_DW.obj_j.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
        MW_AnalogIn_GetHandle(17UL);
      MW_AnalogIn_Close
        (encoder_arduino_test_DW.obj_j.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/¨Potentiometer Values' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
