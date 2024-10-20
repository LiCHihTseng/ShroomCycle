<p align="center">
 <img src="https://github.com/LiCHihTseng/ShroomCycle/blob/main/source/logo_black.gif" alt="ShroomCycle Logo" height="250" >
</p>

# ShroomCycle
**ShroomCycle** is a smart lamp system designed to improve sleep hygiene among university students. It creates a collaborative experience where friends can sync their sleep cycles by controlling the lighting environment through connected lamps, helping students maintain healthy sleep routines. This project has been developed by: Danish Rafid Rajendra, Derek Joel George, Li-Chih Tseng (Jason), Yutian Zheng (Yuna), Xinyi Xu (Caroline) 

**[Poster Link](https://github.com/LiCHihTseng/ShroomCycle/blob/main/POSTER.pdf)**

**[First Presentation Link](https://github.com/LiCHihTseng/ShroomCycle/blob/main/Presentation.pdf)**

**[Promotional Video](https://www.dropbox.com/scl/fi/psb5eel48ddmr2vkx6exu/Final.mp4?rlkey=1d96wtdk5a6niu6c8wer76ard&st=v0fzcaty&dl=0)**

**[Trade show presentation Link]**

## Project Description
Many university students struggle with maintaining healthy sleep hygiene due to irregular schedules, late-night study sessions, and social activities. Poor sleep patterns can negatively impact academic performance, mental health, and overall well-being. In our user research, we found that most participants use their phones before sleeping, which can potentially affect their sleep. [see more user research this file](https://github.com/LiCHihTseng/ShroomCycle/tree/main/User%20Research%20-%20Diary%20Study)

ShroomCycle addresses these challenges by creating a smart lighting system that integrates into students’ lives. The lamps automatically turn off when phones are placed inside them, allowing friends to sync their sleep schedules across multiple rooms. The project combines practical functionality with aesthetic design through its mushroom-shaped lamp, offering a creative solution for cable management and ensuring safety.

***Technologies Used:***
**Pressure Sensors:** To detect when a phone is placed in the lamp.
**LED Lights:** For ambient lighting control.
**Ambient Light Sensor:** To automatically adjust lighting when the room becomes dark.
**User-Centered Design:** Based on feedback from user testing.


**Challenges and Future Features:**
One of the key challenges during development was cable management, which led to the shift from the initial design to the mushroom concept.
Future features may include integrating a more advanced mobile app for tracking and adjusting sleep cycles and expanding to other IoT devices(e.g. NFC detection or wireless charger) for greater environmental control.

## How to Install and Run the Project
To run ShroomCycle locally on your machine, follow these steps:

Prerequisites
Make sure you have the following installed on your system:

- Arduino IDE (for working with sensors and LEDs)
- Basic hardware components like pressure sensors, LEDs, and ambient light sensors.

<h4>Step-by-Step Installation Guide</h4>
1. Clone the repository<br>

Open your terminal and run the following command to clone the ShroomCycle project:

```
git clone https://github.com/LiCHihTseng/ShroomCycle.git
```
2. Install dependencies<br>
Depending on the microcontroller you're using (e.g., Arduino), you will need to install the required libraries. For Arduino, use the Arduino IDE and ensure the following libraries are installed:
- Adafruit Sensor Library (for sensors)
- FastLED Library (for LED control)

3. Upload the code<br>
Connect your microcontroller to your computer, open the project in Arduino IDE, and upload the code to your microcontroller.

**Here is the link for the Final functionality code: [Click here](https://github.com/LiCHihTseng/ShroomCycle/blob/main/Final_Prototype.ino)**


## How to Use the Project
Once you’ve successfully installed and set up ShroomCycle, follow these steps to use it:

<h4>Basic Operation</h4>
Turning off the lights
When you place your phone inside the ShroomCycle lamp, the pressure sensor detects it and automatically turns off the lamp. If multiple lamps are connected, lights will turn off based on when phones are placed in them.

<h4>Syncing with friends</h4>
The ShroomCycle system is designed to connect multiple lamps in different rooms. When all phones are placed in the connected lamps, the entire network of lamps will turn off, helping friends synchronize their sleep schedules.

<h4>Visual</h4>

<img src="https://github.com/LiCHihTseng/ShroomCycle/blob/main/source/ShroomCycle.png" alt="Initial Prototype" style="height: 200px">

## A Concept Developed by Team ZZzZZ for DECO3500: Social and Mobile Computing

| Name  | github |
| ------------- | ------------- |
| Li-Chih Tseng  | [@LiCHihTseng](https://github.com/LiCHihTseng)  |
| Derek Joel George  | [@theDerekJoelGeorge](https://github.com/theDerekJoelGeorge)   |
| Danish Rafid Rajendra | [@DanishRafid18](https://github.com/DanishRafid18) |
| Yutian Zent | [@YutianCENG](https://github.com/YutianCENG) |

## Note
Here is the note for the team discussion:
[Link to the note](https://web.goodnotes.com/s/fYJEnX1yz7JSfvdPmL7m31#page-)
