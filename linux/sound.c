#include <stdio.h>
#include <stdlib.h>
#include "sound.h"


void beep() {
    system("pw-play /usr/share/sounds/freedesktop/stereo/bell.oga");
}
