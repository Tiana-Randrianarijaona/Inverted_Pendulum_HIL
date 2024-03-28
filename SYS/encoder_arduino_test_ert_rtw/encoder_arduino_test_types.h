/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: encoder_arduino_test_types.h
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

#ifndef RTW_HEADER_encoder_arduino_test_types_h_
#define RTW_HEADER_encoder_arduino_test_types_h_
#include "rtwtypes.h"
#include "MW_SVD.h"
#ifndef struct_tag_tNlF2jjOTTyeKhyBNhAbs
#define struct_tag_tNlF2jjOTTyeKhyBNhAbs

struct tag_tNlF2jjOTTyeKhyBNhAbs
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
};

#endif                                 /* struct_tag_tNlF2jjOTTyeKhyBNhAbs */

#ifndef typedef_Encoder_arduino_encoder_ardui_T
#define typedef_Encoder_arduino_encoder_ardui_T

typedef struct tag_tNlF2jjOTTyeKhyBNhAbs Encoder_arduino_encoder_ardui_T;

#endif                             /* typedef_Encoder_arduino_encoder_ardui_T */

/* Custom Type definition for MATLABSystem: '<Root>/¨Potentiometer Values' */
#include "MW_SVD.h"
#ifndef struct_tag_UTG5XI0vJCsmjbgura8BP
#define struct_tag_UTG5XI0vJCsmjbgura8BP

struct tag_UTG5XI0vJCsmjbgura8BP
{
  MW_Handle_Type MW_ANALOGIN_HANDLE;
};

#endif                                 /* struct_tag_UTG5XI0vJCsmjbgura8BP */

#ifndef typedef_g_arduinodriver_ArduinoAnalog_T
#define typedef_g_arduinodriver_ArduinoAnalog_T

typedef struct tag_UTG5XI0vJCsmjbgura8BP g_arduinodriver_ArduinoAnalog_T;

#endif                             /* typedef_g_arduinodriver_ArduinoAnalog_T */

#ifndef struct_tag_8ohiN1FAOgR98njPNu14NC
#define struct_tag_8ohiN1FAOgR98njPNu14NC

struct tag_8ohiN1FAOgR98njPNu14NC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  g_arduinodriver_ArduinoAnalog_T AnalogInDriverObj;
  real_T SampleTime;
};

#endif                                 /* struct_tag_8ohiN1FAOgR98njPNu14NC */

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct tag_8ohiN1FAOgR98njPNu14NC codertarget_arduinobase_inter_T;

#endif                             /* typedef_codertarget_arduinobase_inter_T */

/* Parameters (default storage) */
typedef struct P_encoder_arduino_test_T_ P_encoder_arduino_test_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_encoder_arduino_test_T RT_MODEL_encoder_arduino_test_T;

#endif                            /* RTW_HEADER_encoder_arduino_test_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
