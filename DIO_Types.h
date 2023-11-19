/*******************************************************************************
 *                                                                             *
 * [FILE NAME]:   DIO_Types.h                                                  *
 *                                                                             *
 * [AUTHOR]:      Ahmed Saeed, Mohamed Teleb, Hossam Mostafa,                  *
 *                Amr Hafez, Marco Ashraf, and Muhammed ALsahfie               *
 *                                                                             *
 * [Version]:     1.0.0                                                        *
 *                                                                             *
 * [DATE]:        28/09/2023                                                   *
 *                                                                             *
 * [DESCRIPTION]: header file for DIO types                                    *
 *                                                                             *
 *******************************************************************************/

#ifndef DIO_TYPES__
#define DIO_TYPES__

/*******************************************************************************
 *                                 Includes                                    *
 *******************************************************************************/
#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define PinCount 48

/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/
/*
 * Description :
 * Enum for defining Digital I/O Port Types.
 */
typedef enum{
    DIO_PortA =0,
    DIO_PortB,
    DIO_PortC,
    DIO_PortD,
    DIO_PortE,
    DIO_PortF
}DIO_PortTypes;

/*
 * Description :
 * Enum for defining Digital I/O Direction.
 */
typedef enum{
    Input =0,
    Output
}DIO_DIR;

/*
 * Description :
 * Enum for defining Standard Levels (LOW and HIGH).
 */
typedef enum{
    LOW = 0,
    HIGH
}STD_Level;

/*
 * Description :
 * Structure for configuring Digital I/O Pins.
 */
typedef struct {
    DIO_DIR PinDir;
    STD_Level PinLevel;
}DIO_PinCFG;

/*
 * Description :
 * Enum for defining Digital I/O Channel Types.
 */
typedef enum {
    DIO_ChannelA0 =0,
    DIO_ChannelA1 ,
    DIO_ChannelA2 ,
    DIO_ChannelA3 ,
    DIO_ChannelA4 ,
    DIO_ChannelA5 ,
    DIO_ChannelA6 ,
    DIO_ChannelA7 ,
    DIO_ChannelB0 ,
    DIO_ChannelB1 ,
    DIO_ChannelB2 ,
    DIO_ChannelB3 ,
    DIO_ChannelB4 ,
    DIO_ChannelB5 ,
    DIO_ChannelB6 ,
    DIO_ChannelB7 ,
    DIO_ChannelC0 ,
    DIO_ChannelC1 ,
    DIO_ChannelC2 ,
    DIO_ChannelC3 ,
    DIO_ChannelC4 ,
    DIO_ChannelC5 ,
    DIO_ChannelC6 ,
    DIO_ChannelC7 ,
    DIO_ChannelD0 ,
    DIO_ChannelD1 ,
    DIO_ChannelD2 ,
    DIO_ChannelD3 ,
    DIO_ChannelD4 ,
    DIO_ChannelD5 ,
    DIO_ChannelD6 ,
    DIO_ChannelD7 ,
    DIO_ChannelE0 ,
    DIO_ChannelE1 ,
    DIO_ChannelE2 ,
    DIO_ChannelE3 ,
    DIO_ChannelE4 ,
    DIO_ChannelE5 ,
    DIO_ChannelE6 ,
    DIO_ChannelE7 ,
    DIO_ChannelF0 ,
    DIO_ChannelF1 ,
    DIO_ChannelF2 ,
    DIO_ChannelF3 ,
    DIO_ChannelF4 ,
    DIO_ChannelF5 ,
    DIO_ChannelF6 ,
    DIO_ChannelF7
}DIO_ChannelTypes;

#endif
