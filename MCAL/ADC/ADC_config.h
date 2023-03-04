/**************************************************************************************/
/********************			Author: Ahmed Mohamed			***********************/
/********************			Layer: MCAL			 			***********************/
/********************			Component: ADC				    ***********************/
/********************			Version: 1.00		 			***********************/
/********************			Date: 16-12-2022	 			***********************/
/**************************************************************************************/


#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/*Voltage Reference Selections for ADC*/
/*Choose : 1- AREF 			       //AREF, Internal Vref turned off
		   2- AVCC				   //AVCC with external capacitor at AREF pin
		   3- Internal_Voltage     //Internal 2.56V Voltage Reference with external capacitor at AREF pin
*/
#define VRS							AVCC


/*Choose Resolution*/
/*Choose : 1- _8_bits
 	 	   2- _10_bits
 */
#define Resolution					_10_Bits


/*ADC Prescaler Select Bits*/
/*Choose : 1-DivisionBy2
 	 	   2-DivisionBy4
 	 	   3-DivisionBy8
 	 	   4-DivisionBy16
 	 	   5-DivisionBy32
 	 	   6-DivisionBy64
 	 	   7-DivisionBy128
 */
#define PrescalerSelections			DivisionBy8


#define ADC_u32TIMEOUT		50000


#endif
