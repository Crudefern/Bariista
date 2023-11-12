#include "utils/logger.h"
#include "Application.h"
#include "system/memory.h"

extern "C" int Bariista_installer(void)
{
	//!*******************************************************************
	//!                    Initialize heap memory                        *
	//!*******************************************************************
	log_print("Initialize memory management\n");
	memoryInitialize();

	//!*******************************************************************
	//!                    Enter main application                        *
	//!*******************************************************************
	log_printf("Start main application\n");
	Application::instance()->exec();
	log_printf("Main application stopped\n");
	
	Application::destroyInstance();
	return 0;
}
