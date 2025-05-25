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
    brain myBrain;

    // Set up left and right motors
    motor leftMotor = motor(PORT3, 2.0, true);
    motor rightMotor = motor(PORT2, 2.0, false);

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
    
    // Print something
    myBrain.Screen.printAt(2, 30, "Tada!");

    while(true) {
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}
