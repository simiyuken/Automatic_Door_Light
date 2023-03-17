#ifndef __PROJECT_AUTOMATIC_H__
#define __PROJECT_AUTOMATIC_H__
/**
 * @file project_automatic.h
 * @author Kumar.N ()
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.5
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */


#endif /* __PROJECT_AUTOMATIC_H__ */