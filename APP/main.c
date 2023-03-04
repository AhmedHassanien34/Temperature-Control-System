
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DCM_interface.h"
#include "CLCD_interface.h"
#include "LM35_interface.h"

void main(void)
{
	u8 Local_TempValue;

	/* Initiate LM35 */
	LM35_voidInit();

	/* Initiate DC Motor */
	DCM_voidInit();

	/* Initiate Character LCD */
	CLCD_voidInit();

	CLCD_voidSendStringGoToXY(0, 3, "FAN is ");

	CLCD_voidSendStringGoToXY(1, 3, "Temp =    C");

	for(;;)
	{
		/* Get LM35 Temperature Sensor Value */
		Local_TempValue = LM35_u8GetTempValue();

		/* Display Sensor value On LCD */
		CLCD_voidGoToXY(1,10);

		if(Local_TempValue>=100)
		{
			CLCD_voidIntegerToString(Local_TempValue);
		}
		else
		{
			CLCD_voidIntegerToString(Local_TempValue);
			CLCD_voidSendData(' ');
		}

		/* Set speed of the DC Motor */
		if(Local_TempValue<30)
		{
			DCM_voidRotate(STOP_STATE,0);
			CLCD_voidSendStringGoToXY(0, 10, "OFF");
		}

		else if ((Local_TempValue>=30) && (Local_TempValue<60))
		{
			DCM_voidRotate(CWW_STATE, 25);
			CLCD_voidSendStringGoToXY(0, 10, "ON ");

		}

		else if ((Local_TempValue>=60) && (Local_TempValue<90))
		{
			DCM_voidRotate(CWW_STATE, 50);
			CLCD_voidSendStringGoToXY(0, 10, "ON ");

		}
		else if ((Local_TempValue>=90) && (Local_TempValue<120))
		{
			DCM_voidRotate(CWW_STATE, 75);
			CLCD_voidSendStringGoToXY(0, 10, "ON ");

		}
		else if (Local_TempValue>=120)
		{
			DCM_voidRotate(CWW_STATE,100);
			CLCD_voidSendStringGoToXY(0, 10, "ON ");

		}
	}
}
