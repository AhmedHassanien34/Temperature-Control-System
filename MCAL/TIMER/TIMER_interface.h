/*****************************************************************/
/***********		Author: Ahmed Mohamed 			**************/
/***********		Layer: MCAL			 			**************/
/***********		Component: TIMER		 		**************/
/***********		Version: 1.00		 			**************/
/***********		Date: 17-12-2022	 			**************/
/*****************************************************************/


#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

/***************************************************************************/
#define  TIMER1_MODE_NORMAL                                          0
#define  TIMER1_MODE_PWM_PHASE_CORRECT_8                    		 1
#define  TIMER1_MODE_PWM_PHASE_CORRECT_9               		         2
#define  TIMER1_MODE_PWM_PHASE_CORRECT_10              	             3
#define  TIMER1_MODE_CTC_OCR1A                                       4
#define  TIMER1_MODE_FAST_PWM_8                      	             5
#define  TIMER1_MODE_FAST_PWM_9                     	             6
#define  TIMER1_MODE_FAST_PWM_10                   	                 7
#define  TIMER1_MODE_PWM_PHASE_AND_FRQUENCY_CORRECT_ICR1             8
#define  TIMER1_MODE_PWM_PHASE_AND_FRQUENCY_CORRECT_OCR1A            9
#define  TIMER1_PWM_PHASE_CORRECT_ICR1                               10
#define  TIMER1_PWM_PHASE_CORRECT_OCR1A                              11
#define  TIMER1_MODE_CTC_ICR1                                        12
#define  TIMER1_MODE_FAST_PWM_ICR1                                   14
#define  TIMER1_MODE_FAST_PWM_OCR1A                                  15
/***************************************************************************/
#define  TIMER1_MODE_CHANNEL_A_NORMAL                                0
#define  TIMER1_MODE_CHANNEL_A_TOGGLE                                1
#define  TIMER1_MODE_CHANNEL_A_CLEAR_OC1A                            2
#define  TIMER1_MODE_CHANNEL_A_SET_OC1A                              3
/***************************************************************************/
#define  TIMER1_MODE_CHANNEL_B_NORMAL                                0
#define  TIMER1_MODE_CHANNEL_B_TOGGLE                                1
#define  TIMER1_MODE_CHANNEL_B_CLEAR_OC1B                            2
#define  TIMER1_MODE_CHANNEL_B_SET_OC1B                              3

/********************************************************************************** Timer 0 ***************************************/
void TIMER_voidTimer0Init(void);
void TIMER_voidTimer0Delay(u32 Copy_u32DTime,void(*Copy_pFun)(void));
void TIMER_voidTimer0GeneratePWM(f32 Copy_u8Intensity);
/********************************************************************************** Timer 2 ***************************************/
void TIMER_voidTimer2Init(void);
void TIMER_voidTimer2Delay(u32 Copy_u32DTime,void(*Copy_pFun)(void));
void TIMER_voidTimer2GeneratePWM( f32 Copy_u8Intensity);
/*********************************************************************************************/
/********************************************************************************** Timer 1 ***************************************/
void TIMER_voidTimer1Enable(u8 Copy_u8Timer1Mode,u8 Copy_u8Timer1ModeChannelA,u8 Copy_u8Timer1ModeChannelB);
void TIMER_voidTimer1SetOCR1A(u16 Copy_u16OCRA);
void TIMER_voidTimer1SetOCR1B(u16 Copy_u16OCRB);
void TIMER_voidTimer1SetICR1(u16 Copy_u16ICR1);
void TIMER_voidTimer1Stop(void);
void TIMER_voidTimer1Continue(void);
void TIMER_voidTimer1SetCallBack(void (*Copy_pFun) (void));

/********************************************************************************** ICU Timer 1 ***************************************/
void TIMER_voidTimer1ICUInit(void);
void TIMER_voidTimer1ICUSetTriggerEdge(u8 Copy_u8ICUEdgeType);
u16 TIMER_voidTimer1ICUGetInputCaptureValue(void);
void TIMER_voidTimer1ICUSetCallBack(void (*Copy_pFun) (void));
void TIMER_voidClearTimer1Value(void);
/***************************************************************************/
#define  TIMER1_ICU_RISING_EDGY_TYPE_MODE                           1
#define  TIMER1_ICU_FALLING_EDGY_TYPE_MODE                          0
/***************************************************************************/


#endif
