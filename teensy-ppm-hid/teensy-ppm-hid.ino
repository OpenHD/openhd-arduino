#include <PulsePosition.h>
PulsePositionInput joyIn;
        
void setup() {
    Joystick.useManualSend(true);
    joyIn.begin(10);
}


void loop() {
    int num;

    num = joyIn.available();
    if (num > 0) {    
        int ch1_raw = joyIn.read(1);
        int ch1_constrained = constrain(ch1_raw, 1000, 2000);
        int ch1 = map(ch1_constrained, 1000, 2000, 0, 1024 * 64);

        int ch2_raw = joyIn.read(2);
        int ch2_constrained = constrain(ch2_raw, 1000, 2000);
        int ch2 = map(ch2_constrained, 1000, 2000, 0, 1024 * 64);

        int ch3_raw = joyIn.read(3);
        int ch3_constrained = constrain(ch3_raw, 1000, 2000);
        int ch3 = map(ch3_constrained, 1000, 2000, 0, 1024 * 64);

        int ch4_raw = joyIn.read(4);
        int ch4_constrained = constrain(ch4_raw, 1000, 2000);
        int ch4 = map(ch4_constrained, 1000, 2000, 0, 1024 * 64);

        int ch5_raw = joyIn.read(5);
        int ch5_constrained = constrain(ch5_raw, 1000, 2000);
        int ch5 = map(ch5_constrained, 1000, 2000, 0, 1024 * 64);

        int ch6_raw = joyIn.read(6);
        int ch6_constrained = constrain(ch6_raw, 1000, 2000);
        int ch6 = map(ch6_constrained, 1000, 2000, 0, 1024 * 64);

        int ch7_raw = joyIn.read(7);
        int ch7_constrained = constrain(ch7_raw, 1000, 2000);
        int ch7 = map(ch7_constrained, 1000, 2000, 0, 1024 * 64);
        
        int ch8_raw = joyIn.read(8);
        int ch8_constrained = constrain(ch8_raw, 1000, 2000);
        int ch8 = map(ch8_constrained, 1000, 2000, 0, 1024 * 64);

        Joystick.X(ch1); //Pitch
        Joystick.Y(ch2); //Roll
        Joystick.Z(ch3); //Throttle
        Joystick.Xrotate(ch4);
        Joystick.Yrotate(ch5);
        Joystick.Zrotate(ch6);
      
        Joystick.slider(1, ch7);
        Joystick.slider(2, ch8);  

    }
        
    Joystick.send_now();
    delay(5);
}
