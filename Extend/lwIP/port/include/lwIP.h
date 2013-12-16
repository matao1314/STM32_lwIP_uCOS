/**
* @file lwIP.h
* @brief A brief file description.
* @details
*     A more elaborated file description.
* @author Wang Mengyin
* @date  2010Jul19 15:54:55
* @note
*               Copyright 2010 Wang Mengyin.ALL RIGHTS RESERVED.
*                            http://tigerwang202.blogbus.com
*    This software is provided under license and contains proprietary and
* confidential material which is the property of Company Name tech.
*/


#ifndef __LW_IP_H
#define __LW_IP_H

#ifdef __cplusplus
extern "C" { /* Make sure we have C-declarations in C++ programs */
#endif


/* Includes ------------------------------------------------------------------*/


/* Exported types ------------------------------------------------------------*/


/* Exported constants --------------------------------------------------------*/


/* Exported macro ------------------------------------------------------------*/


#ifndef __LW_IP_C
/* Exported variables --------------------------------------------------------*/


/* Exported functions ------------------------------------------------------- */
void Init_lwIP(void);
void Display_IPAddress(void);

#endif /* !defined(__LW_IP_C) */


/*
#error section
-- The standard C preprocessor directive #error should be used to notify the
programmer when #define constants or macros are not present and to indicate
that a #define value is out of range. These statements are normally found in
a module¡¯s .H file. The #error directive will display the message within the
double quotes when the condition is not met.
*/


#ifdef __cplusplus
}
#endif


#endif /* #ifndef __LW_IP_H */
/*-- File end --*/

