
  
#ifndef __USER_SERVICE_H__
#define __USER_SERVICE_H__
/**
 * @file user_service.h
 * @author Kumar.N ()
 * @brief User defined utilities used across the project
 * @version 0.5
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "project_automatic.h"
#include <util/delay.h>

/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);

#endif /* __USER_SERVICE_H__ */