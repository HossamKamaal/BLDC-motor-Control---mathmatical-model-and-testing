/*
 * File: ert_main.c
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

#include <stddef.h>
#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "BLDC_Controller1.h"          /* Model's header file */
#include "rtwtypes.h"

static RT_MODEL rtM_;
static RT_MODEL *const rtMPtr = &rtM_; /* Real-time model */
static DW rtDW;                        /* Observable states */

/* '<Root>/hall_signals ' */
static boolean_T rtU_hall_signals[3];

/* '<Root>/Emf' */
static real_T rtU_Emf[3];

/* '<Root>/control_signal' */
static boolean_T rtU_control_signal;

/* '<Root>/g1' */
static boolean_T rtY_g1;

/* '<Root>/g2' */
static boolean_T rtY_g2;

/* '<Root>/g3' */
static boolean_T rtY_g3;

/* '<Root>/g4' */
static boolean_T rtY_g4;

/* '<Root>/g5' */
static boolean_T rtY_g5;

/* '<Root>/g6' */
static boolean_T rtY_g6;

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(RT_MODEL *const rtM);
void rt_OneStep(RT_MODEL *const rtM)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  BLDC_Controller1_step(rtM, rtU_hall_signals, rtU_Emf, rtU_control_signal,
                        &rtY_g1, &rtY_g2, &rtY_g3, &rtY_g4, &rtY_g5, &rtY_g6);

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  RT_MODEL *const rtM = rtMPtr;

  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Pack model data into RTM */
  rtM->dwork = &rtDW;

  /* Initialize model */
  BLDC_Controller1_initialize(rtM);

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 1.0E-5 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep(rtM);
   */
  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (1) {
    /*  Perform other application tasks here */
  }

  /* The option 'Remove error status field in real-time model data structure'
   * is selected, therefore the following code does not need to execute.
   */
#if 0

  /* Disable rt_OneStep() here */
#endif

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
