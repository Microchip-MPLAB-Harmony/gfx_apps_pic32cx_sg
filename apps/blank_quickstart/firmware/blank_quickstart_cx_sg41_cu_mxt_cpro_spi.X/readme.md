
![](../../../../images/mhgs.png) blank\_quickstart\_cx\_sg41\_cu\_mxt\_cpro\_spi.X

Defining the Architecture
-------------------------

![](../../../../images/blank_quickstart_pic32cx_sg41_cu_mxt_cpro_spi_arch.png)

The application uses the ILI9488 display driver APIs to render text and an image onto the screen.

User touch input on the display panel is received through the PCAP capacitive touch controller, which sends a notification to the Touch Input Driver. The Touch Input Driver reads the touch information over I2C and propogates the touch event through the Input System Service which is handled in the application code.

### Demonstration Features 

* ILI9488 display controller driver 
* 4-line SPI display interface driver 
* Time system service, timer-counter peripheral library and driver 
* 16-bit RGB565 color depth support (65535 unique colors) 
* Port, I2C peripheral library 

Creating the Project Graph
--------------------------

![](../../../../images/blank_quickstart_pic32cx_sg41_cu_mxt_cpro_spi_pg.png)


The Project Graph diagram shows the Harmony components that are included in this application. Lines between components are drawn to satisfy components that depend on a capability that another component provides.

Adding the **PIC32CX SG41 Curiosity Ultra BSP** and **Legato Graphics w/ MXT Curiosity Pro Display** Graphics Template component into the project graph will automatically add the components needed for a graphics project and resolve their dependencies. It will also configure the pins needed to drive the external peripherals like the display and the touch controller. 

**Note: Replace the existing display driver LE ILI9488 with LE External Controller. Also, remove the LEGATO library component from the Project Graph.**

Building the Application
------------------------

The parent directory for this application is apps/legato_quickstart. To build this application, use MPLAB X IDE to open the apps/blank_quickstart/firmware/blank_quickstart_pic32cx_sg41_cu_mxt_cpro_spi.X project file. 

The following table lists configuration properties: 

| Project Name  | BSP Used |Graphics Template Used | Description |
|---------------| ---------|---------------| ---------|
| blank_quickstart_pic32cx_sg41_cu_mxt_cpro_spi.X | PIC32CX SG41 Curiosity Ultra BSP | Legato graphics w/ maXTouch Curiosity Pro Display  | PIC32CX SG41 Curiosity Ultra w/ maXTouch Curiosity Pro display via SPI interface |

> \*\*\_NOTE:\_\*\* This application may contain custom code that is marked by the comments // START OF CUSTOM CODE ... and // END OF CUSTOM CODE. When using the MPLAB Harmony Configurator to regenerate the application code, use the "ALL" merging strategy and do not remove or replace the custom code.

Configuring the Hardware
------------------------

The final setup should be: 

![](../../../../images/legato_quickstarts_pic32cx_sg41_cu_mxt_cpro_spi_conf.png)

Set the IM switches on the MXT Curiosity Pro Display to IM[2:0] = 111b.

![](../../../../images/legato_qs_e54_cult_cpro_spi_conf2.png)


Running the Demonstration
-------------------------

When power-on is successful, the demonstration will display a similar menu to that shown in the following figure (different configurations may have slight variation in the screen aspect ratio).

Touch inputs (Touch down/touch move) are handled in the Application code and whose responses can be identified via ON states of LED1 and LED2 respectively. 

![](../../../../images/blank_quickstart.png)

* * * * *
