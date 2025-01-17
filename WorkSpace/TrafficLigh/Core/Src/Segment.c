/**
 ******************************************************************************
 * @file      sysmem.c
 * @author    Generated by STM32CubeIDE
 * @brief     STM32CubeIDE System Memory calls file
 *
 *            For more information about which C functions
 *            need which of these lowlevel functions
 *            please consult the newlib libc manual
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

/* Includes */
#include <Segment.h>
#include "stm32f1xx_hal.h"

int SegmentState;

void SegmentDisplayNumber(int LedIndex, int number);

void SegmentInit(void)
{
    SegmentState = SEGMENT_NORMAL;
}
void SegmentSet(int segment)
{
    switch (segment)
    {
    case SEGMENT_A1:
        HAL_GPIO_WritePin(GPIO_SEGMENT_A1, GPIO_PIN_SET);
        break;
    case SEGMENT_B1:
        HAL_GPIO_WritePin(GPIO_SEGMENT_B1, GPIO_PIN_SET);
        break;
    case SEGMENT_C1:
        HAL_GPIO_WritePin(GPIO_SEGMENT_C1, GPIO_PIN_SET);
        break;
    case SEGMENT_D1:
        HAL_GPIO_WritePin(GPIO_SEGMENT_D1, GPIO_PIN_SET);
        break;
    case SEGMENT_E1:
        HAL_GPIO_WritePin(GPIO_SEGMENT_E1, GPIO_PIN_SET);
        break;
    case SEGMENT_F1:
        HAL_GPIO_WritePin(GPIO_SEGMENT_F1, GPIO_PIN_SET);
        break;
    case SEGMENT_G1:
        HAL_GPIO_WritePin(GPIO_SEGMENT_G1, GPIO_PIN_SET);
    break;
    case SEGMENT_A2:
        HAL_GPIO_WritePin(GPIO_SEGMENT_A2, GPIO_PIN_SET);
        break;
    case SEGMENT_B2:
        HAL_GPIO_WritePin(GPIO_SEGMENT_B2, GPIO_PIN_SET);
        break;
    case SEGMENT_C2:
        HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_SET);
        break;
    case SEGMENT_D2:
        HAL_GPIO_WritePin(GPIO_SEGMENT_D2, GPIO_PIN_SET);
        break;
    case SEGMENT_E2:
        HAL_GPIO_WritePin(GPIO_SEGMENT_E2, GPIO_PIN_SET);
        break;
    case SEGMENT_F2:
        HAL_GPIO_WritePin(GPIO_SEGMENT_F2, GPIO_PIN_SET);
        break;
    case SEGMENT_G2:
        HAL_GPIO_WritePin(GPIO_SEGMENT_G2, GPIO_PIN_SET);
    break;
    default:
        HAL_GPIO_WritePin(GPIO_SEGMENT_PORT_A, GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_PORT_B, GPIO_PIN_SET);
        break;
    }
}
void SegmentClearLED(int LedIndex)
{
    if(LedIndex == LED_1)
    {
        HAL_GPIO_WritePin(GPIO_SEGMENT_A1, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_B1, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_C1, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_D1, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_E1, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_F1, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_G1, GPIO_PIN_RESET);
    }
    else if(LedIndex == LED_2)
    {
        HAL_GPIO_WritePin(GPIO_SEGMENT_A2, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_B2, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_D2, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_E2, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_F2, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIO_SEGMENT_G2, GPIO_PIN_RESET);
    }
}
// void SegmentClearLED(void)
// {
//     SegmentClearLED(LED_1);
//     SegmentClearLED(LED_2);
// }
void DisplayNumber(int number)
{
    SegmentDisplayNumber(LED_1,number/10);
    SegmentDisplayNumber(LED_2,number%10);
}      
void SegmentDisplayNumber(int LedIndex, int number)
{
    SegmentClearLED(LedIndex);

    switch (number)
    {
    case 0:
        if(LedIndex == LED_1)
        {

        }
        else if(LedIndex == LED_2)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_E2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F2, GPIO_PIN_SET);
        }
    break;
    case 1:
        if(LedIndex == LED_1)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_B1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C1, GPIO_PIN_SET);
        }
        else if(LedIndex == LED_2)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_B2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_SET);
        }
    break;
    case 2:
        if(LedIndex == LED_1)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_E1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G1, GPIO_PIN_SET);
        }
        else if(LedIndex == LED_2)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_E2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G2, GPIO_PIN_SET);
        }
    break;
    case 3:
        if(LedIndex == LED_1)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G1, GPIO_PIN_SET);
        }
        else if(LedIndex == LED_2)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G2, GPIO_PIN_SET);
        }
    break;
    case 4:
        if(LedIndex == LED_1)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_B1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F1, GPIO_PIN_SET);
        }
        else if(LedIndex == LED_2)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_B2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F2, GPIO_PIN_SET);
        }
    break;
    case 5:
        if(LedIndex == LED_1)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G1, GPIO_PIN_SET);
        }
        else if(LedIndex == LED_2)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G2, GPIO_PIN_SET);
        }
    break;
    case 6:
        if(LedIndex == LED_1)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_E1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G1, GPIO_PIN_SET);
        }
        else if(LedIndex == LED_2)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_E2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G2, GPIO_PIN_SET);
        }
    break;
    case 7:
        if(LedIndex == LED_1)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C1, GPIO_PIN_SET);
        }
        else if(LedIndex == LED_2)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_SET);
        }
    break;
    case 8:
        if(LedIndex == LED_1)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_E1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G1, GPIO_PIN_SET);
        }
        else if(LedIndex == LED_2)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_E2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G2, GPIO_PIN_SET);
        }
    break;
    case 9:
        if(LedIndex == LED_1)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F1, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G1, GPIO_PIN_SET);
        }
        else if(LedIndex == LED_2)
        {
            HAL_GPIO_WritePin(GPIO_SEGMENT_A2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_B2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_C2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_D2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_F2, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIO_SEGMENT_G2, GPIO_PIN_SET);
        }
    break;
    default:
    break;
    }
}

void SegmentClearAll(void)
{
    HAL_GPIO_WritePin(GPIO_SEGMENT_PORT_A, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIO_SEGMENT_PORT_B, GPIO_PIN_RESET);
}
void SegmentSetAll(void)
{
    HAL_GPIO_WritePin(GPIO_SEGMENT_PORT_A, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIO_SEGMENT_PORT_B, GPIO_PIN_SET);
}
void SegmentTest(void)
{
    int Segment = 0;
    for (Segment = 0; Segment < SEGMENT_MAX; Segment++)
    {
        SegmentSet(Segment);
        HAL_Delay(100);
        SegmentClearAll();
    }
        
}
void SegmentManager(void)
{
    DisplayNumber(GetTimeNeedToDisplay());
}