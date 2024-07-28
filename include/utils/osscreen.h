#ifndef __OSSCREEN_H_
#define __OSSCREEN_H_

#include <whb/log_console.h>
#include <whb/log.h>


#ifdef __cplusplus
extern "C" {
#endif

void osscreen_init();
void osscreen_deinit();
void osscreen_draw();

#ifdef __cplusplus
}
#endif

#endif
