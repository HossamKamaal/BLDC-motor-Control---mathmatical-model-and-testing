/*
 * File: BLDC_Controller1_ca.c
 *
 * Abstract: Tests assumptions in the generated code.
 */

#include "BLDC_Controller1_ca.h"

CA_HWImpl_TestResults CA_BLDC_Controller1_HWRes;
CA_PWS_TestResults CA_BLDC_Controller1_PWSRes;
const CA_HWImpl CA_BLDC_Controller1_ExpHW = {
  8,                                   /* BitPerChar */
  16,                                  /* BitPerShort */
  32,                                  /* BitPerInt */
  32,                                  /* BitPerLong */
  64,                                  /* BitPerLongLong */
  32,                                  /* BitPerFloat */
  64,                                  /* BitPerDouble */
  32,                                  /* BitPerPointer */
  32,                                  /* BitPerSizeT */
  32,                                  /* BitPerPtrDiffT */
  CA_LITTLE_ENDIAN,                    /* Endianess */
  CA_ZERO,                             /* IntDivRoundTo */
  1,                                   /* ShiftRightIntArith */
  1,                                   /* LongLongMode */
  0,                                   /* PortableWordSizes */
  "ARM Compatible->ARM Cortex-M",      /* HWDeviceType */
  0,                                   /* MemoryAtStartup */
  0,                                   /* DynamicMemoryAtStartup */
  0,                                   /* DenormalFlushToZero */
  0                                    /* DenormalAsZero */
};

CA_HWImpl CA_BLDC_Controller1_ActHW;
void BLDC_Controller1_caRunTests(void)
{
  /* verify hardware implementation */
  caVerifyPortableWordSizes(&CA_BLDC_Controller1_ActHW,
    &CA_BLDC_Controller1_ExpHW, &CA_BLDC_Controller1_PWSRes);
  caVerifyHWImpl(&CA_BLDC_Controller1_ActHW, &CA_BLDC_Controller1_ExpHW,
                 &CA_BLDC_Controller1_HWRes);
}
