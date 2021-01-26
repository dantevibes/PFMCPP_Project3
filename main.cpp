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
struct Person 
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;

    void run(int howFast, bool startWithLeftFoot);
};


struct Foot
{
    int sizeOfFoot;

    void stepForward(int stepLength, int distanceTraveled);
    int stepSize(Foot whichFoot);
};

void Foot::stepForward(int stepLength, int distanceTraveled)
{
    distanceTraveled += stepLength;
}

int Foot::stepSize(Foot whichFoot)
{
    return whichFoot.sizeOfFoot;
}



 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */


#include <iostream>
#include <string>

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



struct Octopus
{
    int numOfArms;
    float inkAmount;
    char color;
    char shape;
    float size;

    bool catchAFish(int whichArm, int distanceToFish);
    void changeColor(char newColor, char thisColor);
    void squirtInk(float inkSize, char escapeDirection);
};

bool Octopus::catchAFish(int whichArm, int distanceToFish)
{
    bool fishWasCaught = false;
    if (whichArm + distanceToFish < 10)
    {
        fishWasCaught = true;
    }

    return fishWasCaught;
}
void Octopus::changeColor(char newColor, char thisColor)
{
    thisColor = newColor;
}
void Octopus::squirtInk(float inkSize, char escapeDirection)
{
    inkAmount -= inkSize;
    escapeDirection = 'W';
}



struct Band
{
    int numOfMembers;
    char genre;
    int albumsSold;
    double budget;
    int numOfSongs;

    void playForAudience(char whichSong, int tempo, bool countOff);
    std::string nameASong(std::string word1, std::string word2);
    void postOnInsta(int numOfPics, char filter, std::string postText);
};

void Band::playForAudience(char whichSong, int tempo, bool countOff)
{
    if(countOff)
    {
        tempo = 130;
    }
    whichSong = 'V';
}
std::string Band::nameASong(std::string word1, std::string word2)
{   
    std::string songTitle = word1 + word2;
    return songTitle;
}

void Band::postOnInsta(int numOfPics, char filter, std::string postText)
{
    numOfPics = 5;
    filter = 'N';
    postText = "Had an awesome time at Club Buddhabump last nite!";
}



struct EspressoMachine
{
    float cupsOfWater;
    char coffeeType;
    int waterTempInF;
    float tbspOfGrounds;
    int steamerPressure;

    void heatWater(int waterLevel, int targetTempInF);
    void pourCoffee(float pourTime);
    void makeSoundWhenDone(int loudness);
};

void EspressoMachine::heatWater(int waterLevel, int targetTempInF)
{
    if(waterTempInF < targetTempInF)
    {
        waterTempInF += 10/waterLevel;
    }
}
void EspressoMachine::pourCoffee(float pourTime)
{
    for(int i = 0; i < pourTime ; i++)
    {
        cupsOfWater -= 1;
    }
}
void EspressoMachine::makeSoundWhenDone(int loudness)
{
    loudness *= 2;
}


struct Airplane
{
    int numOfCrew;
    int numOfPassengers;
    int maxCapacity;
    float engineHorsePower;
    int totalWeightInLbs;

    void extendLandingGear(bool landingGearExtended);
    void changeEnginePower(float amountChanged, int whichEngine);
    bool angleWingsForTakeoff(int wingAngleDegree);
};

void Airplane::extendLandingGear(bool landingGearExtended)
{
    if(landingGearExtended == false)
    {
        landingGearExtended = true;
    }
}
void Airplane::changeEnginePower(float amountChanged, int whichEngine)
{
    engineHorsePower += amountChanged;
    whichEngine = 2;
}
bool Airplane::angleWingsForTakeoff(int wingAngleDegree)
{
    wingAngleDegree += 3;
    bool isFlying = false;
    if( engineHorsePower > 2000)
    {
        isFlying = true;
    }
    return isFlying;
}



struct Oscillator
{
    int semitone;
    char waveform;
    int phaseDegree;
    float noiseLevel;
    int lfoAmount;

    void outputSignal(char channel, int amplitude);
    void syncOscillator(Oscillator oscToSyncTo);
    void outputAsLFO(std::string targetParameter);
};

void Oscillator::outputSignal(char channel, int amplitude)
{
    for(int i = 0; i < 2; i++)
    {
        channel = 'L';
        amplitude = 75 * i;
    }
}
void Oscillator::syncOscillator(Oscillator oscToSyncTo)
{
    phaseDegree = oscToSyncTo.phaseDegree;
}
void Oscillator::outputAsLFO(std::string targetParameter)
{
    targetParameter = "LFO output target";
}


struct Filter
{
    int cutoffFreq;
    int resonance;
    char filterType;
    int envAmount;
    int wet;

    struct LFO
    {
        float frequency;
        int tempoMultiplier;
        int waveform;
        float waveformMorph;
        bool bpmSync;

        void changeWaveform(int nextWave);
        void changeTempoMultiplier(int newValue);
        void syncToOscillator(Oscillator syncTo, float warpAmount);
    };

