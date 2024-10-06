# Arduino: Measuring atmospheric pollution

## Getting started

### Hardware

This project can be used with any Arduino motherboard, using a LCD screen for display and a [Nova PM SDS011 sensor](https://components101.com/sensors/nova-pm-sensor-sds011-pinout-features-working-applications-datasheet) as a particle counter.

### Software

This is a simple project used on an Arduino motherboard, using a LCD display and the SDS011 particle sensor.
The sensor counts PM2.5 and PM10 particles present in the air and displays it on the LCD display. Measurements are updated every second on the screen.

This program uses the SDS011.h library from [R. Zschiegner](https://github.com/ricki-z/SDS011).

## Run

Simply upload the code onto your Arduino and run the project.

## License

This software is licensed under the GNU General Public License v3.0, see [License](https://github.com/MartinCoronini/Arduino_atmospheric_pollution/blob/main/LICENSE) for details.