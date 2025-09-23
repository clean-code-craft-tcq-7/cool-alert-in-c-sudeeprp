#pragma once

#include "./data_model.h"
#include "./actions.h"

// ----------- STEP 6 -----------------
// Chain theBatteryDataModel to Action

void batteryDataToAction(BatteryDataModel batteryData, Actuators (*actuators)());

// ----------- STEP 6 code ends -------
