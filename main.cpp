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

struct House 
{
    // 1) number of rooms
    int numberOfRooms = 10;
    // 2) is it made of bricks or wood
    bool madeOfBricks = true;
    // 3) stores how much electricity it consumes per month
    float electrictityConsumption = 100.f;
    // 4) stores its energy rating
    char energyRating = 'A';
    // 5) does it have a pitched roof or does it have a flat roof
    bool flatRoof = true;

    // 1) open and close front door
    bool operateFrontDoor ();
    // 2) switch on burglar alarm
    bool activateAlarm (int zones);
    // 3) set interior temporature thermostat
    bool setThermostat (float temperatureSetting);
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

struct Computer 
{
    // 1) Does it have a mouse
    bool hasMouse = true;
    // 2) Resolution of display
    int displayResolution = 1024;
    // 3) How much RAM
    int ramAmount = 1048576;
    // 4) Number of processor cores
    int cores = 4;
    // 5) Keyboard or tablet
    bool hasKeyboard = true;

    // 1) Play game
    bool playGame (int numPlayers);
    // 2) Switch on and off
    bool switchOnOff();
    // 3) Connect to internet
    bool connectURL (char URL);


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

struct Robot 
{
    // 1) What colour it is
    int colour = 7;
    // 2) Number of arms
    int numberOfArms = 2;
    // 3) Maximum speed of movement
    float maxSpeed = 10.f;
    // 4) Voice operated or computer operated
    bool voiceOperated = true;
    // 5) Amount ot time length before battery needs charging
    float batteryTime = 6.f;

    struct Object 
    {
        // object weight
        float weight = 10.5f;
        // object density
        float density = 100.f;
        // object colour code
        int colour = 255;
        // how slippery is object material
        float frictionCoeff = 0.67f;
        // what is the maximum width/heoght/depth of the object
        float maxDimension = 10.0f;

        // rotate the object
        float rotateObject(float angle, int axis);
        // throw the object
        void throwObject(Object, float launchSpeed, float launchAngle);
        // destroy object
        bool destroyObject(Object, bool withExplosion);
    };


    // 1) Pick up object
    bool pickupObject(Object myObject);
    // 2) Move forward and backward
    float moveRobot (float speed);
    // 3) Rotate a specific number of degrees
    float rotateRobot (float angle); 
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

struct Synthesizer 
{
    // 1) Is it analogue or digital
    bool analogue = true;
    // 2) Number of keys on the keyboard
    int numberOfKeys = 64;
    // 3) Manufacturer name
    char manufacturer = 'R';
    // 4) Filter setting value
    float cutoffFilterValue = 256.0f;
    // 5) Arpeggiator range setting
    int arpeggiatorRange = 3;

    struct keyClass 
    {
        // numeric key position
        int noteValue = 32;
        // corresponding frequency of note
        float noteFrequency = 440.f;
        // how hard pressed
        float noteVelocity = 0.f;
        // was aftertouched triggered?
        bool noteAfterTouchTrigger = false;
        // if so, strength of aftertouch 
        float noteAftertouch = 0.f;

        // key triggers note to be played
        void playNote(float noteFrequency, float noteVelocity);
        // apply afterouch to note
        void applyAftertouch (bool noteAfterTouchTrrigger, float noteAftertouch);
        // silence all playing notes
        void muteAll();
    };

    // 1) Play sound
    bool playSound (float frequency, float volume, int channel);
    // 2) Detect key press
    float detectkey (keyClass myPressedKey);
    // 3) Output MIDI
    bool transmitMIDI (keyClass key, int MIDIChannel);
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

struct Fuselage 
{
    // 1) Length
    float length = 30.0f;
    // 2) Number of doors
    int numberOfDoors = 8;
    // 3) Maximum number of seats
    int maxSeats = 300;
    // 4) Actual number of seats
    int numberSeats = 250;
    // 5) Number of windows
    int numberWindows = 300;

    // 1) Open doors
    bool openDoor (int doorNumber, int numberOfDoors);
    // 2) Board plane
    bool boardPlane (int numberSeats, int planeID);
    // 3) Deplane
    bool dePlane (int numberSeats, int planeID);
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

struct controlSurfaces 
{
    // 1) Flaps extended true/false
    bool flapsExtended = true;
    // 2) Left aileron angle
    float leftAileronAngle = 0.f;
    // 3) Right aileron angle
    float rightAileronAngle = 0.f;
    // 4) Rudder orientation angle
    float rudderAngle = 0.f;
    // 5) Undercarriage up/down
    bool undercarriageUp = false;

    // 1) Turn plane left/right
    float bankPlane(float angleOfTurn);
    // 2) Move plane up/down
    float pitchPlane(float angleOfPitch);
    // 3) Move flaps to take-off position
    bool moveFlaps(bool flapOrientation);
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

struct Seats 
{
    // 1) Seat class
    char cabinClass = 'e';
    // 2) Armrests up/down
    bool armrestsUp = false;
    // 3) Footrest extension amount
    float footrestExtension = 10.f;
    // 4) Angle of recline
    float reclineAngle = 270.f;
    // 5) tray up/down
    bool trayUp = true;

    // 1) recline/sit up
    float reclineSeat(float seatAngle);
    // 2) raise/lower armrests
    bool moveArmrest(bool ArmrestPostion, bool isLeftArmrest);
    // 3) raise/lower tray
    bool moveTray(bool trayPosition);
};

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

struct Cockpit 
{
    // 1) Door open/closed
    bool cockpitDoorOpen = false;
    // 2) Number of seats
    int numberSeats = 4;
    // 3) Ambient temperature
    float cockpitTemp = 20.f;
    // 4) Lighting intensity
    float lightingValue= 5.f;
    // 5) Winscreen wipers on/off
    bool windscreenwiperOn = false;

    // 1) Switch windscreen wipers on/off
    bool operateWipers(int wiperSpeed);
    // 2) Set ambient temperature
    float setTemp(float desiredTemp, int fanSpeed);
    // 3) Lock door
    bool setDoorLook(bool isLocked);
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

struct Instrumentation 
{
    // 1) Plane airspeed reading
    float airspeed = 300.f;
    // 2) Undercarriage up/down indicator
    bool undercarriageUpDisplay = false;
    // 3) Engine throttle amount
    float engineThrottleVal = 5500.f;
    // 4) Artificial horizon angle
    float artificialHorizonAngle = 360.f;
    // 5) Seatbelt sign on/off
    bool seatbeltSign = true;

    // 1) Display airspeed
    void displayAirspeed (float airSpeed, bool isDecimal);
    // 2) Switch seatbelt sign on/off
    bool changeSeatbeltSign(bool isOn);
    // 3) Deploy/retract undercarriage
    bool deployUndercarriage(bool isUp);
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

struct Aeroplane 
{
    // 1) Fuselage
    Fuselage boeingSevenFourSevenFuselage;
    // 2) Control surfaces
    controlSurfaces boeingSevenFourSevenControlSurfaces;
    // 3) Seats
    Seats boeingSevenFourSevenSeats;
    // 4) Cockpit
    Cockpit boeingSevnFourSevenCockpit;
    // 5) Instrumentation
    Instrumentation boeingSevenFourSevenInstruments;

    // 1) Taxi
    float moveAeroplane(float groundSpeed, float orientationAngle);
    // 2) Take off
    void takeoffAeroplane(float groundSpeed, float engineThrottle, float pitchAngle);
    // 3) Cruise
    void flyAreoplane(float airSpeed, float orientationAngle);
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
