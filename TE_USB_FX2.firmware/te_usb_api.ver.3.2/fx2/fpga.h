/*
Copyright (C) 2012 Trenz Electronic

Permission is hereby granted, free of charge, to any person obtaining a 
copy of this software and associated documentation files (the "Software"), 
to deal in the Software without restriction, including without limitation 
the rights to use, copy, modify, merge, publish, distribute, sublicense, 
and/or sell copies of the Software, and to permit persons to whom the 
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included 
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
IN THE SOFTWARE.
*/
#ifndef __FPGA_H__
#define __FPGA_H__

#include "fx2regs.h"
//-----------------------------------------------------------------------------
// Controller pins to FPGA
sbit    FPGA_INIT       = IOD ^ 3;  //PD3
sbit	FPGA_DONE       = IOD ^ 2;	//PD2
sbit	FPGA_PRG        = IOD ^ 1;	//PD1
sbit 	FPGA_POWER_ON   = IOD ^ 0;	//PD0

sbit 	INT0_PIN 	    = IOA ^ 0;
sbit 	INT1_PIN 	    = IOA ^ 1;
//-----------------------------------------------------------------------------
#endif