#include "osscreen.h"
#include <whb/log_console.h>
#include <whb/log.h>

void osscreen_deinit()
{
    WHBLogConsoleFree();
}
void osscreen_draw()
{
    WHBLogConsoleDraw();
}
void osscreen_init()
{
    WHBLogConsoleInit();
}