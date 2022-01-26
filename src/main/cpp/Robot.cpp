// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"
#include "Chasis.h"
#include <iostream>
void Chasis::forward() {
  forward_motor->Set(1);
};
void Robot::RobotInit() {
  std::cout << "Robot Initialized" << std::endl;
  
};
 Chasis::Chasis(ChasisPortConfig c) {
   frc::PWMSparkMax fw{c.motor_forward_right_port};
  forward_motor = &fw;
}
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {
  
}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS


int main() {
  ChasisPortConfig portConfig;
    portConfig.motor_forward_left_port = 9;
    portConfig.motor_forward_right_port = 8;
  Chasis chasis();
  return frc::StartRobot<Robot>();
}
#endif
