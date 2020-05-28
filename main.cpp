/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/

/*
Thing 1)    House
5 properties:
    1) number of rooms
    2) is it made of bricks or wood
    3) stores how much electricity it consumes per month
    4) stores its energy rating
    5) does it have a pitched roof or does it have a flat roof
3 things it can do:
    1) open and close front door
    2) switch on burglar alarm
    3) set interior temporature thermostat
 */

/*
Thing 2)    Computer
5 properties:
    1) Does it have a mouse
    2) Resolution of display
    3) How much RAM
    4) Number of processor cores
    5) Keyboard or tablet
3 things it can do:
    1) Play game
    2) Switch on and off
    3) Connect to internet
 */

/*
Thing 3)    Robot
5 properties:
    1) What colour it is
    2) Number of arms
    3) Maximum speed of movement
    4) Voice operated or computer operated
    5) Amount ot time length before battery needs charging
3 things it can do:
    1) Pick up object
    2) Move forward and backward
    3) Rotate a specific number of degrees
 */

/*
Thing 4)    Synthesizer
5 properties:
    1) Is it analogue or digital
    2) Number of keys on the keyboard
    3) Manufacturer name
    4) Filter setting value
    5) Arpeggiator range setting
3 things it can do:
    1) Play sound
    2) Detect key press
    3) Output MIDI
 */


/*
Thing 5) Fuselage
5 properties:
    1) Length
    2) Number of doors
    3) Maximum number of seats
    4) Actual number of seats
    5) Number of windows
3 things it can do:
    1) Open doors
    2) Board plane
    3) Deplane
 */

/*
Thing 6) Control Surfaces
5 properties:
    1) Flaps extended true/false
    2) Left aileron angle
    3) Right aileron angle
    4) Rudder orientation angle
    5) Undercarriage up/down
3 things it can do:
    1) Turn plane left/right
    2) Move plane up/down
    3) Move flaps to take-off position
 */

/*
Thing 7) Seats
5 properties:
    1) Seat class
    2) Armrests up/down
    3) Footrest extension amount
    4) Angle of recline
    5) tray up/down
3 things it can do:
    1) recline/sit up
    2) raise/lower armrests
    3) raise/lower tray
 */

/*
Thing 8) Cockpit
5 properties:
    1) Door open/closed
    2) Number of seats
    3) Ambient temperature
    4) Lighting intensity
    5) Winscreen wipers on/off
3 things it can do:
    1) Switch windscreen wipers on/off
    2) Set ambient temperature
    3) Lock door
 */

/*
Thing 9) Instrumentation
5 properties:
    1) Plane airspeed reading
    2) Undercarriage up/down indicator
    3) Engine throttle amount
    4) Artificial horizon angle
    5) Seatbelt sign on/off
3 things it can do:
    1) Display airspeed
    2) Switch seatbelt sign on/off
    3) Deploy/retract undercarriage
 */

/*
Thing 10) Aeroplane
5 properties:
    1) Fuselage
    2) Control surfaces
    3) Seats
    4) Cockpit
    5) Instrumentation
3 things it can do:
    1) Taxi
    2) Take off
    3) Cruise
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