    void changeType(char nextType);
    void switchInput(int newInput);
    void filterSweep(int startFreq, int endFreq, float sweepTimeInMillis);
};

void Filter::changeType(char nextType)
{
    filterType = nextType;
}
void Filter::switchInput(int newInput)
{
    newInput += 1;
    if(newInput > 5) newInput = 0;
}
void Filter::filterSweep(int startFreq, int endFreq, float sweepTimeInMillis)
{
    for(float f = 0.0f; f < sweepTimeInMillis; f += 0.5f)
    {
        cutoffFreq = startFreq;
        if(cutoffFreq < endFreq) cutoffFreq++;

        else  cutoffFreq--;
    } 
}
void Filter::LFO::changeWaveform(int nextWave)
{
    waveform = nextWave;
}
void Filter::LFO::changeTempoMultiplier(int newValue)
{
    tempoMultiplier = newValue;
}
void Filter::LFO::syncToOscillator(Oscillator syncTo, float warpAmount)
{
    frequency = syncTo.lfoAmount;
    warpAmount = 30.3f;
}


struct Amplifier
{
    float driveLevel;
    int toneLevel;
    int waveshaperType;
    float bassBoostLevel;
    float outputLevel;

    void divideSignalBy(float denominator);
    void addDrive(float driveAmount, Filter inputFilter, Filter outputFilter);
    void changeWaveshaperMode(int nextMode);
};
void Amplifier::divideSignalBy(float denominator)
{
    outputLevel = outputLevel/denominator;
}
void Amplifier::addDrive(float driveAmount, Filter inputFilter, Filter outputFilter)
{
    outputFilter.cutoffFreq = inputFilter.cutoffFreq;
    driveLevel += driveAmount;
}
void Amplifier::changeWaveshaperMode(int nextMode)
{
    waveshaperType = nextMode;
}



struct Delay
{
    int type;
    int delayTimeMs;
    float feedbackLevel;
    float toneLevel;
    int wetBalance;

    void switchInput(char newInput);
    void moveFeedbackPrePost(bool preWet);
    float processInput();
};

void Delay::switchInput(char newInput)
{
    newInput = 'C';
}
void Delay::moveFeedbackPrePost(bool preWet)
{
    if(preWet)
    {
        feedbackLevel ++;
    }
    else
    {
        feedbackLevel --;
    }
}
float Delay::processInput()
{
    toneLevel += wetBalance;
    return toneLevel;
}



struct Preset
{
    std::string presetName;
    char presetCategory;
    int numOfParameters;
    char fileType;
    float fileSize;

    void storePreset(std::string presetName);
    void loadPreset(std::string whichPreset);
    void renamePreset(std::string newName);
};

void Preset::storePreset(std::string thisName)
{
    thisName = "CoolCids";
}
void Preset::loadPreset(std::string whichPreset)
{
    presetName = whichPreset;
}
void Preset::renamePreset(std::string newName)
{
    presetName = newName;
}



struct Synthesizer
{
    Oscillator osc1;
    Filter lowPass;
    Amplifier tubeAmp;
    Delay pingPong;
    Preset midnightRunner;

    struct inputBus
    {   
        float inputLeftGainDb;
        float inputRightGainDb;
        float outputLeftSignalDb;
        float outputRightSignalDb;
        bool isMono;

        void actAsCarrierOscillator(int sourceChannel, std::string targetParam);
        float sumInputSignalToMono(float sourceChannelSignalL, 
        float sourceChannelSignalR, float attenuate);
        void readInputSignalStereo(int sourceChannelL, int sourceChannelR, float attenuate);

    };

    void makeNote(int noteNum, int velocity, Oscillator thisOsc);
    void storePreset(std::string presetName);
    void modulateInput(inputBus externalInstrument, std::string parameterName);
};

void Synthesizer::makeNote(int noteNum, int velocity, Oscillator thisOsc)
{
    thisOsc.semitone = noteNum;
    velocity = 200;

}
void Synthesizer::storePreset(std::string presetName)
{
    std::string thisPresetsName = presetName;
}
void Synthesizer::modulateInput(inputBus externalInstrument, std::string parameterName)
{
    externalInstrument.outputLeftSignalDb += 40.5f;
    externalInstrument.outputRightSignalDb += 40.5f;
    parameterName = "sidechain input";
}
void Synthesizer::inputBus::actAsCarrierOscillator(int sourceChannel, std::string targetParam)
{
    sourceChannel = 3;
    targetParam = "ringmod frequency";
}
float Synthesizer::inputBus::sumInputSignalToMono(float sourceChannelSignalL, 
float sourceChannelSignalR, float attenuate)
{
    if(isMono)
    {
        return (sourceChannelSignalL + sourceChannelSignalR)/attenuate;
    }

    return sourceChannelSignalL/attenuate;
}
void Synthesizer::inputBus::readInputSignalStereo(int sourceChannelL, int sourceChannelR, float attenuate)
{
    sourceChannelL /= attenuate;
    sourceChannelR /= attenuate;
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

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
