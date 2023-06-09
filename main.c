#include"driver_code.h"
#include<inttypes.h>
int main(void)
{
	LED_init();
LED_blink();
	while(1)
	{
LED_set();
	delay();
LED_reset();
	delay();
}
}
