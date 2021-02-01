/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable
    float b { 2.f }; //3) in-class initialization
    UDT() : a(0) { } //3) 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()



#include <iostream>
#include <string>

struct CarWash                                  
{
    CarWash();

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

CarWash::CarWash()
{
    numVacuumCleaners = 2;
    numEcoFriendlyCleaningSupplies = 10;       
    waterUsedPerWeek = 215.f;                    
    profitPerWeek = 4095.95f;                         
    numberOfCarsServiced = 50;
}

struct Octopus
{
    Octopus();

    int numOfArms;
    float inkAmount;
    char color;
    char shape;
    float size;

    bool catchAFish(int whichArm, int distanceToFish);
    void changeColor(char newColor, char thisColor);
    void squirtInk(float inkSize, char escapeDirection);
};

Octopus::Octopus()
{
    numOfArms = 8;
    inkAmount = 100.f;
    color = 'R';
    shape = 'O';
    size = 24.5f;
}

bool Octopus::catchAFish(int whichArm, int distanceToFish)
{
    return (whichArm + distanceToFish < 10);
}
void
 Octopus::changeColor(char newColor, char thisColor)
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
    Band();

    int numOfMembers;
    char genre;
    int albumsSold;
    double budget;
    int numOfSongs;

    void playForAudience(char whichSong, int tempo, bool countOff);
    std::string nameASong(std::string word1, std::string word2);
    void postOnInsta(int numOfPics, char filter, std::string postText);
};

Band::Band()
{
    numOfMembers = 4;
    genre = 'I';
    albumsSold = 0;
    budget = 20.0;
    numOfSongs = 3;
}

void Band::playForAudience(char whichSong, int tempo, bool countOff)
{
    if(countOff)
        tempo = 130;
    whichSong = 'V';
    std::cout << "Thank you and have a great night!" << std::endl;
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
    std::cout << postText << std::endl;;
}



struct EspressoMachine
{
    EspressoMachine();

    float cupsOfWater;
    char coffeeType;
    int waterTempInF;
    float tbspOfGrounds;
    int steamerPressure;

    void heatWater(int waterLevel, int targetTempInF);
    void pourCoffee(float pourTime);
    void makeSoundWhenDone(int loudness);
};

EspressoMachine::EspressoMachine()
{
    cupsOfWater = 8.f;
    coffeeType = 'd';
    waterTempInF = 120;
    tbspOfGrounds = 3.3f;
    steamerPressure = 0;
}

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
void EspressoMachine::makeSoundWhenDone(int coolTemp)
{
    waterTempInF = coolTemp;
    std::cout << "Coffee is done!" << std::endl;
}


struct Airplane
{
    Airplane();

    int numOfCrew;
    int numOfPassengers;
    int maxCapacity;
    float engineHorsePower;
    int totalWeightInLbs;

    void extendLandingGear(bool landingGearExtended);
    void changeEnginePower(float amountChanged, int whichEngine);
    bool angleWingsForTakeoff(int wingAngleDegree);
};

Airplane::Airplane()
{
    numOfCrew = 4;
    numOfPassengers = 200;
    maxCapacity = 500;
    engineHorsePower = 0.f;
    totalWeightInLbs = 3000;
}

void Airplane::extendLandingGear(bool landingGearExtended)
{
    if(landingGearExtended == false) 
    {
        landingGearExtended = true;
        std::cout << "Ready for landing." << std::endl;
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

    return (engineHorsePower > 2000);
}



struct Oscillator
{
    Oscillator();

    int semitone;
    char waveform;
    int phaseDegree;
    float noiseLevel;
    float lfoAmount;

    float outputLFOSignal(char lfoChannel, float amplitudeLevel);
    void syncOscillator(Oscillator oscToSyncTo);
    void outputAsLFO(std::string targetParameter);
};

Oscillator::Oscillator()
{
    semitone  = 0;
    waveform = 'N';
    phaseDegree = 0;
    noiseLevel = -100.f;
    lfoAmount = 0.f;
}

float Oscillator::outputLFOSignal(char lfoWave, float amplitudeLevel)
{
    for(int i = 0; i < 2; ++i )
    {
        waveform = lfoWave;
        amplitudeLevel = .75f * i;
    }

    return amplitudeLevel;
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
    Filter();

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

Filter::Filter()
{
    cutoffFreq = 20000;
    resonance = 10;
    filterType = 'N';
    envAmount = 50;
    wet = 127;
}

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
    cutoffFreq = startFreq;

    for(float f = 0.0f; f < sweepTimeInMillis; f += 0.5f)
    {
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
    Amplifier();

    float driveLevel;
    int toneLevel;
    int waveshaperType;
    Filter outputFilter;
    float outputLevel;

    void divideSignalBy(float denominator);
    void addDrive(float driveAmount, Filter inputFilter);
    void changeWaveshaperMode(int nextMode);
};

Amplifier::Amplifier()
{
    driveLevel = 1.f;
    toneLevel = 50;
    waveshaperType = 0;

    outputFilter.cutoffFreq = 10000;
    outputFilter.resonance = 3;
    outputFilter.filterType = 'L';
    outputFilter.envAmount = 90;
    outputFilter.wet = 33;
    
    outputLevel = 0.f;
}

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
    Delay();

    int type;
    int delayTimeMs;
    float feedbackLevel;
    float toneLevel;
    int wetBalance;

    void switchInput(char newInput);
    void moveFeedbackPrePost(bool preWet);
    float processInput();
};

Delay::Delay()
{
    type = 0;
    delayTimeMs = 250;
    feedbackLevel = 0.f;
    toneLevel = 50.f;
    wetBalance = 50;
}

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
    Preset();

    std::string presetName;
    char presetCategory;
    int numOfParameters;
    char fileType;
    float fileSize;

    void storePreset(int parameters);
    void loadPreset(std::string whichPreset);
    void renamePreset(std::string newName);
};

