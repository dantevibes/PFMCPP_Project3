 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

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
Thing 1) Octopus
5 properties:
    1) number of arms
    2) amount of ink
    3) color
    4) shape
    5) size
3 things it can do:
    1) catch a fish
    2) change color
    3) squirt ink
 */
struct Octopus
{
    //number of arms
    int numOfArms;
    //amount of ink
    float inkAmount;
    //color
    char color;
    // shape
    char shape;
    //size in ft
    float size;

    //catch a fish, bool to return fishCaught
    bool catchAFish(int whichArm);
    //change color
    void changeColor(char color, char secondaryColor);
    //squirt ink
    void squirtInk(float inkSize, char escapeDirection);
};
/*
Thing 2) Band
5 properties:
    1) Number of people in band
    2) Type of band
    3) Number of albums sold
    4) Budget
    5) Number of songs written
3 things it can do:
    1) Play for an audience
    2) Record a song
    3) Post on social media
 */
struct Band
{
    //number of band members
    int numOfMembers;
    //genre of band
    char genre;
    //number of albums sold
    int albumsSold;
    // budget in dollars
    double budget;
    //number of songs written
    int numOfSongs;

    //play for an audience
    void playForAudience(char whichSong, int tempo, bool countOff);
    //record a song
    std::string recordASong(char songName, char secondaryColor);
    //post on social media
    void postOnInsta(int numOfPics, char filter, std::string postText);
};
/*
Thing 3) Espresso Machine
5 properties:
    1) Amount of water in tank
    2) Type of coffee
    3) water temperature
    4) tablespoons of coffee grounds
    5) steamer pressure
3 things it can do:
    1) Heat water
    2) Pour water through coffee
    3) Make sound when done
 */
struct EspressoMachine
{
    //Amount of water in tank
    float cupsOfWater;
    //Type of coffee
    char coffeeType;
    //water temperature
    int waterTempInF;
    // tablespoons of coffee grounds
    float tbspOfGrounds;
    //steamer pressure
    int steamerPressure;

    //Heat water
    void heatWater(int waterLevel, int targetTempInF);
    //Pour coffee
    void pourCoffee(float pourTime);
    //Make sound when done
    void makeSoundWhenDone(int loudness);
};
/*
Thing 4) Airplane
5 properties:
    1) Crew members
    2) Passenger members
    3) Capacity
    4) Engine power
    5) total weight
3 things it can do:
    1) retract/extend landing gear
    2) increase/decrease engine power
    3) Angle wings up/down
 */
struct Airplane
{
    //num of Crew members
    int numOfCrew;
    //num of Passenger members
    int numOfPassengers;
    //maximumCapacity
    int maxCapacity;
    // engine horse power
    float engineHorsePower;
    //steamer pressure
    int totalWeightInLbs;

    //extend lending gear
    void extendLandingGear(bool landingGearExtended);
    //decrease engine power
    void changeEnginePower(float amountChanged, int whichEngine);
    //Angle wings up
    int angleWingsForTakeoff();
};
/*
Thing 5) Oscillator
5 properties:
    1) Tuning (semitones)
    2) Waveform
    3) Phase (degree)
    4) Noise level
    5) LFO amount
3 things it can do:
    1) Make signal
    2) Sync with another oscillator
    3) Modulate other parameter
 */
struct Oscillator
{
    //Tuning (semitones)
    int semitones;
    //Waveform
    char Waveform;
    //Phase
    int phaseDegree;
    // Noise level
    float noiseLevel;
    //LFO amount
    int lfoAmount;

    //generate signal
    void outputSignal(char channel, int amplitude);
    //Sync with another oscillator
    void syncOscillator(Oscillator oscToSyncTo);
    //Modulate other parameter
    void outputAsLFO(std::string targetParameter);
};
/*
Thing 6) Filter
5 properties:
    1) Cutoff
    2) Resonance
    3) Type
    4) Envelope amount
    5) Wet/dry
3 things it can do:
    1)  Switch state
    2)  Switch inputs
    3)  Sweep up/down
 */
struct Filter
{
    //Cutoff freq
    int cutoffFreq;
    // Resonance
    int resonance;
    // Type
    char filterType;
    // Envelope amount
    int envAmount;
    // Wet/dry
    int wet;

