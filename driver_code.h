#ifndef _DRIVER_CODE_H
#define _DRIVER_CODE_H
#include<inttypes.h>
#define RCC (0x40023800)
#define CR (0x00)
#define ABH1 (0x30)
#define _GPIOA_BASE (0x40020000)
#define _GPIOB_BASE (0x40020400)
#define _GPIOC_BASE (0x40020800)
#define _GPIOD_BASE (0x40020C00)
#define _GPIOE_BASE (0x40021000)
#define _GPIOF_BASE (0x40021400)
#define _GPIOG_BASE (0x40021800)
#define _GPIOH_BASE (0x40021C00)
#define _GPIOI_BASE (0x40022000)
#define _GPIOJ_BASE (0x40022400)
#define _GPIOK_BASE (0x40022800)

typedef struct
{
	uint32_t MODER;
	uint32_t OTYPER;
	uint32_t OSPEEDR;
	uint32_t PUPDR;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t LCKR;
	uint32_t AFRL;
	uint32_t AFRH;
}_GPIO;

extern _GPIO *GPIOA;
extern _GPIO *GPIOB;
extern _GPIO *GPIOC;
extern _GPIO *GPIOD;
extern _GPIO *GPIOE;
extern _GPIO *GPIOF;
extern _GPIO *GPIOG;
extern _GPIO *GPIOH;
extern _GPIO *GPIOI;
extern _GPIO *GPIOJ;
extern _GPIO *GPIOK;
extern volatile uint32_t *RCC_CR;
extern volatile uint32_t *RCC_ABH1;
void gpio_init (void);
void LED_init(void);
void LED_blink(void);
void LED_set(void);
void LED_reset(void);
void delay(void);
#endif /*_DRIVER_CODE*/
