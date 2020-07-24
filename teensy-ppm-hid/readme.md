### Teensy PPM to HID converter

This sketch requires a teensy 3.x or 4.x, 

### Binaries for use with the Teensy Loader

See the releases page, all you have to do is pick the correct hex file for your Teensy (3.1 and 3.2 are the
same), open it with Teensy Loader and follow the directions in the app.

### Building

This sketch does not require installing any 3rd party Arduino libraries, but requires a modification to the
core Teensy libraries to enable the expanded joystick API, which allows more axis channels to be used. If you
don't make the change, the sketch will not compile as it uses the expanded Joystick API rather than the
default API.

The file you're looking for is called `usb_desc.h`, and it can be found in the following folder wherever
the Teensy libraries are installed on your system:

    Java/hardware/teensy/avr/cores/teensy3/

Or for teensy4:

    Java/hardware/teensy/avr/cores/teensy4/

On Mac they are inside the Arduino/Teensyduino app itself, right click it and click "show package contents".

In the `usb_desc.h` file you will find the USB descriptors for each of the common Teensy USB modes, these correspond to
the dropdown menu in Arduino that says USB Type.

You are looking for this line, and there are 4 of them, one for each USB type that supports joysticks:

      #define JOYSTICK_SIZE         16

You need to change it to say 64 instead of 16, then save the file, compile the sketch and load it on your Teensy.

### Wiring

The PPM pin is #10, you can connect it to anything that has PPM output at 3.3v level, which includes the
PPM solder pad inside flight controllers such as the FlySky i6 or i6x.

Below you can see the Teensy wire solder to the ppm pad inside a FlySky i6x, along with a ground wire soldered 
to a gnd pad. The Teensy is attached inside with double sided gorilla tape, and a flat USB wire is routed out
the back. You can probably find a good panel mount connector instead.

The wire connection at the Teensy pins is a Schmartboard jumper wire with the pressure spring squeezed very tight
so that it does not come loose, while the other end is soldered to the solder pads on the FlySky PCB.

You **must** make a physically secure connection, if your wiring comes loose during flight there will be no way
for the ground station or the flight controller to know that you no longer have control.

![FlySky i6x](https://discuss.openhdfpv.com/uploads/default/optimized/1X/4a80a1f2301d63636df16e8dde781d55853c42ae_2_750x1000.jpeg)