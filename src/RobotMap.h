/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
constexpr int FRONT_LEFT = 1;
constexpr int REAR_LEFT = 2;
constexpr int FRONT_RIGHT = 3;
constexpr int REAR_RIGHT = 4;
constexpr int LEFT_CLAW_MOTOR = 5;
constexpr int RIGHT_CLAW_MOTOR = 6;
constexpr int WINCH_MOTOR = 7;

//Digital Input Output
constexpr int LIMIT_SWITCHES = 0;
constexpr int leftencoderA = 1;
constexpr int leftencoderB = 2;
constexpr int rightencoderA = 3;
constexpr int rightencoderB = 4;


// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int kRangeFinderPort = 1;
// constexpr int kRangeFinderModule = 1;

