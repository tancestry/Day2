/*————————————————————————————————————————————————————————————————————————————*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Axolotls Robotics                                                      */
/*    Created:      5/18/2025, 3:23:38 PM                                     */
/*    Description:  IQ2 project                                               */
/*                                                                            */
/*————————————————————————————————————————————————————————————————————————————*/
#include "vex.h"

using namespace vex;

int main()  {
    brain myBrain;

    // Set up left and right motors
    motor leftMotor = motor(PORT7, 2.0, true);
    motor rightMotor = motor(PORT12, 2.0, false);

    // Start those motors
    leftMotor.spin(forward, 50, percent);
    rightMotor.spin(forward, 50, percent);

    // Let the robot drive
    wait(2, sec);

    // Stop
    leftMotor.stop();
    rightMotor.stop();
    //Something is fishy
    // Now go backwards
    leftMotor.spin(forward, -50, percent);
    rightMotor.spin(forward, -50, percent);
    myBrain.Screen.clearScreen();
    // Let it go a bit
    wait(2, sec);
    // Stop
    // TODO: Then stop
    leftMotor.stop();
    rightMotor.stop();
    // Print something
    myBrain.Screen.printAt(2, 30, "All done");
    myBrain.playSound(vex::soundType::tollBooth);
    printf("\nHello\n");
    while(true) {
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}
    
