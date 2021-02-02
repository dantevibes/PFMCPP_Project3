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

    int numOfArms{8};
    float inkAmount{100.f};
    char color{'R'};
    char shape{'O'};
    float size{5.f};

    bool catchAFish(int whichArm, int distanceToFish);
    void changeColor(char newColor, char thisColor);
    void squirtInk(float inkSize, char escapeDirection);
};

Octopus::Octopus()
{
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

    int numOfMembers = 2;
    char genre = 'i';
    int albumsSold = 0;
    double budget = 1000.0;
    int numOfSongs = 3;

    void playForAudience(char whichSong, int tempo, bool countOff);
    std::string nameASong(std::string word1, std::string word2);
    void postOnInsta(int numOfPics, char filter, std::string postText);
};

Band::Band()
{
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

EspressoMachine::EspressoMachine() : 
    cupsOfWater(8.f), 
    coffeeType('d'),
    waterTempInF(120),
    tbspOfGrounds(3.3f),
    steamerPressure(0)
{}

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

    int numOfCrew{4};
    int numOfPassengers{100};
    int maxCapacity{1500};
    float engineHorsePower{0.f};
    int totalWeightInLbs{50000};

    void extendLandingGear(bool landingGearExtended);
    void changeEnginePower(float amountChanged, int whichEngine);
    bool angleWingsForTakeoff(int wingAngleDegree);
};

Airplane::Airplane(){}

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

    int semitone = 0;
    char waveform = 'N';
    int phaseDegree = 0;
    float noiseLevel = -100.f;
    float lfoAmount = 0.f;

    float outputLFOSignal(char lfoChannel, float amplitudeLevel);
    void syncOscillator(Oscillator oscToSyncTo);
    void outputAsLFO(std::string targetParameter);
};

Oscillator::Oscillator()
{}

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

    int cutoffFreq = 20000;
    int resonance = 10;
    char filterType = 'N';
    int envAmount = 50;
    int wet = 127;

    struct LFO
    {
        float frequency = 1.f;
        int tempoMultiplier = 1;
        int waveform = 0;
        float waveformMorph = 0.5f;
        bool bpmSync = false;

        void changeWaveform(int nextWave);
        void changeTempoMultiplier(int newValue);
        void syncToOscillator(Oscillator syncTo, float warpAmount);
    };

    void changeType(char nextType);
    void switchInput(int newInput);
    void filterSweep(int startFreq, int endFreq, float sweepTimeInMillis);
};

Filter::Filter()
{}

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

    float driveLevel = 1.f;
    int toneLevel = 50;
    int waveshaperType = 0;
    Filter outputFilter;
    float outputLevel = 0.f;

    void divideSignalBy(float denominator);
    void addDrive(float driveAmount, Filter inputFilter);
    void changeWaveshaperMode(int nextMode);
};

Amplifier::Amplifier()
{
    outputFilter.cutoffFreq = 10000;
    outputFilter.resonance = 3;
    outputFilter.filterType = 'L';
    outputFilter.envAmount = 90;
    outputFilter.wet = 33;
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

    int type{0};
    int delayTimeMs{150};
    float feedbackLevel{0.f};
    float toneLevel{50.f};
    int wetBalance{50};

    void switchInput(char newInput);
    void moveFeedbackPrePost(bool preWet);
    float processInput();
};

Delay::Delay()
{}

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

    std::string presetName = "User_Preset";
    char presetCategory = 'U';
    int numOfParameters = 10;
    char fileType = 'p';
    float fileSize = 3.4f;

    void storePreset(int parameters);
    void loadPreset(std::string whichPreset);
    void renamePreset(std::string newName);
};

Preset::Preset()
{}

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

Synthesizer::InputBus::InputBus() :
    inputLeftGainDb(-60.f),
    inputRightGainDb(-60.f),
    outputLeftSignalDb(-60.f),
    outputRightSignalDb(-60.f),
    isMono(true)
{}

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
    CarWash Stans;
    std::cout << Stans.numVacuumCleaners << std::endl;

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
