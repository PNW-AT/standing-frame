#include <Arduino.h>

#include "QuadEncoder.h"
#include "pins.h"
QuadEncoder encoderMoveL(1, pin_left_move_enc_a, pin_left_move_enc_b, true);
QuadEncoder encoderMoveR(2, pin_right_move_enc_a, pin_right_move_enc_b, true);
QuadEncoder encoderHandL(3, pin_left_hand_enc_a, pin_left_hand_enc_b, true);
QuadEncoder encoderHandR(4, pin_right_hand_enc_a, pin_right_hand_enc_b, true);

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}
