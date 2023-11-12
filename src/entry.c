#include "common/common.h"
#include "utils/logger.h"
#include "Bariista_installer.h"
#include <padscore/kpad.h>


int main(int argc, char** argv)
{
	//! *********************************************************************
	//! *                        Initialize Kpad                            *
	//! *********************************************************************
	KPADInit();
	WPADEnableURCC(1);
	
	log_init();
	log_printf("\nStarting Bariista %s\n", BARIISTA_VERSION);

	//! *******************************************************************
	//! *                        Call our Main                            *
	//! *******************************************************************
	Menu_Main();
	

	//! *******************************************************************
	//! *                            Exit                                 *
	//! *******************************************************************
	log_printf("Bariista exit...\n");
	log_deinit();

	return 0;
}
