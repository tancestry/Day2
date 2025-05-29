/*————————————————————————————————————————————————————————————————————————————*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Axolotls Robotics                                                      */
/*    Created:      5/18/2025, 3:23:38 PM                                     */
/*    Description:  IQ2 project                                               */
/*                                                                            */
/*————————————————————————————————————————————————————————————————————————————*/
#include "vex.h"
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
    void driveForward(bool comeHome = true) {

    // Here's a little change
    brain myBrain;

    // Set up left and right motors
    motor leftMotor = motor(PORT7, 2.0, true);
    motor rightMotor = motor(PORT12, 2.0, false);
    motor leftMotor = motor(PORT1, 2.0, true);
    motor rightMotor = motor(PORT6, 2.0, false);
    motor strangeMotor = motor(2,2.0,true);

    // Start those motors
    leftMotor.spin(forward, 50, percent);
    rightMotor.spin(forward, 50, percent);

    // Let the robot drive
    wait(2, sec);

    // Stop
    leftMotor.stop();
    rightMotor.stop();
    //Something is fishy

    if (comeHome == true) {
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
    }
    // Print something
    myBrain.Screen.printAt(2, 30, "All done");
    myBrain.playSound(vex::soundType::tollBooth);
    printf("\nHello\n");
    myBrain.Screen.printAt(2, 30, "Ratchetttttttt!!!");
    myBrain.playSound(vex::soundType::ratchet);

    }

    int main()  {
    // Using a counter in a while loop
    int i = 0;
    while(i++ < 3) {
    printf("Loop #%d\n", i+1);
    driveForward();
    }
    driveForward(false);
    while(true) {

    // Allow other tasks to run
    this_thread::sleep_for(10);
    }
}
    
    }

    //axolotlprogramming is sigma and crazy
    //everyone is awsome! Like @axolotlprogramming and @sophief123!!



    /*————————————————————————————————————————————————————————————————————————————*/
    /*          So, anywhay I am about 9 years old and:                           */
    /*                                                                            */
    /*           Name: Kira                                                       */
    /*                              Hello hello                                   */
    /* oh my goodny! Siiggmmaa skkiibbiiddii ya!                                  */
    /*                                                                            */
    /*                                                                            */
    /*————————————————————————————————————————————————————————————————————————————*/

    // I LIKE BANANAS! SOOOOOOO MUUUUUUUCCCCCCCCHHHHHHHHHHHHHHH!!!!!!!!!!!!!!!!!!!!
    double banana;
    int yellow = 36;
    int answer = 2+8;
    // I 🩷 C++