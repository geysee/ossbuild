/*
 * Copyright <2005, 2006, 2007, 2008> Fluendo S.A.
 */
 /*********************************************************************
 * Adapted from dist10 reference code and used under the license therein:
 * ISO MPEG Audio Subgroup Software Simulation Group (1996)
 * ISO 13818-3 MPEG-2 Audio Decoder - Lower Sampling Frequency Extension
 **********************************************************************/

#ifndef __TABLE_BITALLOC_H__
#define __TABLE_BITALLOC_H__

#include "common.h"

typedef struct {
  gint sub_bands;        /* Number of sub-bands in the frame */

  const al_table alloc;  /* The quantisation table itself */
} bitalloc_table;

/* There are 5 allocation tables available based on
 * the bitrate and sample rate */
static const bitalloc_table ba_tables[] = 
{
 {
  /* alloc_0 */
  27,
  {
    {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 7, 3, 3, 2 }, { 15, 4, 3, 4 }, 
      { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, 
      { 511, 9, 3, 9 }, { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, 
      { 4095, 12, 3, 12 }, { 8191, 13, 3, 13 }, { 16383, 14, 3, 14 }, 
      { 32767, 15, 3, 15 }, { 65535, 16, 3, 16 }, 
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 7, 3, 3, 2 }, { 15, 4, 3, 4 }, 
      { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, 
      { 511, 9, 3, 9 }, { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, 
      { 4095, 12, 3, 12 }, { 8191, 13, 3, 13 }, { 16383, 14, 3, 14 }, 
      { 32767, 15, 3, 15 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 7, 3, 3, 2 }, { 15, 4, 3, 4 }, 
      { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, 
      { 511, 9, 3, 9 }, { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, 
      { 4095, 12, 3, 12 }, { 8191, 13, 3, 13 }, { 16383, 14, 3, 14 },
      { 32767, 15, 3, 15 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 },
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 },
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 },
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }      
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }      
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 },
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 },
      { 65535, 16, 3, 16 } 
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 },
      { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 },
      { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 },
      { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, 
      { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 },
      { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 }
    }
  }
 }, 
 {
  /* alloc_1 */
  30,
  {
    {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 7, 3, 3, 2 }, { 15, 4, 3, 4 }, 
      { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, 
      { 511, 9, 3, 9 }, { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, 
      { 4095, 12, 3, 12 }, { 8191, 13, 3, 13 }, { 16383, 14, 3, 14 }, 
      { 32767, 15, 3, 15 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 7, 3, 3, 2 }, { 15, 4, 3, 4 }, 
      { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, 
      { 511, 9, 3, 9 }, { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 },
      { 4095, 12, 3, 12 }, { 8191, 13, 3, 13 }, { 16383, 14, 3, 14 },
      { 32767, 15, 3, 15 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 7, 3, 3, 2 }, { 15, 4, 3, 4 }, 
      { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, 
      { 511, 9, 3, 9 }, { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 },
      { 4095, 12, 3, 12 }, { 8191, 13, 3, 13 }, { 16383, 14, 3, 14 }, 
      { 32767, 15, 3, 15 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 },
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 },
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 },
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 },
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 },
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 },
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 },
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 },
      { 8191, 13, 3, 13 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 } 
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 } 
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 65535, 16, 3, 16 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 65535, 16, 3, 16 } 
    }
  }
 },
 {
  /* alloc_2 */
  8,
  {
    {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }, 
      { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, { 1023, 10, 3, 10 },
      { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, { 8191, 13, 3, 13 }, 
      { 16383, 14, 3, 14 }, { 32767, 15, 3, 15 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }, 
      { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, { 1023, 10, 3, 10 }, 
      { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, { 8191, 13, 3, 13 }, 
      { 16383, 14, 3, 14 }, { 32767, 15, 3, 15 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 } 
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }
  }
 },
 {
  /* alloc_3 */
  12,
  {
    {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 },
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 },
      { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, { 1023, 10, 3, 10 },
      { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, { 8191, 13, 3, 13 },
      { 16383, 14, 3, 14 }, { 32767, 15, 3, 15 }
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }, 
      { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, { 1023, 10, 3, 10 },
      { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, { 8191, 13, 3, 13 },
      { 16383, 14, 3, 14 }, { 32767, 15, 3, 15 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }
  }
},
{
  /* alloc_4 */
  30,
  {
    {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 },
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 },
      { 8191, 13, 3, 13 }, { 16383, 14, 3, 14 } 
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 },
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 },
      { 8191, 13, 3, 13 }, { 16383, 14, 3, 14 } 
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 },
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 16383, 14, 3, 14 } 
    }, {
      { 0, 4, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 7, 3, 3, 2 }, 
      { 9, 10, 1, 3 }, { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, 
      { 127, 7, 3, 7 }, { 255, 8, 3, 8 }, { 511, 9, 3, 9 }, 
      { 1023, 10, 3, 10 }, { 2047, 11, 3, 11 }, { 4095, 12, 3, 12 }, 
      { 8191, 13, 3, 13 }, { 16383, 14, 3, 14 }
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 } 
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 } 
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 } 
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 } 
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 } 
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 } 
    }, {
      { 0, 3, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }, 
      { 15, 4, 3, 4 }, { 31, 5, 3, 5 }, { 63, 6, 3, 6 }, { 127, 7, 3, 7 }
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 } 
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }
    }, {
      { 0, 2, 0, 0 }, { 3, 5, 1, 0 }, { 5, 7, 1, 1 }, { 9, 10, 1, 3 }
    }
  }
 }
};

#endif