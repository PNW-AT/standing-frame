#ifndef PINS_H
#define PINS_H
const int pin_battery_voltage = 38;

const int pin_left_move_dir = 9;
const int pin_left_move_pwm = 2;
const int pin_left_move_enc_b = 0;
const int pin_left_move_enc_a = 1;

const int pin_left_hand_dir = 5;
const int pin_left_hand_pwm = 6;
const int pin_left_hand_enc_b = 3;
const int pin_left_hand_enc_a = 4;

const int pin_right_hand_dir = 28;
const int pin_right_hand_pwm = 25;
const int pin_right_hand_enc_b = 8;
const int pin_right_hand_enc_a = 7;

const int pin_right_move_dir = 32;
const int pin_right_move_pwm = 29;
const int pin_right_move_enc_b = 30;
const int pin_right_move_enc_a = 31;

const int pin_joystick_x = A12;
const int pin_joystick_y = A13;

// Control panel pins. The commented numbers are the pin number from the 30 pin header
const int pin_mode_knob_1 = 54; // 24
const int pin_mode_knob_2 = 39; // 23

const int pin_activate_button_red = 28; // 30
const int pin_activate_button_green = 37; // 29
const int pin_activate_button_blue = 33; // 28
const int pin_activate_button = 35; // 25

const int pin_steerlock = 34; // 27

const int pin_top_right_knob_1 = 53; // 22
const int pin_top_right_knob_2 = 41; // 19
const int pin_top_right_knob_4 = 52; // 21
const int pin_top_right_knob_8 = 40; // 20

const int pin_top_middle_knob_1 = 15; // 14
const int pin_top_middle_knob_2 = 11; // 11
const int pin_top_middle_knob_4 = 12; // 13
const int pin_top_middle_knob_8 = 16; // 12

const int pin_top_left_knob_1 = 20; // 6
const int pin_top_left_knob_2 = 10; // 8
const int pin_top_left_knob_4 = 22; // 4
const int pin_top_left_knob_8 = 23; // 3

const int pin_bottom_right_knob_1 = 50; // 18
const int pin_bottom_right_knob_2 = 51; // 15
const int pin_bottom_right_knob_4 = 49; // 17
const int pin_bottom_right_knob_8 = 14; // 16

const int pin_bottom_left_knob_1 = 19; // 7
const int pin_bottom_left_knob_2 = 21; // 5
const int pin_bottom_left_knob_4 = 18; // 9
const int pin_bottom_left_knob_8 = 23; // 3

#endif // PINS_H
