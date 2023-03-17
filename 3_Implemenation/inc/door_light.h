#ifndef __DOOR_LIGHT_H_
#define __DOOR_LIGHT_H_
/**
 * @file door_light.h
 * @author Kumar.N ()
 * @brief Project on Automatic door light
 * @version 0.5
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Macro Definitions
 */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME     (1000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (500)   /**< LED OFF time in milli seconds */

/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);


#endif /** __DOOR_LIGHT_H_ */