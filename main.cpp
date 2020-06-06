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
#include <iostream>

struct Limb
{
    int stepSize();
    void stepForward();
};

int Limb::stepSize()
{
    return 10;
}

void Limb::stepForward()
{
    // add code to take a step forward

}

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATscore;
    int distanceTravelled;
    Limb leftFoot, rightFoot;

    void run(int howFast, bool startWithLeftFoot);
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTravelled += howFast * (leftFoot.stepSize() + rightFoot.stepSize());
}

 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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
    bool operateFrontDoor (bool isFrontDoorOpen);
    // 2) switch on burglar alarm
    bool activateAlarm (int zones);
    // 3) set interior temporature thermostat
    bool setThermostat (float temperatureSetting);
};

bool House::operateFrontDoor(bool isFrontDoorOpen)
{
    if(isFrontDoorOpen == true)
    {
        std::cout << "Front Door closed\n";
        return false;
    }
    std::cout << "Front Door open\n";
    return true;  
}

bool House::activateAlarm(int zones)
{
    if(zones != 0)
    {
        std::cout << "Zones " << zones <<" activated\n";
        return true;
    }
    std::cout << "No zones activated\n";
    return false;
}

bool House::setThermostat (float temperatureSetting)
{
    float currentTemp = 20.f;
    if(temperatureSetting < currentTemp)
    {
        std::cout << "Cooling\n";
        return false;
    }
    std::cout << "Warming\n";
    return true;
}

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

bool Computer::playGame( int numPlayers)
{
    if (numPlayers > 0)
    {
        std::cout << "Playing game with " << numPlayers << " players\n";
        return true;
    }
    std::cout << "No players want to play\n";
    return false;
}

bool Computer::switchOnOff()
{
    bool isOn = false;

    if (isOn == true)
    {
        std::cout << "Switching off\n";
        return false;
    }
    std::cout << "Switching on\n";
    return true;
}

bool Computer::connectURL( char URL)
{
    if (URL != ' ')
    {
        std::cout << "Connecting to " << URL << " \n";
        return true;
    }
    std::cout << "No URL supplied\n";
    return false;
}

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

bool Robot::pickupObject(Object myObject)
{
    if(myObject.weight>10.0f)
    {
        std::cout << "Object is too heavy\n";
        return false;
    }
    std::cout << "Object is now held\n";
    return true;
}

float Robot::moveRobot (float speed)
{
    if(speed == 0.f)
    {
        std::cout << "Robot stopped\n";
        return 0.f;
    }
    std::cout << "Robot now moving at " << speed << " m/s\n";
    return speed;
}

float Robot::rotateRobot (float angle)
{
    angle /= 360.f;
    if(angle == 0.f)
    {
        std::cout << "Robot has not rotated\n";
        return 0.f;
    }
    std::cout << "Robot now rotated by " << angle << " degrees\n";
    return angle;
}

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

bool Synthesizer::playSound (float frequency, float volume, int channel)
{
    if(volume == 0.f)
    {
        std::cout << "Muted\n";
        return false;
    }
    std::cout << "Note played at " << frequency << " Hz " << "on channel " << channel << "\n";
    return true;
}

float Synthesizer::detectkey (keyClass myPressedKey)
{
    if (myPressedKey.noteVelocity == 0.f)
    {
        std::cout << "No key pressed\n";
        return 0.f;
    }
    std::cout << "Note played at " << myPressedKey.noteFrequency << " Hz\n";
    return myPressedKey.noteFrequency;
}
void Synthesizer::keyClass::playNote(float myFrequency, float myVelocity)
{
    /* code to play a note */
    myFrequency = 0.f;
    myVelocity = 0.f;
}
bool Synthesizer::transmitMIDI (keyClass key, int MIDIChannel)
{
    if (key.noteVelocity == 0.f)
    {
        std::cout << "No key pressed\n";
        return false;
    }
    key.playNote(key.noteFrequency, key.noteVelocity);
    std::cout << "Note played on channel " << MIDIChannel << " Hz\n";
    return true;    
}

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

bool Fuselage::openDoor (int doorNumber, int totalDoors)
{
    if(doorNumber > totalDoors)
    {
        std::cout << "Invalid door number\n";
        return false;
    }
    std::cout << "Opened door number:" << doorNumber << "\n";
    return true;
}

bool Fuselage::boardPlane (int occupiedSeats, int planeID)
{
    if(occupiedSeats < 300)
    {
        std::cout << "Boarding not yet complete.\n";
        return false;
    }
    std::cout << planeID << " fully boarded\n";
    return true;
}

