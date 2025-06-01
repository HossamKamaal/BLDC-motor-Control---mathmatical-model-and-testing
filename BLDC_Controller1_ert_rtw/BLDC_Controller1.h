/*
 * File: BLDC_Controller1.h
 *
 * Code generated for Simulink model 'BLDC_Controller1'.
 *
 * Model version                  : 2.9
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jun  1 19:54:38 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BLDC_Controller1_h_
#define RTW_HEADER_BLDC_Controller1_h_
#ifndef BLDC_Controller1_COMMON_INCLUDES_
#define BLDC_Controller1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* BLDC_Controller1_COMMON_INCLUDES_ */

/* Model Code Variants */
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  boolean_T LogicalOperator;           /* '<S3>/Logical Operator' */
  boolean_T LogicalOperator5;          /* '<S3>/Logical Operator5' */
  boolean_T LogicalOperator1;          /* '<S3>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S3>/Logical Operator2' */
  boolean_T LogicalOperator3;          /* '<S3>/Logical Operator3' */
  boolean_T LogicalOperator4;          /* '<S3>/Logical Operator4' */
} DW;

/* Real-time Model Data Structure */
struct tag_RTM {
  DW *dwork;
};

/* Model entry point functions */
extern void BLDC_Controller1_initialize(RT_MODEL *const rtM);
extern void BLDC_Controller1_step(RT_MODEL *const rtM, boolean_T
  rtU_hall_signals[3], real_T rtU_Emf[3], boolean_T rtU_control_signal,
  boolean_T *rtY_g1, boolean_T *rtY_g2, boolean_T *rtY_g3, boolean_T *rtY_g4,
  boolean_T *rtY_g5, boolean_T *rtY_g6);

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
 * '<Root>' : 'BLDC_Controller1'
 * '<S1>'   : 'BLDC_Controller1/driving_method'
 * '<S2>'   : 'BLDC_Controller1/sensored_control'
 * '<S3>'   : 'BLDC_Controller1/sensorless_control'
 * '<S4>'   : 'BLDC_Controller1/driving_method/If_Action'
 * '<S5>'   : 'BLDC_Controller1/driving_method/elseif_Action'
 * '<S6>'   : 'BLDC_Controller1/sensored_control/Commutation Logic'
 * '<S7>'   : 'BLDC_Controller1/sensored_control/Gate Pulse'
 * '<S8>'   : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero'
 * '<S9>'   : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero1'
 * '<S10>'  : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero2'
 * '<S11>'  : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero3'
 * '<S12>'  : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero4'
 * '<S13>'  : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero5'
 * '<S14>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero'
 * '<S15>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero1'
 * '<S16>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero10'
 * '<S17>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero11'
 * '<S18>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero2'
 * '<S19>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero3'
 * '<S20>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero4'
 * '<S21>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero5'
 * '<S22>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero6'
 * '<S23>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero7'
 * '<S24>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero8'
 * '<S25>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero9'
 */

/*-
 * Requirements for '<Root>': BLDC_Controller1
 */
#endif                                 /* RTW_HEADER_BLDC_Controller1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
