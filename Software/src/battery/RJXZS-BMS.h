#ifndef RJXZS_BMS_H
#define RJXZS_BMS_H
#include <Arduino.h>
#include "../include.h"

#define BATTERY_SELECTED
#define MAX_CELL_DEVIATION_MV 250
#define NATIVECAN_250KBPS

void setup_battery(void);
void transmit_can(CAN_frame* tx_frame, int interface);

#endif
