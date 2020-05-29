/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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

struct House {
    // 1) number of rooms
    // 2) is it made of bricks or wood
    // 3) stores how much electricity it consumes per month
    // 4) stores its energy rating
    // 5) does it have a pitched roof or does it have a flat roof

    // 1) open and close front door
    // 2) switch on burglar alarm
    // 3) set interior temporature thermostat
};

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

struct Computer {
    // 1) Does it have a mouse
    // 2) Resolution of display
    // 3) How much RAM
    // 4) Number of processor cores
    // 5) Keyboard or tablet

    // 1) Play game
    // 2) Switch on and off
    // 3) Connect to internet


};

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

struct Robot {
    // 1) What colour it is
    // 2) Number of arms
    // 3) Maximum speed of movement
    // 4) Voice operated or computer operated
    // 5) Amount ot time length before battery needs charging

    // 1) Pick up object
    // 2) Move forward and backward
    // 3) Rotate a specific number of degrees 
};

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

struct Synthesizer {
    // 1) Is it analogue or digital
    // 2) Number of keys on the keyboard
    // 3) Manufacturer name
    // 4) Filter setting value
    // 5) Arpeggiator range setting

    // 1) Play sound
    // 2) Detect key press
    // 3) Output MIDI
};

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

struct Fuselage {
    // 1) Length
    // 2) Number of doors
    // 3) Maximum number of seats
    // 4) Actual number of seats
    // 5) Number of windows

    // 1) Open doors
    // 2) Board plane
    // 3) Deplane
};

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

struct controlSurfaces {
    // 1) Flaps extended true/false
    // 2) Left aileron angle
    // 3) Right aileron angle
    // 4) Rudder orientation angle
    // 5) Undercarriage up/down

    // 1) Turn plane left/right
    // 2) Move plane up/down
    // 3) Move flaps to take-off position
};

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

struct Seats {
    // 1) Seat class
    // 2) Armrests up/down
    // 3) Footrest extension amount
    // 4) Angle of recline
    // 5) tray up/down

    // 1) recline/sit up
    // 2) raise/lower armrests
    // 3) raise/lower tray
};

/*
Thing 8) Cockpit
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

struct Cockpit {

};

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

struct Instrumentation {

};

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

struct Aeroplane {

};

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
