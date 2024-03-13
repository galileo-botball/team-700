#include <kipr/wombat.h>

#define RIGHT_TOP_HAT_SENSOR 0
#define LEFT_TOP_HAT_SENSOR 1
#define BLACK 2500
#define RIGHT_WHEEL 0
#define LEFT_WHEEL 3
#define FULL_POWER 100
#define HALF_POWER 50
#define QUARTER_POWER 25
#define THREE_FOURTHS_POWER 75
#define TWO_SECONDS 2000
#define REVERSE_FULL_POWER -100
#define REVERSE_HALF_POWER -50
#define ONE_CENTIMETER 82
#define SEVENTY_CENTIMETERS 5740
#define ONE_WHEEL_ROTATION 1800
#define ONE_WHEEL_ROTATION_IN_CENTIMETERS 22

void drive_full_power() {
    printf("Driving at full power!\n");
    motor(RIGHT_WHEEL,FULL_POWER);
    motor(LEFT_WHEEL,FULL_POWER);
    msleep(TWO_SECONDS);
}

void drive_half_power() {
    printf("Driving at half power!\n");
    motor(RIGHT_WHEEL,HALF_POWER);
    motor(LEFT_WHEEL,HALF_POWER);
    msleep(TWO_SECONDS);
}

void drive_backwards_full_power() {
    printf("Driving backwards at full power!\n");
    motor(RIGHT_WHEEL,REVERSE_FULL_POWER);
    motor(LEFT_WHEEL,REVERSE_FULL_POWER);
    msleep(TWO_SECONDS);
}

void drive_backwards_half_power() {
    printf("Driving backwards at half power!\n");
    motor(RIGHT_WHEEL,REVERSE_HALF_POWER);
    motor(LEFT_WHEEL,REVERSE_HALF_POWER);
    msleep(TWO_SECONDS);
}

void drive_until_white_reverse() {
    printf("Driving until I see white, but backwards!\n");
    while(analog(LEFT_TOP_HAT_SENSOR) > BLACK) {
        motor(RIGHT_WHEEL,REVERSE_HALF_POWER);
        motor(LEFT_WHEEL,REVERSE_HALF_POWER);
        msleep(200);
    }
    ao();
}

void backup_in_centimeters(int centimeters) {
    printf("I'm backing up, using centimeters!\n");
    int distance_traveled = 0;
    while(distance_traveled < centimeters) {
        motor(RIGHT_WHEEL,REVERSE_HALF_POWER);
        motor(LEFT_WHEEL,REVERSE_HALF_POWER);
        msleep(200);
    }
    ao();
}
void drive_until_black() {
    printf("Driving until I see black!\n");
    while(analog(RIGHT_TOP_HAT_SENSOR) < BLACK) {
        motor(RIGHT_WHEEL,HALF_POWER);
        motor(LEFT_WHEEL,HALF_POWER);
        msleep(200);
    }
    ao();
}
void drive_until_white() {
    printf("Driving until I see white!\n");
    while(analog(LEFT_TOP_HAT_SENSOR) > BLACK) {
        motor(RIGHT_WHEEL,HALF_POWER);
        motor(LEFT_WHEEL,HALF_POWER);
        msleep(200);
    }
    ao();
}

void drive_one_centimeter() {
    printf("I am driving one centimeter!\n");
    clear_motor_position_counter(RIGHT_WHEEL);
    while(get_motor_position_counter(RIGHT_WHEEL) < ONE_CENTIMETER) {
        motor(RIGHT_WHEEL,HALF_POWER);
        motor(LEFT_WHEEL,HALF_POWER);
        msleep(200);
    }
    printf("The counter is %d\n", get_motor_position_counter(RIGHT_WHEEL));
    ao();
}

void drive_seventy_centimeters() {
    printf("I am driving seventy centimeters!\n");
    clear_motor_position_counter(RIGHT_WHEEL);
    while(get_motor_position_counter(RIGHT_WHEEL) < SEVENTY_CENTIMETERS) {
        motor(RIGHT_WHEEL,HALF_POWER);
        motor(LEFT_WHEEL,HALF_POWER);
        msleep(200);
    }
    printf("The counter is %d\n", get_motor_position_counter(RIGHT_WHEEL));
    ao();
}