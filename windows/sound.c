#include <windows.h>
#include "sound.h"

void beep(int freq, int duration_ms) {
    Beep(freq, duration_ms);   
}
