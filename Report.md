Name: Ian Joshi		

EID: ij2945

Team Number:

## Questions

1. Why does your program need a setup and a loop?

   Because setup is run whenever the controller is reset and the loop is used to run your code over and over.

2. What is the downside to putting all your code in a loop?

    If one thing goes wrong it's hard to fix

3. Why does your code need to be compiled?

    To compile into machine code so it can be read by the machine.

4. When lowering the frequency in procedure A, step 4, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

    The problem is that the frequency is so low to where we can see all the dimming steps. The frequency makes it blink rather than dim. Increase the frequency.

5. Why do you need to connect the logic analyzer ground to the ESP32 ground?

    Because Voltage is relative and needs a reference point

6. What is the difference between synchronous and asynchronous communication?

   UART communication is asynchronous, meaning that it is not synchronized using a clock while SPI is. 

7. Profile of UART: Sent X bytes in Y time 

    6 bytes in .512 ms

8. Profile of SPI: Sent X bytes in Y time

    7 bytes in .147 ms

9. Why is SPI so much faster than UART?

    UART is actual hardware while the SPI is Protocol. For SPI, each direction of communication has it's own line. 

10. list one pro and one con of UART

    Pro: Less Pins than SPI; Con: Slower than SPI

11. list one pro and one con of SPI

    Pro: Very fast communication speeds; Con: Takes a lot of pins

12. list one pro and one con of I2C

    Pro: Single data line shared between master and all slaves ;Con: Extreme sensitivity to interference

13. Why does I2C need external resistors to work?

    The lines are open drain, so they require pull up or pull down resistors. There are weak ones built into the ESP32, but weak ones need a longer setup 
    time when toggling, and therefore need a lower clock speed.

## Screenshots

Procedure A, step 1:
![Put path to your image here ->] C:\Users\Ian\Documents\First Year Design\arduino-lab-1-bobbysix6\img\ArduinoLab1_SS.PNG

Procedure A, step 4:
![Put path to your image here ->](C:\Users\Ian\Documents\First Year Design\arduino-lab-1-bobbysix6\img\ArduinoLab1_SSDim.PNG

Procedure B, UART:
![Put path to your image here ->]C:\Users\Ian\Documents\First Year Design\arduino-lab-1-bobbysix6\img\ArduinoLab1_SSHello.PNG

Procedure B, SPI:
![Put path to your image here ->]C:\Users\Ian\Documents\First Year Design\arduino-lab-1-bobbysix6\img\ArduinoLab1_SSspi.PNG
