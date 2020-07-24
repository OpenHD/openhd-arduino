#include <PulsePosition.h>
PulsePositionInput joyIn;
        
void setup() {
    Joystick.useManualSend(true);
    joyIn.begin(10);
}


void loop() {
    int num;

    num = joyIn.available();
    if (num >= 1) {    
        int ch1_raw = joyIn.read(1);
        int ch1_constrained = constrain(ch1_raw, 1000, 2000);
        int ch1 = map(ch1_constrained, 1000, 2000, 0, 1024 * 64);
        Joystick.X(ch1); //Pitch
    }

    if (num >= 2) { 
        int ch2_raw = joyIn.read(2);
        int ch2_constrained = constrain(ch2_raw, 1000, 2000);
        int ch2 = map(ch2_constrained, 1000, 2000, 0, 1024 * 64);
        Joystick.Y(ch2); //Roll
    }

    if (num >= 3) { 
        int ch3_raw = joyIn.read(3);
        int ch3_constrained = constrain(ch3_raw, 1000, 2000);
        int ch3 = map(ch3_constrained, 1000, 2000, 0, 1024 * 64);
        Joystick.Z(ch3); //Throttle
    }
    
    if (num >= 4) { 
        int ch4_raw = joyIn.read(4);
        int ch4_constrained = constrain(ch4_raw, 1000, 2000);
        int ch4 = map(ch4_constrained, 1000, 2000, 0, 1024 * 64);
        Joystick.Xrotate(ch4);
    }

    if (num >= 5) { 
        int ch5_raw = joyIn.read(5);
        int ch5_constrained = constrain(ch5_raw, 1000, 2000);
        int ch5 = map(ch5_constrained, 1000, 2000, 0, 1024 * 64);
        Joystick.Yrotate(ch5);
    }

    if (num >= 6) { 
        int ch6_raw = joyIn.read(6);
        int ch6_constrained = constrain(ch6_raw, 1000, 2000);
        int ch6 = map(ch6_constrained, 1000, 2000, 0, 1024 * 64);
        Joystick.Zrotate(ch6);
    }

    if (num >= 7) {
        int ch7_raw = joyIn.read(7);
        int ch7_constrained = constrain(ch7_raw, 1000, 2000);
        int ch7 = map(ch7_constrained, 1000, 2000, 0, 1024 * 64);
        Joystick.slider(1, ch7);
    }

    if (num >= 8) {
        int ch8_raw = joyIn.read(8);
        int ch8_constrained = constrain(ch8_raw, 1000, 2000);
        int ch8 = map(ch8_constrained, 1000, 2000, 0, 1024 * 64);        
        Joystick.slider(2, ch8);
    }

    if (num >= 9) {
        int ch9_raw = joyIn.read(9);
        int ch9_constrained = constrain(ch9_raw, 1000, 2000);
        int ch9 = map(ch9_constrained, 1000, 2000, 0, 1024 * 64);        
        Joystick.slider(3, ch9);
    }

    if (num >= 10) {
        int ch10_raw = joyIn.read(10);
        int ch10_constrained = constrain(ch10_raw, 1000, 2000);
        int ch10 = map(ch10_constrained, 1000, 2000, 0, 1024 * 64);        
        Joystick.slider(4, ch10);
    }

    if (num >= 11) {
        int ch11_raw = joyIn.read(11);
        int ch11_constrained = constrain(ch11_raw, 1000, 2000);
        int ch11 = map(ch11_constrained, 1000, 2000, 0, 1024 * 64);        
        Joystick.slider(5, ch11);
    }

    if (num >= 12) {
        int ch12_raw = joyIn.read(12);
        int ch12_constrained = constrain(ch12_raw, 1000, 2000);
        int ch12 = map(ch12_constrained, 1000, 2000, 0, 1024 * 64);        
        Joystick.slider(6, ch12);
    }
        
    if (num >= 13) {
        int ch13_raw = joyIn.read(13);
        int ch13_constrained = constrain(ch13_raw, 1000, 2000);
        int ch13 = map(ch13_constrained, 1000, 2000, 0, 1024 * 64);        
        Joystick.slider(7, ch13);
    }

    if (num >= 14) {
        int ch14_raw = joyIn.read(14);
        int ch14_constrained = constrain(ch14_raw, 1000, 2000);
        int ch14 = map(ch14_constrained, 1000, 2000, 0, 1024 * 64);        
        Joystick.slider(8, ch14);
    }

    if (num >= 15) {
        int ch15_raw = joyIn.read(15);
        int ch15_constrained = constrain(ch15_raw, 1000, 2000);
        int ch15 = map(ch15_constrained, 1000, 2000, 0, 1024 * 64);        
        Joystick.slider(9, ch15);
    }

    if (num >= 16) {
        int ch16_raw = joyIn.read(16);
        int ch16_constrained = constrain(ch16_raw, 1000, 2000);
        int ch16 = map(ch16_constrained, 1000, 2000, 0, 1024 * 64);        
        Joystick.slider(10, ch16);
    }

    Joystick.send_now();
    delay(5);
}
