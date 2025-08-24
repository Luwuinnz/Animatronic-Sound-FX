# Animatronic-SFX Audio Trigger Device

## Abstract
The **Animatronic-SFX system** is a compact and easy-to-install audio trigger device, ready for any type of event. Developed as part of PVNet’s involvement in the Promenade’s Halloween event, the device consists mainly of an **Arduino Nano** containing firmware and a **DFPlayer Mini Module** to produce sound output when triggered by a button. The design supports **3.5 mm jack connections** for modularity between the trigger button and speakers.

The hardware features a **custom protective case** for durability and quick setup. Built with custom Arduino firmware using the **DFPlayer Mini Fast** library and schematics designed in **Fritzing**, the device uses precise soldering for long-term reliability in demanding event environments. This design delivers **immersive, synchronized sound effects** while remaining low-cost, portable, and adaptable to diverse themed events.

---

## Methodology
- Reviewed reference circuits from **Indrek Luuk** and **Just Baselmans**.  
- Default Arduino DFPlayer Mini libraries failed to detect the module; switched to **DFPlayer Mini Fast** library by PowerBroker2, confirmed via flashing blue LED.  
- Firmware modified for faster triggering; reset button replaced with a **dedicated switch** to improve response time.  
- MP3 files edited to remove leading silence; firmware adjustments minimized audio delays.  
- Breadboard prototyping completed; **Fritzing schematic** created for soldering.  
- Design revised from **male 3.5 mm connector** to **female jack plugs** for modular audio and trigger connections.  
- Wiring verified via trial-and-error:  
  - Audio: GND, DACR, DACL → prongs 1, 2, 3  
  - Button trigger: GND → GND, prong 2 → D4  
- **Five boards soldered** and tested for continuity/functionality.  
- Custom casing designed with openings for audio, trigger jack, USB-C power, wall-mount flap, and internal stability platform.  

**Outcome:** A low-cost, durable, and portable audio-trigger device completed within one week.

---

## Implementation

### Material List
- DFPlayer Mini  
- Arduino Nano (or compatible microcontroller)  
- Trigger Button  
- 3 × 3.5mm Female Jack Plug  
- 2 × 3.5mm Male-to-Male Connector  
- Speaker  
- MicroSD card (< 32GB)  
- USB Cable (power)  
- Resistors  
- Wires  
- Breadboard / Soldering Board  

### Steps
1. Copy `sound.ino` Arduino code into a new Arduino IDE file and upload to Arduino Nano.  
2. Ensure all materials are present.  
3. Follow the **Fritzing diagram** to wire the device board.  
![Fritzing Diagram of Hardware wiring](audio_proj.png)
**Check wiring functionality:**  
- Connect Arduino Nano to DFPlayer Mini and insert SD card. Successful connection is indicated by **blue LED** lighting when pressing the Nano reset button.  
- Add a simple button to test DFPlayer trigger. LED should flash when pressed.  
- Add resistors.  
- Solder jack plugs.  
- Solder button to female jack plug for male-to-male connector handle.  
- Fit board into casing.  
- Connect USB power.  
- Attach male-to-male connectors to speaker and button trigger.  
- Press the button → sound should play.  

---

## Results
- **Video Demo:**
![Video Demonstration of Device](video_demo.mp4)
- **Pictures:**
<img width="877" height="659" alt="image" src="https://github.com/user-attachments/assets/3986d086-3438-4b4b-88cb-7d552b578645" />
<img width="877" height="659" alt="image" src="https://github.com/user-attachments/assets/1709b222-c96d-464c-ac94-db9e56aad313" />
<img width="877" height="659" alt="image" src="https://github.com/user-attachments/assets/156eca31-6ac2-4cf0-9a9a-839f408dcb71" />
<img width="877" height="659" alt="image" src="https://github.com/user-attachments/assets/d27c6bc6-9004-424e-bcc5-20db3f925f30" />
 
- **Whiteboard Design:**
<img width="1065" height="799" alt="image" src="https://github.com/user-attachments/assets/9587305a-28ef-4657-abcf-398fe44ceefc" />

- **Case and Handle in Fusion360:**
To be added
- **Full Assembly with Case and Speakers:**
To be added

---

## Team Members
- **Tiffany Lin** – Project Lead, Board Design / Firmware / Schematics  
- **Yuichi Kurino** – Device Case and Button Handle Design  
- **Keegon Grohman** – Soldering Assistant  
- **Dickson Lin** – Soldering Assistant  

---

## References
- [PowerBroker2 DFPlayerMini_Fast Library](https://github.com/PowerBroker2/DFPlayerMini_Fast)  
- Wiring DFPlayer Mini (MP3 Module) to Arduino. Stereo/Mono Diagrams – Circuit Journal  
- Best Way to Play Audio on Arduino! DFPlayer mini / MP3-TF-16p Tutorial  
