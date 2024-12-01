#ifndef __BUTTON_H
#define __BUTTON_H

#ifdef __cplusplus
extern "C" {
#endif


#include "Header.h"

#define KEY_NON 0xFF 

enum Key
{
  KEY_DOWN,
  KEY_UP,
  KEY_MODE,
  KEY_MAX,
};

void ButtonInit(void);
void SetKey(int Button);
int GetKey(void);
void ButtonTest(void);
void KeyManager(void);
#ifdef __cplusplus
}
#endif

#endif /* __TRAFFICLIGHT_H */
