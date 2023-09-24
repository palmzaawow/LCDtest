#include "display.h"
#include "ILI9341_Driver.h"

void Display_Menu()
{

	ILI9341_Set_Rotation(3);

	/* Refresh the screen to black background */
	ILI9341_Fill_Screen(BLACK);
	HAL_Delay(500);

	/* Counting through all the bytes of those icons */
	uint64_t k = 0;
	/* Draw border for the menu */
    ILI9341_Draw_Empty_Rectangle(YELLOW, 10, 30, 310, 230);

    /* Write something */
	ILI9341_Draw_String(10,10,WHITE,BLACK,"Welcome!",2);


	CS_OFF;
}


void Display_Text()
{
	/* Refresh the screen to black background */
	ILI9341_Fill_Screen(BLACK);
	HAL_Delay(500);

	/* Draw border for the menu */
    ILI9341_Draw_Empty_Rectangle(YELLOW, 10, 30, 310, 230);

    /* Write something */
	ILI9341_Draw_String(20, 40, WHITE, BLACK, "Hello User!", 2);

	ILI9341_Draw_String(20, 60, WHITE, BLACK, "This is the test for TFT LCD!", 2);

	ILI9341_Draw_String(20, 80, WHITE, BLACK, "For more information, please visit:", 2);

	ILI9341_Draw_String(20, 100, WHITE, BLACK, "    aweirdolife.wordpress.com    ", 2);

}
