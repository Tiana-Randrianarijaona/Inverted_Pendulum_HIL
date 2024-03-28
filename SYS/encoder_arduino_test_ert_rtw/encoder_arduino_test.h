/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: encoder_arduino_test.h
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

#ifndef RTW_HEADER_encoder_arduino_test_h_
#define RTW_HEADER_encoder_arduino_test_h_
#ifndef encoder_arduino_test_COMMON_INCLUDES_
#define encoder_arduino_test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "encoder_arduino.h"
#include "MW_AnalogIn.h"
#endif                               /* encoder_arduino_test_COMMON_INCLUDES_ */

#include "encoder_arduino_test_types.h"
#include "rt_nonfinite.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
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
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  int32_T Encodercounts;               /* '<Root>/Encoder counts' */
  uint16_T PotentiometerValues;        /* '<Root>/¨Potentiometer Values' */
} B_encoder_arduino_test_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  Encoder_arduino_encoder_ardui_T obj; /* '<Root>/Encoder counts' */
  codertarget_arduinobase_inter_T obj_j;/* '<Root>/¨Potentiometer Values' */
} DW_encoder_arduino_test_T;

/* Parameters (default storage) */
struct P_encoder_arduino_test_T_ {
  real_T Encodercounts_SampleTime;     /* Expression: 0.01
                                        * Referenced by: '<Root>/Encoder counts'
                                        */
  real_T PotentiometerValues_SampleTime;/* Expression: -1
                                         * Referenced by: '<Root>/¨Potentiometer Values'
                                         */
};

/* Real-time Model Data Structure */
struct tag_RTM_encoder_arduino_test_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_encoder_arduino_test_T encoder_arduino_test_P;

/* Block signals (default storage) */
extern B_encoder_arduino_test_T encoder_arduino_test_B;

/* Block states (default storage) */
extern DW_encoder_arduino_test_T encoder_arduino_test_DW;

/* Model entry point functions */
extern void encoder_arduino_test_initialize(void);
extern void encoder_arduino_test_step(void);
extern void encoder_arduino_test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_encoder_arduino_test_T *const encoder_arduino_test_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Saturation' : Unused code path elimination
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
 * '<Root>' : 'encoder_arduino_test'
 */
#endif                                 /* RTW_HEADER_encoder_arduino_test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
