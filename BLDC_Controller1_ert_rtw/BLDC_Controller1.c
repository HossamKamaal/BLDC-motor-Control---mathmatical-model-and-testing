/*
 * File: BLDC_Controller1.c
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

#include "BLDC_Controller1.h"

/* Model step function */
void BLDC_Controller1_step(RT_MODEL *const rtM, boolean_T rtU_hall_signals[3],
  real_T rtU_Emf[3], boolean_T rtU_control_signal, boolean_T *rtY_g1, boolean_T *
  rtY_g2, boolean_T *rtY_g3, boolean_T *rtY_g4, boolean_T *rtY_g5, boolean_T
  *rtY_g6)
{
  DW *rtDW = rtM->dwork;
  int32_T rtb_Sum3;
  boolean_T rtb_LogicalOperator1_idx_0;
  boolean_T rtb_LogicalOperator1_idx_1;
  boolean_T rtb_LogicalOperator1_idx_2;

  /* Outputs for Enabled SubSystem: '<Root>/sensorless_control' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  /* Logic: '<Root>/NOT' incorporates:
   *  Inport: '<Root>/control_signal'
   */
  if (!rtU_control_signal) {
    /* Logic: '<S3>/Logical Operator' incorporates:
     *  Constant: '<S14>/Constant'
     *  Constant: '<S15>/Constant'
     *  Inport: '<Root>/Emf'
     *  RelationalOperator: '<S14>/Compare'
     *  RelationalOperator: '<S15>/Compare'
     */
    rtDW->LogicalOperator = ((rtU_Emf[0] > 0.0) && (rtU_Emf[1] >= 0.0));

    /* Logic: '<S3>/Logical Operator5' incorporates:
     *  Constant: '<S16>/Constant'
     *  Constant: '<S17>/Constant'
     *  Inport: '<Root>/Emf'
     *  RelationalOperator: '<S16>/Compare'
     *  RelationalOperator: '<S17>/Compare'
     */
    rtDW->LogicalOperator5 = ((rtU_Emf[1] > 0.0) && (rtU_Emf[2] >= 0.0));

    /* Logic: '<S3>/Logical Operator1' incorporates:
     *  Constant: '<S18>/Constant'
     *  Constant: '<S19>/Constant'
     *  Inport: '<Root>/Emf'
     *  RelationalOperator: '<S18>/Compare'
     *  RelationalOperator: '<S19>/Compare'
     */
    rtDW->LogicalOperator1 = ((rtU_Emf[0] <= 0.0) && (rtU_Emf[1] < 0.0));

    /* Logic: '<S3>/Logical Operator2' incorporates:
     *  Constant: '<S20>/Constant'
     *  Constant: '<S21>/Constant'
     *  Inport: '<Root>/Emf'
     *  RelationalOperator: '<S20>/Compare'
     *  RelationalOperator: '<S21>/Compare'
     */
    rtDW->LogicalOperator2 = ((rtU_Emf[0] <= 0.0) && (rtU_Emf[2] > 0.0));

    /* Logic: '<S3>/Logical Operator3' incorporates:
     *  Constant: '<S22>/Constant'
     *  Constant: '<S23>/Constant'
     *  Inport: '<Root>/Emf'
     *  RelationalOperator: '<S22>/Compare'
     *  RelationalOperator: '<S23>/Compare'
     */
    rtDW->LogicalOperator3 = ((rtU_Emf[0] > 0.0) && (rtU_Emf[2] <= 0.0));

    /* Logic: '<S3>/Logical Operator4' incorporates:
     *  Constant: '<S24>/Constant'
     *  Constant: '<S25>/Constant'
     *  Inport: '<Root>/Emf'
     *  RelationalOperator: '<S24>/Compare'
     *  RelationalOperator: '<S25>/Compare'
     */
    rtDW->LogicalOperator4 = ((rtU_Emf[1] <= 0.0) && (rtU_Emf[2] < 0.0));
  }

  /* End of Logic: '<Root>/NOT' */
  /* End of Outputs for SubSystem: '<Root>/sensorless_control' */

  /* Outputs for Enabled SubSystem: '<Root>/sensored_control' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/control_signal'
   */
  if (rtU_control_signal) {
    /* Logic: '<S6>/Logical Operator1' incorporates:
     *  Inport: '<Root>/hall_signals '
     */
    rtb_LogicalOperator1_idx_0 = !rtU_hall_signals[0];
    rtb_LogicalOperator1_idx_1 = !rtU_hall_signals[1];
    rtb_LogicalOperator1_idx_2 = !rtU_hall_signals[2];

    /* Sum: '<S6>/Sum2' incorporates:
     *  Inport: '<Root>/hall_signals '
     *  Logic: '<S6>/Logical Operator2'
     *  Logic: '<S6>/Logical Operator5'
     */
    rtb_Sum3 = ((rtU_hall_signals[0]) && rtb_LogicalOperator1_idx_1) -
      (rtb_LogicalOperator1_idx_0 && (rtU_hall_signals[1]));

    /* Outport: '<Root>/g1' incorporates:
     *  Constant: '<S8>/Constant'
     *  RelationalOperator: '<S8>/Compare'
     */
    *rtY_g1 = (rtb_Sum3 > 0);

    /* Outport: '<Root>/g2' incorporates:
     *  Constant: '<S11>/Constant'
     *  RelationalOperator: '<S11>/Compare'
     */
    *rtY_g2 = (rtb_Sum3 < 0);

    /* Sum: '<S6>/Sum1' incorporates:
     *  Inport: '<Root>/hall_signals '
     *  Logic: '<S6>/Logical Operator3'
     *  Logic: '<S6>/Logical Operator6'
     */
    rtb_Sum3 = ((rtU_hall_signals[1]) && rtb_LogicalOperator1_idx_2) -
      (rtb_LogicalOperator1_idx_1 && (rtU_hall_signals[2]));

    /* Outport: '<Root>/g3' incorporates:
     *  Constant: '<S9>/Constant'
     *  RelationalOperator: '<S9>/Compare'
     */
    *rtY_g3 = (rtb_Sum3 > 0);

    /* Outport: '<Root>/g4' incorporates:
     *  Constant: '<S12>/Constant'
     *  RelationalOperator: '<S12>/Compare'
     */
    *rtY_g4 = (rtb_Sum3 < 0);

    /* Sum: '<S6>/Sum3' incorporates:
     *  Inport: '<Root>/hall_signals '
     *  Logic: '<S6>/Logical Operator4'
     *  Logic: '<S6>/Logical Operator7'
     */
    rtb_Sum3 = (rtb_LogicalOperator1_idx_0 && (rtU_hall_signals[2])) -
      ((rtU_hall_signals[0]) && rtb_LogicalOperator1_idx_2);

    /* Outputs for IfAction SubSystem: '<S1>/If_Action' incorporates:
     *  ActionPort: '<S4>/Action_Port'
     */
    /* Outport: '<Root>/g5' incorporates:
     *  Constant: '<S10>/Constant'
     *  Merge generated from: '<S1>/Merge'
     *  RelationalOperator: '<S10>/Compare'
     *  SignalConversion generated from: '<S4>/Out1'
     */
    *rtY_g5 = (rtb_Sum3 > 0);

    /* Outport: '<Root>/g6' incorporates:
     *  Constant: '<S13>/Constant'
     *  Merge generated from: '<S1>/Merge'
     *  RelationalOperator: '<S13>/Compare'
     *  SignalConversion generated from: '<S4>/Out1'
     */
    *rtY_g6 = (rtb_Sum3 < 0);

    /* End of Outputs for SubSystem: '<S1>/If_Action' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/elseif_Action' incorporates:
     *  ActionPort: '<S5>/Action_Port'
     */
    /* Outport: '<Root>/g1' incorporates:
     *  Merge generated from: '<S1>/Merge'
     *  SignalConversion generated from: '<S5>/Out1'
     */
    *rtY_g1 = rtDW->LogicalOperator;

    /* Outport: '<Root>/g2' incorporates:
     *  Merge generated from: '<S1>/Merge'
     *  SignalConversion generated from: '<S5>/Out1'
     */
    *rtY_g2 = rtDW->LogicalOperator1;

    /* Outport: '<Root>/g3' incorporates:
     *  Merge generated from: '<S1>/Merge'
     *  SignalConversion generated from: '<S5>/Out1'
     */
    *rtY_g3 = rtDW->LogicalOperator2;

    /* Outport: '<Root>/g4' incorporates:
     *  Merge generated from: '<S1>/Merge'
     *  SignalConversion generated from: '<S5>/Out1'
     */
    *rtY_g4 = rtDW->LogicalOperator3;

    /* Outport: '<Root>/g5' incorporates:
     *  Merge generated from: '<S1>/Merge'
     *  SignalConversion generated from: '<S5>/Out1'
     */
    *rtY_g5 = rtDW->LogicalOperator4;

    /* Outport: '<Root>/g6' incorporates:
     *  Merge generated from: '<S1>/Merge'
     *  SignalConversion generated from: '<S5>/Out1'
     */
    *rtY_g6 = rtDW->LogicalOperator5;

    /* End of Outputs for SubSystem: '<S1>/elseif_Action' */
  }

  /* End of If: '<S1>/If' */
  /* End of Outputs for SubSystem: '<Root>/sensored_control' */
}

/* Model initialize function */
void BLDC_Controller1_initialize(RT_MODEL *const rtM)
{
  /* (no initialization code required) */
  UNUSED_PARAMETER(rtM);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
