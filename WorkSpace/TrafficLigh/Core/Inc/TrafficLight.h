#ifndef __TRAFFICLIGHT_H
#define __TRAFFICLIGHT_H

#ifdef __cplusplus
extern "C" {
#endif


#include "Header.h"

#define	GPIO_LIGHT_GREEN	GPIOB,GPIO_PIN_10
#define	GPIO_LIGHT_YELLOW	GPIOB,GPIO_PIN_1
#define	GPIO_LIGHT_RED	    GPIOB,GPIO_PIN_0


#define	GPIO_TRAFFIC_LIGHT_ALL	GPIOB,GPIO_PIN_10|GPIO_PIN_1|GPIO_PIN_0

#define LIGHT_GREEN_TIME_ON_DEFAULT 5
#define LIGHT_YELLOW_TIME_ON_DEFAULT 3
#define LIGHT_RED_TIME_ON_DEFAULT 8
enum TrafficLight
{
  LIGHT_GREEN,
  LIGHT_YELLOW,
  LIGHT_RED,
  LIGHT_MAX,
};
enum Direction
{
  INCREASE,
  DECREASE,
};
void TrafficLightInit(void);
void TrafficLightSet(int color);
void TrafficLightTest(void);
void TrafficLightClearAll(void);
void TrafficLightSetAll(void);
void TrafficLightManager(void);
int GetTimeNeedToDisplay(void);
void SetLightState(int newState);
int GetLightState(void);
void AdjustLightTimeOn(int direction);
#ifdef __cplusplus
}
#endif

#endif /* __TRAFFICLIGHT_H */
