#include "stm32f10x_lib.h"
#include "ili9320.h"


const unsigned char gImage6_200_24_1bitC[600] = { /* 0X00,0X01,0X18,0X00,0XC8,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X1E,0X00,0X00,0X3C,0X00,0X00,0X10,0XC0,0X00,0X01,
0XE0,0X00,0X40,0X20,0X01,0XE0,0X20,0X03,0X80,0X20,0X01,0X7F,0XE0,0X00,0X7F,0XC0,
0X00,0X20,0X00,0X00,0X3E,0X00,0X00,0X1F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X7F,0X00,0X00,0X7F,0X00,0X00,0X42,0X00,0X00,0X42,0X00,0X00,0X42,0X00,0X03,0XFF,
0XE0,0X03,0XFF,0XE0,0X00,0X42,0X00,0X00,0X42,0X00,0X00,0X42,0X00,0X00,0X7F,0X00,
0X00,0X7F,0X00,0X00,0X00,0X00,0X00,0X40,0X20,0X00,0X48,0X20,0X01,0XCC,0X60,0X03,
0XCE,0XC0,0X00,0X4B,0XC0,0X00,0X49,0X80,0X02,0X49,0XC0,0X03,0XCF,0X40,0X01,0XFE,
0X40,0X00,0X7C,0X20,0X02,0X4F,0X20,0X03,0XC3,0XA0,0X01,0XC1,0XC0,0X00,0X00,0X00,
0X02,0X10,0X00,0X03,0XFF,0XE0,0X03,0XFF,0XE0,0X02,0X10,0X00,0X02,0X10,0X00,0X03,
0XFF,0X00,0X03,0XFF,0XC0,0X02,0X10,0XE0,0X02,0X3F,0XC0,0X02,0X3F,0XC0,0X03,0XE0,
0X40,0X03,0XFF,0XE0,0X02,0X1E,0X00,0X00,0X02,0X00,0X00,0X42,0X00,0X00,0X42,0X00,
0X00,0X42,0X00,0X03,0XFF,0XE0,0X03,0XFF,0XE0,0X00,0X42,0X00,0X01,0XC2,0X00,0X01,
0XFA,0X00,0X00,0X1A,0X00,0X03,0X82,0X00,0X03,0XFF,0XE0,0X00,0X7E,0X00,0X00,0X1C,
0X00,0X02,0X00,0X20,0X02,0XFF,0X20,0X02,0XFF,0X20,0X02,0X92,0X20,0X03,0XFF,0XE0,
0X03,0XFF,0XC0,0X02,0X92,0XC0,0X02,0XFF,0XE0,0X02,0XFF,0X20,0X02,0X3F,0X80,0X02,
0X3F,0X80,0X03,0XFF,0XC0,0X02,0XFF,0XC0,0X02,0X0C,0X00,0X00,0X00,0X00,0X00,0X0F,
0X00,0X00,0X7F,0XE0,0X00,0XF9,0XF0,0X01,0X80,0X18,0X01,0X00,0X08,0X03,0XFF,0XF0,
0X03,0XFF,0XF0,0X00,0X00,0X00,0X01,0XFF,0XE0,0X01,0XFF,0XE0,0X00,0X00,0X00,0X03,
0XFE,0X00,0X03,0XFF,0XE0,0X00,0X01,0XF0,0X00,0X41,0XA0,0X03,0XFF,0X80,0X03,0XFF,
0XC0,0X00,0X40,0X40,0X00,0X00,0X00,0X01,0XD4,0X60,0X01,0XF4,0XC0,0X01,0X65,0X80,
0X01,0X47,0X00,0X01,0X1F,0XE0,0X01,0X3F,0XE0,0X01,0X67,0X00,0X01,0XF4,0XC0,0X01,
0XD4,0X60,0X00,0X80,0X20,0X01,0X9B,0X80,0X03,0X31,0XE0,0X02,0X30,0X60,0X01,0X00,
0X08,0X01,0X80,0X18,0X00,0XF0,0XF0,0X00,0X3F,0XE0,0X00,0X0F,0X00,0X00,0X00,0X00,
0X00,0X80,0X20,0X00,0X9C,0X60,0X00,0X9E,0XC0,0X00,0X93,0XC0,0X03,0XF1,0X80,0X00,
0X93,0XC0,0X00,0X97,0X40,0X00,0X96,0X60,0X00,0X90,0X20,0X00,0X88,0X00,0X03,0XFF,
0XE0,0X03,0XFF,0XE0,0X00,0X84,0X20,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X01,0X00,
0X03,0XFF,0XE0,0X03,0XB7,0X60,0X00,0XC9,0X00,0X01,0X8C,0X80,0X01,0X18,0X80,0X00,
0X04,0X80,0X02,0X2E,0X00,0X02,0XFD,0XE0,0X01,0XFF,0XE0,0X01,0X2F,0X80,0X01,0X23,
0X80,0X00,0X00,0X80,0X00,0X89,0XE0,0X00,0X9D,0XE0,0X00,0XB8,0X20,0X00,0XF8,0X20,
0X00,0XEF,0XE0,0X01,0X8F,0XC0,0X03,0X88,0X00,0X02,0XCC,0X00,0X00,0XEF,0X80,0X00,
0XB9,0XC0,0X00,0X98,0X60,0X00,0X98,0X60,0X00,0X80,0X20,0X00,0X00,0X00,0X00,0X3F,
0XC0,0X03,0X33,0XE0,0X03,0XBC,0X20,0X03,0XFF,0XC0,0X02,0XF1,0XE0,0X02,0X7C,0X60,
0X02,0X27,0X20,0X00,0XFF,0X80,0X00,0XFE,0X00,0X03,0XFF,0XE0,0X03,0XFF,0XE0,0X00,
0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00};
