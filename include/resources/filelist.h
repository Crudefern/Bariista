/****************************************************************************
 * Resource files.
 * This file is generated automatically.
 * Includes 29 files.
 *
 * NOTE:
 * Any manual modification of this file will be overwriten by the generation.
 ****************************************************************************/
#ifndef _FILELIST_H_
#define _FILELIST_H_

typedef struct _RecourceFile
{
	const char          *filename;
	const unsigned char *DefaultFile;
	const unsigned int  &DefaultFileSize;
	unsigned char	    *CustomFile;
	unsigned int        CustomFileSize;
} RecourceFile;

#include "bgMusic_ogg.h"
#include "button_click_mp3.h"
#include "choiceCheckedRectangle_png.h"
#include "choiceSelectedRectangle_png.h"
#include "choiceUncheckedRectangle_png.h"
#include "errorIcon_png.h"
#include "exclamationIcon_png.h"
#include "font_ttf.h"
#include "informationIcon_png.h"
#include "messageBox_png.h"
#include "messageBoxButton_png.h"
#include "messageBoxButtonSelected_png.h"
#include "minus_png.h"
#include "player1_point_png.h"
#include "player2_point_png.h"
#include "player3_point_png.h"
#include "player4_point_png.h"
#include "plus_png.h"
#include "progressBar_png.h"
#include "progressWindow_png.h"
#include "questionIcon_png.h"
#include "scrollbarButton_png.h"
#include "scrollbarLine_png.h"
#include "select_button_png.h"
#include "select_buttonSelected_png.h"
#include "splash_png.h"
#include "titleHeader_png.h"
#include "validIcon_png.h"
#include "warningIcon_png.h"

static RecourceFile RecourceList[] =
{
	{"bgMusic.ogg", bgMusic_ogg, bgMusic_ogg_size, NULL, 0},
	{"button_click.mp3", button_click_mp3, button_click_mp3_size, NULL, 0},
	{"choiceCheckedRectangle.png", choiceCheckedRectangle_png, choiceCheckedRectangle_png_size, NULL, 0},
	{"choiceSelectedRectangle.png", choiceSelectedRectangle_png, choiceSelectedRectangle_png_size, NULL, 0},
	{"choiceUncheckedRectangle.png", choiceUncheckedRectangle_png, choiceUncheckedRectangle_png_size, NULL, 0},
	{"errorIcon.png", errorIcon_png, errorIcon_png_size, NULL, 0},
	{"exclamationIcon.png", exclamationIcon_png, exclamationIcon_png_size, NULL, 0},
	{"font.ttf", font_ttf, font_ttf_size, NULL, 0},
	{"informationIcon.png", informationIcon_png, informationIcon_png_size, NULL, 0},
	{"messageBox.png", messageBox_png, messageBox_png_size, NULL, 0},
	{"messageBoxButton.png", messageBoxButton_png, messageBoxButton_png_size, NULL, 0},
	{"messageBoxButtonSelected.png", messageBoxButtonSelected_png, messageBoxButtonSelected_png_size, NULL, 0},
	{"minus.png", minus_png, minus_png_size, NULL, 0},
	{"player1_point.png", player1_point_png, player1_point_png_size, NULL, 0},
	{"player2_point.png", player2_point_png, player2_point_png_size, NULL, 0},
	{"player3_point.png", player3_point_png, player3_point_png_size, NULL, 0},
	{"player4_point.png", player4_point_png, player4_point_png_size, NULL, 0},
	{"plus.png", plus_png, plus_png_size, NULL, 0},
	{"progressBar.png", progressBar_png, progressBar_png_size, NULL, 0},
	{"progressWindow.png", progressWindow_png, progressWindow_png_size, NULL, 0},
	{"questionIcon.png", questionIcon_png, questionIcon_png_size, NULL, 0},
	{"scrollbarButton.png", scrollbarButton_png, scrollbarButton_png_size, NULL, 0},
	{"scrollbarLine.png", scrollbarLine_png, scrollbarLine_png_size, NULL, 0},
	{"select_button.png", select_button_png, select_button_png_size, NULL, 0},
	{"select_buttonSelected.png", select_buttonSelected_png, select_buttonSelected_png_size, NULL, 0},
	{"splash.png", splash_png, splash_png_size, NULL, 0},
	{"titleHeader.png", titleHeader_png, titleHeader_png_size, NULL, 0},
	{"validIcon.png", validIcon_png, validIcon_png_size, NULL, 0},
	{"warningIcon.png", warningIcon_png, warningIcon_png_size, NULL, 0},
	{NULL, NULL, 0, NULL, 0}
};

#endif
