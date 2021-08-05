#pragma target(mega65_remote)
#pragma encoding(ASCII)

#include <mega65.h>
#include "debug.h"

void main() {

    // Map memory to BANK 0 : 0x00XXXX - giving access to I/O
    memoryRemap(0x00,0,0);
    // Fast CPU, M65 IO
    POKE(0, 65);
    // Enable MEGA65 features
    VICIV->KEY = VICIV_KEY_M65_A;
    VICIV->KEY = VICIV_KEY_M65_B;

    debug_msg("abcdefghijklmnopqrstuvwxyz");
    debug_msg("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    debug_msg("testing debug mega65");
    debug_msg("using hypervisor trap $03");
}