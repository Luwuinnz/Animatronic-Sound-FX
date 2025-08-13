# Animatronic-Sound-FX
A PVNet project that uses a button to trigger a sound for animatronics. Built for a Halloween event.

## Materials
- DFPlayer Mini
- Arduino Nano (or any microcontroller compatible with DFPlayer Mini)
- Trigger Button
- 3 × 3.5mm Female Jack Plug
- 2 × 3.5mm Male-to-Male Connector
- Speaker for sound
- MicroSD card (< 32GB) for DFPlayer to play sound
- USB Cable to power
- Resistors
- Wires

## How to Implement

**Arduino Library Used:**
- [DFPlayer Mini Fast by PowerBroker2](https://github.com/PowerBroker2/DFPlayerMini_Fast)  


### Steps
1. Copy and paste the `sound.ino` Arduino code into a new Arduino IDE file.  Upload the code to the Arduino Nano via USB cable.

2. Ensure all materials are present.

3. Follow the provided Fritzing diagram to wire the device board.

![Fritzing diagram for wiring.](audio_proj.png)


   **Check wiring functionality:**
   - **a)** Connect Arduino Nano to DFPlayer Mini first to check functionality.  
     Insert the SD Card into the DFPlayer.  
     A successful connection is indicated by the DFPlayer's blue LED lighting up when you press the Arduino Nano reset button.  
   - **b)** Add a simple button to test if the button wiring to the DFPlayer (via Arduino Nano) is correct.  
     The blue LED should flash when the button is triggered.  
   - **c)** Add the resistors.  
   - **d)** Solder the jack plugs.  
   - **e)** Solder the button to the female jack plug separately for a male-to-male connector for the handle.  

5. Fit the board into a casing.

6. Connect USB to power the Arduino Nano.

7. Connect male-to-male connectors to the speaker and button trigger.

8. Press the button to play the sound.

### Team:
Tiffany Lin - Project Lead, Author of Board design/firmware/schematics  
Arthur Chou - Case and Handle Designer in Fusion360  
Keegan - Soldering Assistant  
Dickson Lin - Soldering Assistant  
