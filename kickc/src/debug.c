#include "memory.h"
#include <mega65-hypervisor.h>

void debug_msg(char *m)
{
  // Write debug message to serial monitor
  while(*m) {
    *HTRAP03 = *m;
    asm { nop }
    m++;
  }
    *HTRAP03 = 0x0d;
    asm { nop }
    *HTRAP03 = 0x0a;
    asm { nop }
}
