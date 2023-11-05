# Costume lighting library
A simple library to control addressible LEDs via a webserver.

## BOM
This project should be compatible with any ESP32 based microcontroller, you will need to update the [pinout definition file](./src/pin_defs.h)

### ESP32C3
https://thepihut.com/products/seeed-xiao-esp32c3?variant=42321452564675

### LiPo
https://thepihut.com/products/adafruit-liion-or-lipoly-charger-bff-add-on-for-qt-py?variant=41736820883651

### Neopixel driver
https://thepihut.com/products/adafruit-neopixel-driver-bff-add-on-for-qt-py-and-xiao?variant=42297767559363

## Building the project
This project makes use of the PlatformIO IDE to manage dependencies and build the project. 

## Developer notes

Example that may be useful: 
- https://github.com/me-no-dev/ESPAsyncWebServer/blob/master/examples/ESP_AsyncFSBrowser/ESP_AsyncFSBrowser.ino