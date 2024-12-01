

/* Includes */
#include <Button.h>
#include "stm32f1xx_hal.h"

unsigned int KeyPressed;


void ButtonInit(void)
{
    KeyPressed = KEY_NON;
}

void SetKey(int Button)
{
    KeyPressed = Button;
}

int GetKey(void)
{
    return KeyPressed;
}

void ClearKey(void)
{
    KeyPressed = KEY_NON;
}

void ButtonTest(void)
{
    int Key = GetKey();

    switch (Key)
    {
        case KEY_DOWN:
            DisplayNumber(11);
            SetLightState(LIGHT_GREEN);
        break;
        case KEY_UP:
            DisplayNumber(55);
            SetLightState(LIGHT_YELLOW);
        break;
        case KEY_MODE:
            DisplayNumber(99);
            SetLightState(LIGHT_RED);
        break;
        default:
        break;
    }
}

void KeyManager(void)
{
    int userMode = GetUserMode();
    int Key = GetKey();
    int currentLightState = GetLightState();

    switch (userMode)
    {
        case USER_MODE_NORMAL:
            if (Key == KEY_MODE)
            {
                SetUserMode(USER_MODE_ADJUST);
                SetLightState(LIGHT_GREEN);
            }
        break;
        case USER_MODE_ADJUST:
            switch (Key)
            {
                case KEY_MODE:
                    currentLightState++;
                    SetLightState(currentLightState);
                    
                    TrafficLightClearAll();

                    if (currentLightState >= LIGHT_MAX)
                    {
                        SetUserMode(USER_MODE_NORMAL);
                        SetLightState(LIGHT_GREEN);
                    }
                break;
                case KEY_DOWN:
                    AdjustLightTimeOn(DECREASE);
                break;
                case KEY_UP:
                    AdjustLightTimeOn(INCREASE);
                break;
                default:
                break;
            }
        break;
        default:
        break;
    }

    ClearKey();
}
