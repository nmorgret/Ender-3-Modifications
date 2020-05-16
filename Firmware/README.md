# Firmware Setup
## Firmware
Clone repository

Copy the `TH3DUF_R2` folder into the Arduino folder

Open `TH3DUF_R2.ino` with Arduino IDE

## Arduino IDE settings
### Add Sanguino repository
![Select preferences](Images/img-1.png)

Select `File -> preferences`

![Select additional board manager URLs](Images/img-2.png)

Select <img src="Images/img-3.png" height="36"> at the end of the "Additional Board Manager URLs" line

![Add Sanguino repository](Images/img-4.png)

Add `https://raw.githubusercontent.com/Lauszus/Sanguino/master/package_lauszus_sanguino_index.json` on a new line

### Install Sanguino board package
![Select board manager](Images/img-5.png)

Select `Tools -> Board... -> Boards Manager`

![Install Sanguino board](Images/img-6.png)

Install the `Sanguino` board package

![Select Sanguino board](Images/img-7.png)

Select `Tools -> Board... -> Sanguino`

![Select processor](Images/img-8.png)

Select `ATmega1284 or ATmega1284P (8 MHz)`

### Install U8glib library
![Select manage libraries](Images/img-9.png)

Select `Tools -> Manage Libraries`

![Install U8glib](Images/img-10.png)

Install the `U8glib` library
