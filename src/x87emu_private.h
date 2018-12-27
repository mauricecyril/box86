#ifndef __X87RUN_PRIVATE_H_
#define __X87RUN_PRIVATE_H_

#include <stdint.h>
#include "regs.h"
typedef struct x86emu_s x86emu_t;


#define ST0 emu->fpu[emu->top]
#define ST1 emu->fpu[(emu->top+1)&7]

void fpu_do_push(x86emu_t* emu);
void fpu_do_pop(x86emu_t* emu);

#endif //__X87RUN_PRIVATE_H_