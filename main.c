#include <kipr/wombat.h>
#include "claws.h"
#include "lift-arms.h"
#include "drive.h"
#define RIGHT 0
#define LEFT 1


int main()
{
    // checking safety.
    right_claw_in();
    left_claw_in();
    right_arm_up();
    left_arm_up();

    printf("Right top hat is: %d\n", analog(RIGHT));

    drive_until_black();


    drive_until_white();


    drive_seventy_centimeters();
    
    
    drive_until_white_reverse();
    
    ao();
    msleep(2000);
    
    // open left claw.
    left_claw_out();
    
    // put down left arm.
    left_arm_down();
    
    /*
    // 90 degree turn
    motor(0,-50);
    motor(3,50);
    msleep(1450);
    // drive until 4 seconds
    int time_has_passed = 0;
    while(time_has_passed < 3500) {

        // if white
        if(analog(0) < 2500 && analog(1) < 2500) {
            motor(0,50);
            motor(3,0);
            msleep(200);
        }
        //if analog 0, aka right sensor, detects black then turn right
        if(analog(0) > 2500){
            printf("Turning right.\n");
            motor(0,0);
            motor(3,50);
            msleep(200); 
        }
        // if analog 1, aka left sensor, detects black then turn left
        if(analog(1) > 2500){
            printf("Turning left.\n");
            motor(0,50);
            motor(3,0);
            msleep(200);
        }
        //if analog 1, aka left sensor, detects black then turn right
        if(analog(1) < 2500){
            motor(0,0);
            motor(3,50);
            msleep(200);

        }



        //if analog 0, aka right sensor, detects white then turn left
        if(analog(0) < 2500){
            motor(0,50);
            motor(3,0);
            msleep(200);
        }


        time_has_passed = time_has_passed + 200;
    }

    // 90 degree turn
    motor(0,50);
    motor(3,-50);
    msleep(1450);

    // drive for more seconds 
    time_has_passed = time_has_passed - 4000;
    while(time_has_passed < 4000) {

        // if white
        if(analog(0) < 2500 && analog(1) < 2500){
            motor(0,50);
            motor(3,50);
            msleep(200);
        }
        //if analog 0, aka right sensor, detects black then turn right
        if(analog(0) > 2500){
            printf("Turning right.\n");
            motor(0,0);
            motor(3,50);
            msleep(200); 
        }
        // if analog 1, aka left sensor, detects black then turn left
        if(analog(1) > 2500){
            printf("Turning left.\n");
            motor(0,50);
            motor(3,0);
            msleep(200);
        }
        time_has_passed = time_has_passed + 200;
    }


*/
    printf("All done!\n");
    return 0;
}