bool Fuselage::dePlane (int vacatedSeats, int planeID)
{
    if(vacatedSeats == 300)
    {
        std::cout << "Deplaning complete.\n";
        return true;
    }
    std::cout << (300 - vacatedSeats) << " people still to disembark from plane " << planeID << "\n";
    return false;
}

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

float controlSurfaces::bankPlane(float angleOfTurn )
{
    if (angleOfTurn == 0.f)
    {
        std::cout << "Plane headed straight.\n";
    }
    else
    {
        std::cout << "Plane headed at heading " << angleOfTurn << "\n";
    }    
    return angleOfTurn;
}

float controlSurfaces::pitchPlane(float angleOfPitch)
{
    if (angleOfPitch == 0.f)
    {
        std::cout << "Plane horizontal.\n";
    }
    else
    {
        std::cout << "Plane pitched to: " << angleOfPitch << "\n";
    }
    return angleOfPitch;
}

bool controlSurfaces::moveFlaps(bool flapOrientation)
{
    if(flapOrientation == true)
    {
        std::cout << "Flaps extended\n";
        return false;
    }
    std::cout << "Flaps retracted\n";
    return true;
}

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
    bool moveArmrest(bool ArmrestPosition, bool isLeftArmrest);
    // 3) raise/lower tray
    bool moveTray(bool trayPosition);
};

float Seats::reclineSeat(float seatAngle)
{
    if (seatAngle == 0.f)
    {
        std::cout << "Seat upright.\n";
    }
    std::cout << "Seat reclined to " << seatAngle << "\n";
    return seatAngle;    
}

bool Seats::moveArmrest(bool ArmrestPosition, bool isLeftArmrest)
{
    if (isLeftArmrest == true)
    {
        std::cout << "Left armrest moved to up position";
    }
    std::cout << "Right armrest moved to up position";
    return ArmrestPosition;    
}

bool Seats::moveTray(bool trayPosition)
{
    if (trayPosition == true)
    {
        std::cout << "Tray is up\n";
    }
    else
    {
        std::cout << "Tray is down\n";
    }
    return trayPosition;    
}

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

bool Cockpit::operateWipers(int wiperSpeed)
{
    if (wiperSpeed >0)
    {
        std::cout << "Wipers set to " << wiperSpeed << "\n";
        return true;        
    }
    std::cout << "Wipers stopped.\n";
    return false;
}

float Cockpit::setTemp(float desiredTemp, int fanSpeed)
{
    if (fanSpeed == 0)
    {
        std::cout << "Error: fan is off\n";
        return 0.f;  
    }
    std::cout << "Temperature now set to " << desiredTemp << "\n";
    return desiredTemp;   
}

bool Cockpit::setDoorLook(bool isLocked)
{
    if(isLocked==true)
    {
        std::cout << "Door unlocked\n";
        return false;  
    }
    std::cout << "Door locked\n";
    return true; 
}

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

void Instrumentation::displayAirspeed (float airSpeed, bool isDecimal)
{
    if(isDecimal == true)
    {
        std::cout << "Airspeed: " << airSpeed << "\n";
    }
}

bool Instrumentation::changeSeatbeltSign(bool isOn)
{
    if(isOn == true)
    {
        std::cout << "Seatbelts off\n";
        return false;  
    }
    std::cout << "Seatbelts on\n";
    return true; 
}

bool Instrumentation::deployUndercarriage(bool isUp)
{
    if(isUp == true)
    {
        std::cout << "Undercarriage is down\n";
        return false;  
    }
    std::cout << "Undercarriage is up\n";
    return true;       
}

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
    void flyAeroplane(float airSpeed, float orientationAngle);
};

float Aeroplane::moveAeroplane(float groundSpeed, float orientationAngle)
{
    if(groundSpeed == 0.f)
    {
        std::cout << "Aeroplane stationary\n";  
    }
    else
    {
        std::cout << "Aircraft taxiing at " << groundSpeed << "knotts, at orientation " << orientationAngle << "degrees\n";
    }
    return groundSpeed;
}

void Aeroplane::takeoffAeroplane(float groundSpeed, float engineThrottle, float pitchAngle)
{
    if(groundSpeed > 100.f && engineThrottle > 10.f && pitchAngle > 15.f)
    {
        std::cout << "Aeroplane has taken off\n";
    }
    else
    {
        std::cout << "Aeroplane still on ground\n";
    }
}

void Aeroplane::flyAeroplane(float airSpeed, float orientationAngle)
{
    float stallSpeed = 100.f;
    if(airSpeed < stallSpeed)
    {
        std::cout << "Warning! Aircraft stall\n";
    }
    else
    {
         std::cout << "Aircraft flying at " << airSpeed << "knotts, at orientation " << orientationAngle << "degrees\n";       
    }
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */


int main()
{
    std::cout << "good to go!" << std::endl;
}
