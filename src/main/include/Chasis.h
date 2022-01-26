#pragma once
#include <frc/PWMSparkMax.h>
#include <rev/CANSparkMax.h>

class Chasis
{
public:
    rev::CANSparkMax *left_motor;
    rev::CANSparkMax *left_motor;
    Chasis(ChasisPortConfig);
    void move();
};

struct ChasisPortConfig
{
    uint motor_forward_left_port;
    uint motor_forward_right_port;
};