#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "common/common.h"
#include "logger.h"

#ifdef DEBUG_LOGGER

void log_init()
{
    WHBLogUdpInit();
}

void log_deinit()
{
    WHBLogUdpDeinit();
}

void log_print(const char *str)
{
	WHBLogPrint(str);
}

void log_printf(const char *format, ...)
{
    WHBLogPrintf(format);
}
#endif
