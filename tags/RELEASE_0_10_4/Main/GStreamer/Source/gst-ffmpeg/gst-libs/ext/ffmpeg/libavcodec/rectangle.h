/*
 * rectangle filling function
 * Copyright (c) 2003 Michael Niedermayer <michaelni@gmx.at>
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/**
 * @file libavcodec/rectangle.h
 * useful rectangle filling function
 * @author Michael Niedermayer <michaelni@gmx.at>
 */

#ifndef AVCODEC_RECTANGLE_H
#define AVCODEC_RECTANGLE_H

#include <assert.h>
#include "config.h"
#include "libavutil/common.h"
#include "dsputil.h"

/**
 * fill a rectangle.
 * @param h height of the rectangle, should be a constant
 * @param w width of the rectangle, should be a constant
 * @param size the size of val (1 or 4), should be a constant
 */
static av_always_inline void fill_rectangle(void *vp, int w, int h, int stride, uint32_t val, int size){
    uint8_t *p= (uint8_t*)vp;
    assert(size==1 || size==4);
    assert(w<=4);

    w      *= size;
    stride *= size;

    assert((((long)vp)&(FFMIN(w, STRIDE_ALIGN)-1)) == 0);
    assert((stride&(w-1))==0);
    if(w==2){
        const uint16_t v= size==4 ? val : val*0x0101;
        *(uint16_t*)(p + 0*stride)= v;
        if(h==1) return;
        *(uint16_t*)(p + 1*stride)= v;
        if(h==2) return;
        *(uint16_t*)(p + 2*stride)= v;
        *(uint16_t*)(p + 3*stride)= v;
    }else if(w==4){
        const uint32_t v= size==4 ? val : val*0x01010101;
        *(uint32_t*)(p + 0*stride)= v;
        if(h==1) return;
        *(uint32_t*)(p + 1*stride)= v;
        if(h==2) return;
        *(uint32_t*)(p + 2*stride)= v;
        *(uint32_t*)(p + 3*stride)= v;
    }else if(w==8){
    //gcc can't optimize 64bit math on x86_32
#if HAVE_FAST_64BIT
        const uint64_t v= val*0x0100000001ULL;
        *(uint64_t*)(p + 0*stride)= v;
        if(h==1) return;
        *(uint64_t*)(p + 1*stride)= v;
        if(h==2) return;
        *(uint64_t*)(p + 2*stride)= v;
        *(uint64_t*)(p + 3*stride)= v;
    }else if(w==16){
        const uint64_t v= val*0x0100000001ULL;
        *(uint64_t*)(p + 0+0*stride)= v;
        *(uint64_t*)(p + 8+0*stride)= v;
        *(uint64_t*)(p + 0+1*stride)= v;
        *(uint64_t*)(p + 8+1*stride)= v;
        if(h==2) return;
        *(uint64_t*)(p + 0+2*stride)= v;
        *(uint64_t*)(p + 8+2*stride)= v;
        *(uint64_t*)(p + 0+3*stride)= v;
        *(uint64_t*)(p + 8+3*stride)= v;
#else
        *(uint32_t*)(p + 0+0*stride)= val;
        *(uint32_t*)(p + 4+0*stride)= val;
        if(h==1) return;
        *(uint32_t*)(p + 0+1*stride)= val;
        *(uint32_t*)(p + 4+1*stride)= val;
        if(h==2) return;
        *(uint32_t*)(p + 0+2*stride)= val;
        *(uint32_t*)(p + 4+2*stride)= val;
        *(uint32_t*)(p + 0+3*stride)= val;
        *(uint32_t*)(p + 4+3*stride)= val;
    }else if(w==16){
        *(uint32_t*)(p + 0+0*stride)= val;
        *(uint32_t*)(p + 4+0*stride)= val;
        *(uint32_t*)(p + 8+0*stride)= val;
        *(uint32_t*)(p +12+0*stride)= val;
        *(uint32_t*)(p + 0+1*stride)= val;
        *(uint32_t*)(p + 4+1*stride)= val;
        *(uint32_t*)(p + 8+1*stride)= val;
        *(uint32_t*)(p +12+1*stride)= val;
        if(h==2) return;
        *(uint32_t*)(p + 0+2*stride)= val;
        *(uint32_t*)(p + 4+2*stride)= val;
        *(uint32_t*)(p + 8+2*stride)= val;
        *(uint32_t*)(p +12+2*stride)= val;
        *(uint32_t*)(p + 0+3*stride)= val;
        *(uint32_t*)(p + 4+3*stride)= val;
        *(uint32_t*)(p + 8+3*stride)= val;
        *(uint32_t*)(p +12+3*stride)= val;
#endif
    }else
        assert(0);
    assert(h==4);
}

#endif /* AVCODEC_RECTANGLE_H */
