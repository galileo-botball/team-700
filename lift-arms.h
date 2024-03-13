#include <kipr/wombat.h>

#define RIGHT_ARM_PORT 1
#define RIGHT_ARM_SERVO_UP 0
#define RIGHT_ARM_SERVO_DOWN 1024

#define LEFT_ARM_PORT 2
#define LEFT_ARM_SERVO_UP 2047
#define LEFT_ARM_SERVO_DOWN 1024

void right_arm_up() {
	printf("Lifting right arm.\n");
    enable_servos();
    set_servo_position(RIGHT_ARM_PORT, RIGHT_ARM_SERVO_UP);
    msleep(2000);
    disable_servos();
}

void right_arm_down() {
	printf("Putting right arm down.\n");
    enable_servos();
    set_servo_position(RIGHT_ARM_PORT, RIGHT_ARM_SERVO_DOWN);
    msleep(2000);
    disable_servos();
}

void left_arm_up() {
    printf("Lifting left arm up.\n");
    enable_servos();
    set_servo_position(LEFT_ARM_PORT, LEFT_ARM_SERVO_UP);
    msleep(2000);
    disable_servos();
}

void left_arm_down() {
    printf("Putting left arm down.\n");
    enable_servos();
    set_servo_position(LEFT_ARM_PORT, LEFT_ARM_SERVO_DOWN);
    msleep(2000);
    disable_servos();
}

 