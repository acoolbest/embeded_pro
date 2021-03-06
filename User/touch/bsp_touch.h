#ifndef __BSP_TOUCH_H
#define	__BSP_TOUCH_H

#include "stm32f4xx.h"

/* 液晶坐标结构体 */
typedef	struct POINT 
{
   uint16_t x;		
   uint16_t y;
}Coordinate;

/*  校正系数结构体 */
typedef struct Parameter 
{						
long double An,  			 //注:sizeof(long double) = 8
            Bn,     
            Cn,   
            Dn,    
            En,    
            Fn,     
            Divider ;
}Parameter ;

extern Coordinate ScreenSample[4];
extern Coordinate DisplaySample[4];
extern Parameter touch_para ;
extern Coordinate  display ;


extern uint16_t Sine12bit[32];//dwgl

#define	CHX 	0x90 	//通道Y+的选择控制字	
#define	CHY 	0xd0	//通道X+的选择控制字


void Touch_Init(void);
int Touch_Calibrate(void);
void Palette_Init(void);
FunctionalState Get_touch_point(Coordinate * displayPtr,
                                Coordinate * screenPtr,
                                Parameter * para );
Coordinate *Read_2046_2(void);
void Palette_draw_point(uint16_t x, uint16_t y);

#endif /* __BSP_TOUCH_H */

