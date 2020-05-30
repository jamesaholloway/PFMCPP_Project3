 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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
