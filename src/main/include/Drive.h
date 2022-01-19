#pragma once
#include <frc/PWMSparkMax.h>
class Chasis {
    public:
    frc::PWMSparkMax* forward_motor;
    Chasis(ChasisPortConfig);
    void forward();
};

struct ChasisPortConfig {
    uint motor_forward_left_port;
    uint motor_forward_right_port;
};