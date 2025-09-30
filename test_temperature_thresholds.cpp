#include <gtest/gtest.h>
extern "C" {
#include "./thermal_management_types.h"
#include "./thresholds.h"
}

// ----------- STEP 5 -----------------
// Refactor for duplication. Deprecate old interface in favor of new one.
// Distinguish thresholds per cooling type

TEST(ThresholdTest, CoolingDependentThresholds) {
    float passiveLimit = alertTemperatureForCoolingType(THERMAL_PASSIVE);
    float activeLimit = alertTemperatureForCoolingType(THERMAL_ACTIVE);
    float hybridLimit = alertTemperatureForCoolingType(THERMAL_HYBRID);

    ASSERT_TRUE(passiveLimit < hybridLimit);
    ASSERT_TRUE(hybridLimit < activeLimit);
}

// ----------- STEP 5 code ends -------
