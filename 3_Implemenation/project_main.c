/**
 * @file project_main.c
 * @author Kumar.N ()
 * @brief A Door sensor is connected to bit 1 of port B, and led is connected to bit 6 of port
 * @version 0.5
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "project_automatic.h"

#include "user_service.h"

#include "door_light.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1 << DDB0);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	for(;;)
	{
        change_led_state(LED_ON);
		delay_ms(LED_ON_TIME);
		
        change_led_state(LED_OFF);
		delay_ms(LED_OFF_TIME);	
	}
	return 0;
}