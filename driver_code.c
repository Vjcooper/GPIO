#include"driver_code.h"
#include<inttypes.h>
_GPIO *GPIOA = (_GPIO *) _GPIOA_BASE;
_GPIO *GPIOB = (_GPIO *) _GPIOB_BASE;
_GPIO *GPIOC = (_GPIO *) _GPIOC_BASE;
_GPIO *GPIOD = (_GPIO *) _GPIOD_BASE;
_GPIO *GPIOE = (_GPIO *) _GPIOE_BASE;
_GPIO *GPIOF = (_GPIO *) _GPIOF_BASE;
_GPIO *GPIOG = (_GPIO *) _GPIOG_BASE;
_GPIO *GPIOH = (_GPIO *) _GPIOH_BASE;
_GPIO *GPIOI = (_GPIO *) _GPIOI_BASE;
_GPIO *GPIOJ = (_GPIO *) _GPIOJ_BASE;
_GPIO *GPIOK = (_GPIO *) _GPIOK_BASE;

volatile uint32_t *RCC_CR = (uint32_t *) (RCC + CR);
volatile uint32_t *RCC_ABH1 = (uint32_t *) (RCC + ABH1);

void gpio_init (void)
{
	*RCC_CR|= (1<<0);
	*RCC_ABH1 |= (1<<0);
	*RCC_ABH1 |= (1<<1);
	*RCC_ABH1 |= (1<<2);
	*RCC_ABH1 |= (1<<3);
	*RCC_ABH1 |= (1<<4);
	*RCC_ABH1 |= (1<<5);
	*RCC_ABH1 |= (1<<6);
	*RCC_ABH1 |= (1<<7);
	*RCC_ABH1 |= (1<<8);
	*RCC_ABH1 |= (1<<9);
	*RCC_ABH1 |= (1<<10);
}
void LED_init(void)
{
	*RCC_CR |= (1<<0);
  *RCC_ABH1 |=(1<<6);
}
void LED_blink(void)
{
	GPIOG->MODER |= (1<<26);
	GPIOG->MODER &=~(1<<27);
	GPIOG->MODER |=  (1<<28);
	GPIOG->MODER &=~(1<<29);
	GPIOG->OSPEEDR |= (1<<26);
    GPIOG->OSPEEDR &= ~(1<<27);
		GPIOG->OSPEEDR |= (1<<28);
    GPIOG->OSPEEDR &= ~(1<<29);
}
void LED_set(void)
{
	GPIOG->BSRR |=(1<<13);
	  GPIOG->BSRR |=(1<<14);
}
void LED_reset(void)
{
	GPIOG->BSRR |=(1<<(13+16));
	  GPIOG->BSRR |=(1<<(14+16));
}
void delay(void)

{
    int i;
    for (i=0;i<=100000;++i);

}
