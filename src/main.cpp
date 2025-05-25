/*————————————————————————————————————————————————————————————————————————————*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       kira                                                      */
/*    Created:      5/18/2025, 3:23:38 PM                                     */
/*    Description:  IQ2 project                                               */
/*                                                                            */
/*————————————————————————————————————————————————————————————————————————————*/
#include "vex.h"

using namespace vex;

int main()  {
    // Here's a little change
    brain myBrain;

    // Set up left and right motors
    motor leftMotor = motor(PORT1, 2.0, true);
    motor rightMotor = motor(PORT6, 2.0, false);

    // Start those motors
    leftMotor.spin(forward, 50, percent);
    rightMotor.spin(forward, 50, percent);

    // Let the robot drive
    wait(2, sec);

    // Stop
    leftMotor.stop();
    rightMotor.stop();

    // Now go backwards
    leftMotor.spin(forward, -50, percent);
    rightMotor.spin(forward, -50, percent);
    
    // Let it go a bit
    wait(2, sec);

    // TODO: Then stop
    leftMotor.stop();
    rightMotor.stop();

    // Print something
    myBrain.Screen.printAt(2, 30, "Drivingggg");
    myBrain.playSound(vex::soundType::doorClose);

    while(true) {
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}





/*————————————————————————————————————————————————————————————————————————————*/
/*          So, anywhay I am about 9 years old and:                           */
/*                                                                            */
/*           Name: Kira                                                       */
/*                              Hello hello                                   */
/*                                                                            */
/*                                                                            */
/*————————————————————————————————————————————————————————————————————————————*/
