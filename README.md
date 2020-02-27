# alexa-jammer for the ESP8266

(The project is still under development and not tested yet.)

## What does it do?

It constantly checks if there are any spy devices around you, such as an Amazon Echo or a Google Home device and blocks their WiFi access.

## Beware

This automatically works on ALL Wifi networks in your range (even hidden ones) without even knowing the wifi passwords.
Make sure you're not breaking any laws in whatever country you want to operate such a jamming device!

## How to use?

Open the `alexa-jammer.ino` file with your Arduino IDE, connect your ESP8266 to your computer and click the upload button. 
ESP8266 boards like [this one](https://www.aliexpress.com/item/32973629392.html) are nice because you can simply pop in an 18650 battery to make it portable. 
But a [Wemos D1](https://www.aliexpress.com/item/32845084675.html) with a power bank works just as well.

## Credits
This project is heavily based on [RandDruid's esp8266-deauth](https://github.com/RandDruid/esp8266-deauth).

## Misc
You might also wanna check out the [wearable-microphone-jamming](https://github.com/y-x-c/wearable-microphone-jamming) project.
