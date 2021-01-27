/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.





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
    return (whichArm + distanceToFish < 10);
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
        tempo = 130;
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
        cupsOfWater -= 1;
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
        landingGearExtended = true;
}
void Airplane::changeEnginePower(float amountChanged, int whichEngine)
{
    engineHorsePower += amountChanged;
    whichEngine = 2;
}
bool Airplane::angleWingsForTakeoff(int wingAngleDegree)
{
    wingAngleDegree += 3;

    return (engineHorsePower > 2000);
}



struct Oscillator
{
    int semitone;
    char waveform;
    int phaseDegree;
    float noiseLevel;
    int lfoAmount;

    void outputSignal(char lfoChannel, int amplitude);
    void syncOscillator(Oscillator oscToSyncTo);
    void outputAsLFO(std::string targetParameter);
};

void Oscillator::outputSignal(char lfoChannel, int amplitude)
{
    for(int i = 0; i < 2; i++)
    {
        waveform = lfoChannel;
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

        if(cutoffFreq < endFreq) 
            ++cutoffFreq;

        else  
            --cutoffFreq;
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
    Filter outputFilter;
    float outputLevel;

    void divideSignalBy(float denominator);
    void addDrive(float driveAmount, Filter inputFilter);
    void changeWaveshaperMode(int nextMode);
};
void Amplifier::divideSignalBy(float denominator)
{
    outputLevel = outputLevel/denominator;
}
void Amplifier::addDrive(float driveAmount, Filter inputFilter)
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
        ++feedbackLevel;
    else
        --feedbackLevel;
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
