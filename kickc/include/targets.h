#ifndef _TARGETS_H_
#define _TARGETS_H_

#define TARGET_UNKNOWN 0
#define TARGET_MEGA65R1 1
#define TARGET_MEGA65R2 2
#define TARGET_MEGA65R3 3
#define TARGET_MEGAPHONER1 0x21
#define TARGET_NEXYS4 0x40
#define TARGET_NEXYS4DDR 0x41
#define TARGET_NEXYS4DDRWIDGET 0x42
#define TARGET_WUKONG 0xFD
#define TARGET_SIMULATION 0xFE

unsigned char detect_target(void);

#endif
