#include <kipr/wombat.h>

#define RIGHT_CLAW_PORT 3
#define RIGHT_CLAW_SERVO_IN 1024
#define RIGHT_CLAW_SERVO_OUT 350
#define LEFT_CLAW_PORT 0
#define LEFT_CLAW_SERVO_IN 1024
#define LEFT_CLAW_SERVO_OUT 1700

void right_claw_in() {
    printf("Closing right claw.\n");
    enable_servos(); 
    set_servo_position(RIGHT_CLAW_PORT, RIGHT_CLAW_SERVO_IN);
    msleep(2000); 
    ao();
}

void right_claw_out() {
    printf("Opening right claw.\n");
    enable_servos();
    set_servo_position(RIGHT_CLAW_PORT, RIGHT_CLAW_SERVO_OUT);
    msleep(2000);
    ao();
}

void left_claw_in() {
    printf("Closing left claw.\n"); 
    enable_servos();
    set_servo_position(LEFT_CLAW_PORT, LEFT_CLAW_SERVO_IN);
    msleep(2000);
    ao();
}

void left_claw_out() {
    printf("Opening left claw.\n");
    enable_servos();
    set_servo_position(LEFT_CLAW_PORT, LEFT_CLAW_SERVO_OUT);
    msleep(2000);
    ao();
}
