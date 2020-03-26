#ifndef _ARMEMU_H
#define _ARMEMU_H

// Special register names
#define REG_LR 13
#define REG_SP 14
#define REG_PC 15
#define NUM_REGS 16

typedef struct {
    unsigned int regs[NUM_REGS];
    unsigned int cpsr;
} emulator;

#endif // _ARMEMU_H
