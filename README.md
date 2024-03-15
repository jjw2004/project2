# project2
Project Name: Room Monitor

Student Name: *John Joey Wright*   Student ID: *20105823*

  My IoT idea is a room monitor which will allow the user to monitor a room in your house. it will be able to measure the temperature of the room, when the lights turn on/off and a camera facing outside the window to see what nature has to offer. The camera feed will be displayed on a website and the monitors (light, temp) will be emailed to you at 10:00pm every night giving you the average temperature throughout the day and how many times the lights were turned on. The monitors will be connected to a LCD Screen which will display the time and the current room temperature.

Tools, Technologies and Equipment

  Camera, microcontroller(arduino), raspberry pi, Wi-Fi, TMP36, LCD screen, LDR, programming, webappdevolpment.


  Step 1:
  Learn how to get a Raspberry Pi and camera working.
  https://www.raspberrypi.com/documentation/computers/getting-started.html
  https://www.raspberrypi.com/documentation/accessories/camera.html#:~:text=an%20earthing%20strap.-,Connecting%20the%20Camera,contacts%20facing%20the%20HDMI%20port.
  https://www.youtube.com/watch?v=yhM1NhD-kGs
  This video shows step by step process of how to set up a camera on a Raspberry Pi.

  download the Raspberry Pi imager tool, this helps you set up your Raspberry Pi, including setting up Wi-Fi settings. Just use an SD card in your PC and then follow the pop-up menus.

  Plug the Camera into the Pi make sure the blue tab is facing towards the black tab, after updating the BIOs you can use your Pi camera. To test if it is working use the command "raspistill -o ./Pictures/test.jpg" this saves a photo taken on the Pi to the directory Pictures and the name of the file is test.jpg. the -o means output and there are lots of other commands you can get by just typing "raspistill".
  

  

  Step 2:
  Learn to take photos at certain time stamp and where to upload photos to web service (e.g. Google Photos/Cloud or similar)

