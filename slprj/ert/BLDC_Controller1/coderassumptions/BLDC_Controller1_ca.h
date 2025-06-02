/*
 * File: BLDC_Controller1_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef BLDC_CONTROLLER1_CA_H
#define BLDC_CONTROLLER1_CA_H

/* preprocessor validation checks */
#include "BLDC_Controller1_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_BLDC_Controller1_HWRes;
extern CA_PWS_TestResults CA_BLDC_Controller1_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_BLDC_Controller1_ExpHW;
extern CA_HWImpl CA_BLDC_Controller1_ActHW;

/* entry point function to run tests */
void BLDC_Controller1_caRunTests(void);

#endif                                 /* BLDC_CONTROLLER1_CA_H */