    struct LFO
    {
        //LFO frequency
        float frequency;
        // bpm ratio of the LFO frequency
        int tempoMultiplier;
        //LFO waveform
        int waveform;
        //Makes waveform sharper/smoother
        float waveformMorph;
        //tells whether lfo is synced to bpm
        bool bpmSync;

        //change waveform
        void changeWaveform(int nextWave);
        //change LFO bpm ratio
        void changeTempoMultiplier(int newValue);
        //sync LFO to Oscillator
        void syncToOscillator(Oscillator syncTo, float warpAmount);
    };

    // Switch state
    void changeType(char nextType);
    //Switch inputs
    void switchInput(int newInput);
    //Sweep up/down
    void filterSweep(int startFreq, int endFreq);
};
/*
Thing 7) Amplifier
5 properties:
    1) Drive level 
    2) Tone
    3) Waveshaper type
    4) bass boost (int)
    5) Output level 
3 things it can do:
    1) Attenuate signal
    2) Saturation
    3) Change waveshaper
 */
struct Amplifier
{
    //Drive level 
    float driveLevel;
    //Tone
    int toneLevel;
    //Waveshaper type
    int waveshaperType;
    // bass boost (int)
    float bassBoostLevel;
    //Output level 
    float outputLevel;

    //Attenuate signal
    void divideSignalBy(float denominator);
    //Saturation
    void addDrive(float driveAmount, Filter inputFilter, Filter outputFilter);
    //Change waveshaper
    void changeWaveshaperMode(int nextMode);
};
/*
Thing 8) Delay
5 properties:
    1) Type 
    2) Speed (ms)
    3) Feedback
    4) Tone
    5) Wet/Dry
3 things it can do:
    1) Switch inputs
    2) Switch feedback to be pre/post wet/dry
    3) Process audio
 */
struct Delay
{
    //Type 
    int type;
    //Speed in ms
    int delayTimeMs;
    //Feedback
    float feedbackLevel;
    // Tone
    float toneLevel;
    //Wet/Dry
    int wetBalance;

    //Switch inputs
    void switchInput(char newInput);
    //Switch feedback to be pre/post wet/dry
    void moveFeedbackPrePost(bool preWet);
    //Process audio
    float processInput();
};
/*
Thing 9) Preset
5 properties:
    1) Name
    2) Category
    3) Number of parameters
    4) Filetype
    5) File size
3 things it can do:
    1) Store preset
    2) Recall preset
    3) Rename preset
 */
struct Preset
{
    //Name
    std::string presetName;
    //Category
    char presetCategory;
    //Number of parameters
    int numOfParameters;
    // Filetype
    char fileType;
    //File size in mb
    float fileSize;

    //Store preset
    void storePreset(std::string presetName, char presetCategory, int numOfParameters, Oscillator thisWave, Filter thisFilt, Amplifier thisAmp, Delay thisDel);
    //Recall preset
    void loadPreset(std::string whichPreset);
    //Rename preset
    void renamePreset(std::string newName);
};
/*
Thing 10) Synthesizer
5 properties:
    1) Filters
    2) Oscillators
    3) Amplifiers
    4) Presets
    5) Effects
3 things it can do:
    1) Play sound
    2) Store preset
    3) Modulate input
 */
struct Synthesizer
{
    //Oscillators
    Oscillator osc1;
    //Filter
    Filter lowPass;
    //Amplifier
    Amplifier tubeAmp;
    //Delay
    Delay pingPong;
    // Preset
    Preset midnightRunner;

    struct inputBus
    {   
        //input gain LR in dB
        float inputLeftGainDb;
        float inputRightGainDb;
        //input level LR in dB
        float outputLeftSignalDb;
        float outputRightSignalDb;
        //tells whether input is summed to mono
        bool isMono;

        //use input as modulation for a parameter
        void actAsCarrierOscillator(int sourceChannel, std::string targetParam);
        //take stereo input and output mono, adjusting level
        float sumInputSignalToMono(float sourceChannelSignalL, 
        float sourceChannelSignalR, float attenuate);
        //write input to buffer, adjusting level
        void readInputSignalStereo(int sourceChannelL, int sourceChannelR, float attenuate);

    };

    //play sound
    void makeNote(int noteNum, int velocity);
    //store preset
    void storePreset(std::string presetName);
    //affect input
    void modulateInput(inputBus externalInstrument, std::string parameterName);
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
