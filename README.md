# Project Name: Room Monitor

**Student Name:** John Joey Wright   **Student ID:** 20105823

## Project Description
My IoT idea is a room monitor which will allow the user to monitor a room in your house. It will be able to measure the temperature of the room, detect when the lights turn on/off, and provide a camera feed facing outside the window to observe nature. The camera feed will be displayed on a website, and the monitored data (light status, temperature) will be emailed to the user at 10:00 PM every night, providing the average temperature throughout the day and the frequency of light switches. The monitors will be connected to an LCD screen which will display the time and the current room temperature.

## Tools, Technologies, and Equipment
- Camera
- Microcontroller (Arduino)
- Raspberry Pi
- Wi-Fi
- TMP36 temperature sensor
- LCD screen
- Light Dependent Resistor (LDR)
- Programming
- Web application development

## Raspberry Pi Steps:
### Step 1:
- Learn how to get a Raspberry Pi and camera working.
  - [Getting Started with Raspberry Pi](https://www.raspberrypi.com/documentation/computers/getting-started.html)
  - [Raspberry Pi Camera Documentation](https://www.raspberrypi.com/documentation/accessories/camera.html#:~:text=an%20earthing%20strap.-,Connecting%20the%20Camera,contacts%20facing%20the%20HDMI%20port)
  - [Video Tutorial](https://www.youtube.com/watch?v=yhM1NhD-kGs) demonstrating the setup process.

- Download the Raspberry Pi Imager tool to set up your Raspberry Pi, including Wi-Fi settings configuration. Use an SD card in your PC and follow the pop-up menus.

- Plug the camera into the Pi, ensuring the correct orientation. After updating the BIOS, use the command `raspistill -o ./Pictures/test.jpg` to test if the camera is working.

### Step 2:
- Learn to make a local "security camera" that can connect to devices on the local network using HTTP.
  - [Video Tutorial](https://www.youtube.com/watch?v=qs3KhLDUBmk&list=LL)

### Step 3:
- Learn to make an HTTPS "security camera" where your Pi serves as a web host using ngrok, which provides a free domain.
  - [Video Tutorial](https://www.youtube.com/watch?v=p4L3g9Grl3k)

- Once this has been achieved, you can create a webpage for your Pi camera.

## Arduino:
The Arduino setup is a combination of the labs that were conducted throughout the semester, incorporating components such as the TMP36 temperature sensor, LCD screen, and LDR for light detection.