Preset::Preset()
{
    presetName = "User_Preset";
    presetCategory = 'U';
    numOfParameters = 10;
    fileType = 'p';
    fileSize = 3.4f;
}

void Preset::storePreset(int parameters)
{
    fileSize += numOfParameters * parameters;
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
    Synthesizer();

    Oscillator osc1;
    Filter lowPass;
    Amplifier tubeAmp;
    Delay pingPong;
    Preset userPreset;

    struct InputBus
    {   
        InputBus();

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
    
    InputBus extIn;

    void makeNote(int noteNum, int velocity, Oscillator thisOsc);
    void storePreset(std::string presetName);
    void modulateInput(InputBus externalInstrument, std::string parameterName);
};

Synthesizer::InputBus::InputBus()
{
    inputLeftGainDb = -60.f;
    inputRightGainDb = -60.f;
    outputLeftSignalDb = -60.f;
    outputRightSignalDb = -60.f;
    isMono = true;
}

Synthesizer::Synthesizer() //I can't use these from the main()...why not?
{
    Oscillator newSynthOsc;
    Filter newSynthFilt;
    Amplifier newSynthAmp;
    Delay newSynthDelay;
    Preset newUserPreset;
}

void Synthesizer::makeNote(int noteNum, int velocity, Oscillator thisOsc)
{
    thisOsc.semitone = noteNum;
    velocity = 200;

}
void Synthesizer::storePreset(std::string presetName)
{
    std::string thisPresetsName = presetName;
}
void Synthesizer::modulateInput(InputBus externalInstrument, std::string parameterName)
{
    externalInstrument.outputLeftSignalDb += 40.5f;
    externalInstrument.outputRightSignalDb += 40.5f;
    parameterName = "sidechain input";
}
void Synthesizer::InputBus::actAsCarrierOscillator(int sourceChannel, std::string targetParam)
{
    sourceChannel = 3;
    targetParam = "ringmod frequency";
}
float Synthesizer::InputBus::sumInputSignalToMono(float sourceChannelSignalL, 
float sourceChannelSignalR, float attenuate)
{
    if(isMono)
    {
        return (sourceChannelSignalL + sourceChannelSignalR) * attenuate;
    }

    return sourceChannelSignalL * attenuate;
}
void Synthesizer::InputBus::readInputSignalStereo(int sourceChannelL, int sourceChannelR, float attenuate)
{
    sourceChannelL *= attenuate;
    sourceChannelR *= attenuate;
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
    Example::main();
    Octopus greatPacificOctopus;
    std::cout <<  greatPacificOctopus.catchAFish(7,22) << std::endl;
    
    Octopus muddyDesertOctopus;
    muddyDesertOctopus.squirtInk(33.33f, 'E');
    std::cout << muddyDesertOctopus.inkAmount <<std::endl;

    Band theCrazyTrain;
    theCrazyTrain.playForAudience( 'X' , 210, false );
    theCrazyTrain.postOnInsta(4, 'h', "std::string postText");

    EspressoMachine truePour;
    truePour.pourCoffee(2);
    truePour.makeSoundWhenDone(72);

    
    Airplane tourismForTots;
    tourismForTots.extendLandingGear(false);
    tourismForTots.changeEnginePower(-10.15f, 3);
    std::cout << tourismForTots.engineHorsePower << std::endl;

    Oscillator bigSaw;
    std::cout << "bigSaw LFO Amnt before: " << bigSaw.lfoAmount << std::endl;
    bigSaw.lfoAmount = bigSaw.outputLFOSignal('F', 25.f);
    std::cout << "bigSaw LFO Amnt after: " << bigSaw.lfoAmount << std::endl;

    Filter highPassButter;
    highPassButter.changeType('H');
    highPassButter.filterSweep(30, 2000, 2.2f);
    std::cout<< "highPassButter Cutoff Freq is: " << highPassButter.cutoffFreq << std::endl;

    Amplifier fatStackMcGee;
    std::cout<< "fatStackMcGee outputFilter's cutoff Freq is: " << fatStackMcGee.outputFilter.cutoffFreq << std::endl;
    fatStackMcGee.addDrive(1.2f, highPassButter);
    std::cout<< "fatStackMcGee outputFilter's cutoff Freq changed to: " << fatStackMcGee.outputFilter.cutoffFreq << std::endl;

    Delay warbledPingPong;
    warbledPingPong.moveFeedbackPrePost(true);
    std::cout << "WarbleDelay's feedback level is: " << warbledPingPong.feedbackLevel << std::endl;


    Preset distorshunPhace;
    distorshunPhace.renamePreset("distorshunPhace");
    distorshunPhace.storePreset(24);
    std::cout << distorshunPhace.presetName << " fileSize is: " << distorshunPhace.fileSize << std::endl;


    Synthesizer octoScreamer;
    octoScreamer.modulateInput(octoScreamer.extIn , "Hoobstank");
    if(octoScreamer.extIn.isMono)
        std::cout << "octoScreamer Input Bus is Mono" << std::endl;
    std::cout << octoScreamer.extIn.sumInputSignalToMono(-6.7f,-12.3f,2.f)  << std::endl;


    std::cout << "good to go!" << std::endl;
}
