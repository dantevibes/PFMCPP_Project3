/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to your types. 
 
 2) use while() or for() loops to do something interesting inside these new member functions.
         a) for example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
#include <cmath>
namespace Example 
{
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //3), 4c) 
    {
        Bar bar(startingVal);                //4a)
        while( bar.num < threshold )         //4a) 
        { 
            bar.num += 1;                    //4a)
            
            if( bar.num >= threshold )       //4b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //5) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //6) 
    return 0;
}
}

//call Example::main() in main()






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
    float huntForFood(int howHungry);
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
    std::cout << "Ink amount before squirt: " << inkAmount <<std::endl;
    
    inkAmount -= inkSize;
    escapeDirection = 'W';

    std::cout << "Ink amount after squirt: " << inkAmount <<std::endl;
}

float Octopus::huntForFood(int howHungry)
{
    for(int i = 0 ; i < howHungry ; ++i )
    {
        size = (catchAFish(i, i)) ? size + 2.2f : size - 1.1f ;
        if(size < 0.f)
        {
            std::cout << "Octopus has died" << std::endl;
            return 0.f;
        } 
    }
    return size;
}



struct Band
{
    Band();

    int numOfMembers;
    char genre;
    int albumsSold;
    double budget;
    int numOfSongs;

    void performanceStunt(int crowdSize, bool countOff);
    std::string nameASong(std::string word1, std::string word2);
    void postOnInsta(int numOfPics, char filter, std::string postText);
    double goOnTour(int numOfDestinations, double audience, bool isGrowing);
};

Band::Band()
{
    numOfMembers = 4;
    genre = 'I';
    albumsSold = 0;
    budget = 200.0;
    numOfSongs = 3;
}

void Band::performanceStunt(int crowdSize, bool pyrotechnics)
{
    std::cout << "budget before stunt: $" << budget << std::endl;
    
    if(pyrotechnics)
    {
        if(crowdSize > 5000)
        {
            budget *= 101.5;
            albumsSold += 2000;
        }
        else
        {
            budget *= .43;
            albumsSold += 200;
        }
    }
    std::cout << "budget after stunt: $" << budget << std::endl;
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
    std::cout << "Insta text: " << postText << std::endl;
}

double Band::goOnTour(int numOfDestinations, double audience, bool isGrowing)
{
    numOfSongs = 15;
    budget = 5000.0;
    for(int i = 0 ; i < numOfDestinations ; ++i )
    {
        audience = (isGrowing) ? audience * 2.22 : audience / 2.22;
        albumsSold += audience/5;
        budget += audience;
        budget -= 1000.0;
    }
    return budget;
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
    std::cout << "Water level before pour: " << cupsOfWater << std::endl;
    for(int i = 0; i < pourTime ; i++) 
        cupsOfWater -= 1;
    std::cout << "Water level after pour: "  << cupsOfWater << std::endl;
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
    //For(i ; i < target horsepower ; ++i) {add horsepower}

    std::cout << "Engine power of engine " << whichEngine << " before: " << engineHorsePower << std::endl;
    engineHorsePower += amountChanged;
    std::cout << "Engine power of engine " << whichEngine << " after: " << engineHorsePower << std::endl;
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
    float phaseIndex;
    float noiseLevel;
    float lfoAmount;

    float outputLFOSignal(char lfoChannel, float amplitudeLevel);
    void syncOscillator(Oscillator oscToSyncTo);
    int nextSamp(int freq, int phase, char whichWave);
    void outputSignal(int frequency, int bufferSize);
};

Oscillator::Oscillator()
{
    semitone  = 0;
    waveform = 'N';
    phaseIndex = 0.f;
    noiseLevel = -100.f;
    lfoAmount = 0.f;
}

float Oscillator::outputLFOSignal(char lfoWave, float amplitudeLevel)
{
    std::cout << "LFO Amnt before: " << lfoAmount << std::endl;

    for(int i = 0; i < 2; ++i )
    {
        waveform = lfoWave;
        amplitudeLevel = .75f * i;
    }

    return amplitudeLevel;
}

void Oscillator::syncOscillator(Oscillator oscToSyncTo)
{
    phaseIndex = oscToSyncTo.phaseIndex;
}

int Oscillator::nextSamp(int freq, int phase, char whichWave)
{
    int sampValue = 0;
    if(whichWave == 'N')
    {
        sampValue = freq * (100 - (phase % 200));
    }
    return sampValue;
}

void Oscillator::outputSignal(int frequency, int bufferSize)
{
    std::cout<< "Value of sample at " ;
    for (int bufferSample = 0; bufferSample < bufferSize; ++bufferSample)
    {
        std::cout<< bufferSample << " = " << nextSamp(frequency, bufferSample, waveform) << ", ";
    }
    std::cout<< "buffer write done" << std::endl;
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
        if(startFreq > endFreq)
        {
            if( cutoffFreq > endFreq ) 
                --cutoffFreq;
        }
        else
        {
            if(cutoffFreq < endFreq) 
                ++cutoffFreq;
        }
        std::cout<< "Cutoff sweep is at " << cutoffFreq <<std::endl;
    } 

    std::cout<< "Cutoff Freq is at " << cutoffFreq << std::endl;
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
    void addFilteredDrive(float driveAmount, Filter inputFilter);
    void changeWaveshaperMode(int nextMode);
    void envelope(int aMils, int dMils, int sCutoff, int rMils);
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

void Amplifier::addFilteredDrive(float driveAmount, Filter inputFilter)
{
    std::cout<< "OutputFilter's cutoff Freq is: " << outputFilter.cutoffFreq << std::endl;

    outputFilter.cutoffFreq = inputFilter.cutoffFreq;
    driveLevel += driveAmount;

    std::cout<< "outputFilter's cutoff Freq changed to: " << outputFilter.cutoffFreq << std::endl;
}

void Amplifier::changeWaveshaperMode(int nextMode)
{
    waveshaperType = nextMode;
}

void Amplifier::envelope(int aMils, int dMils, int sCutoff, int rMils)
{
    outputFilter.cutoffFreq = 0;
    int aDiv = 20000/aMils;
    std::cout<< "aDiv:" << aDiv <<std::endl;
    int dDiv = (20000-sCutoff)/dMils;
    std::cout<< "dDiv:" << dDiv <<std::endl;
    int rDiv = sCutoff/rMils; //problem when rounding to 0...change type
    std::cout<< "rDiv:" << rDiv <<std::endl;

    for( int i = 0 ; i < aMils ; ++i)
        outputFilter.cutoffFreq += aDiv;
    std::cout<< "Amplifier envelope attack complete" << std::endl;
    for( int i = 0 ; i < dMils ; ++i)
        outputFilter.cutoffFreq -= dDiv;
    std::cout<< "Amplifier envelope decay complete" <<std::endl;
    for( int i = 0 ; i < rMils ; ++i)
        outputFilter.cutoffFreq -= rDiv;
    std::cout<< "Amplifier envelope release complete" << std::endl;
    std::cout<< "Amplifier cutoff is at " << outputFilter.cutoffFreq << std::endl;
}




struct Delay
{
    Delay();

    int type;
    int delayTimeMs;
    float feedbackLevel;
    int panLevel;
    int wetBalance;

    void switchInput(char newInput);
    void adjustPanAmount(bool preWet);
    float processInput();
    int numOfFeedbacks(int numOfRepeats);
};

Delay::Delay()
{
    type = 0;
    delayTimeMs = 250;
    feedbackLevel = 1.f;
    panLevel = 63;
    wetBalance = 50;
}

void Delay::switchInput(char newInput)
{
    newInput = 'C';
}

void Delay::adjustPanAmount(bool preWet)
{
    if(preWet)
        ++panLevel;
    else
        --panLevel;

    //std::cout << panLevel << std::endl;
}

float Delay::processInput()
{
    panLevel += wetBalance;
    return panLevel;
}

int Delay::numOfFeedbacks(int numOfRepeats)
{
    float delayLevel = wetBalance;

    for(int i = 0; i < numOfRepeats ; ++i)
    {
        //std::cout<< "repeat at " << i << " is " << delayLevel <<std::endl;
        delayLevel = delayLevel/feedbackLevel;

        if(delayLevel < .01f)
            return i;
    }
    return numOfRepeats;
} 



struct Preset
{
    Preset();

    std::string presetName;
    char presetCategory;
    int numOfParameters;
    char fileType;
    float fileSize;

    void storePreset(std::string newPresetName);
    void loadPreset(std::string whichPreset);
    void renamePreset(std::string newName);
    void addParameter(int numParamsToAdd, char paramType);
};

Preset::Preset()
{
    presetName = "User_Preset";
    presetCategory = 'U';
    numOfParameters = 10;
    fileType = 'p';
    fileSize = 3.4f;
}

void Preset::storePreset(std::string newPresetName)
{
    presetName = newPresetName;
    std::cout << presetName << " preset stored! File size is: " << fileSize << std::endl;
}
void Preset::loadPreset(std::string whichPreset)
{
    presetName = whichPreset;
}
void Preset::renamePreset(std::string newName)
{
    presetName = newName;
}
void Preset::addParameter(int numParamsToAdd, char paramType)
{
    int paramAsciiVal = paramType;
    std::cout<< "Size of param is " << paramAsciiVal <<std::endl;
    
    for(int i = 0 ; i < numParamsToAdd ; ++i)
    {
        ++numOfParameters;
        fileSize += paramAsciiVal;
        std::cout<< "adding params"<<std::endl;
    }
    std::cout<< "done adding params, fileSize is " << fileSize << " for " << numOfParameters << " params" <<std::endl;
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
    void limitSignal(float threshhold);
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

void Synthesizer::limitSignal(float limitThreshhold)
{
    int millisecondsPassed = 0;
    while( millisecondsPassed < 5)
    {
        ++millisecondsPassed;

        for( float i = 0.1f ; i < 1.f ; i += .5f)
        {
            extIn.outputLeftSignalDb += extIn.outputLeftSignalDb * sinf(i);
            extIn.outputRightSignalDb += extIn.outputRightSignalDb * sinf(i);

            std::cout<< "Synthesizer output level is "<< extIn.outputLeftSignalDb + extIn.outputRightSignalDb <<std::endl;

            if(extIn.outputLeftSignalDb + extIn.outputRightSignalDb < limitThreshhold)
                std::cout<<"engage limiter"<<std::endl;
            
        }
    }
    
}

//void Synthesizer::

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

    Octopus muddyDesertOctopus;
    std::cout <<  "muddy Desert Octopus's size after hunting fish is " << muddyDesertOctopus.huntForFood(22) << std::endl;
    
    muddyDesertOctopus.squirtInk(33.33f, 'E');

    Band theCrazyTrain;
    
    theCrazyTrain.postOnInsta(4, 'h', "std::string postText");
    std::cout <<  "Budget after a successful tour: $" << theCrazyTrain.goOnTour( 13, 300, true ) << std::endl;
    std::cout <<  "Albums sold after a successful tour: " << theCrazyTrain.albumsSold << std::endl;

    EspressoMachine truePour;
    truePour.pourCoffee(2);
    truePour.makeSoundWhenDone(72);

    
    Airplane tourismForTots;
    tourismForTots.extendLandingGear(false);
    tourismForTots.
    changeEnginePower(1000.15f, 3);
    tourismForTots.changeEnginePower(-100.15f, 3);


    Oscillator bigSaw;
    bigSaw.semitone = 400;
    bigSaw.outputSignal(bigSaw.semitone, 100);

    Filter highPassButter;
    highPassButter.changeType('H');
    highPassButter.filterSweep(30, 220, 2.2f);

    Amplifier fatStackMcGee;
    fatStackMcGee.addFilteredDrive(1.2f, highPassButter);
    fatStackMcGee.envelope(20, 200, 400, 400);
    

    Delay warbledPingPong;
    warbledPingPong.feedbackLevel = 3.3f;
    std::cout<< "Delay's last repeat is # "<< warbledPingPong.numOfFeedbacks(9)<< std::endl;


    Preset distorshunPhace;
    distorshunPhace.renamePreset("distorshunPhace");
    distorshunPhace.addParameter(3,'H');
    distorshunPhace.storePreset("Boopabip");


    Synthesizer octoScreamer;
    octoScreamer.modulateInput(octoScreamer.extIn , "Hoobstank");
    if(octoScreamer.extIn.isMono)
        std::cout << "octoScreamer Input Bus is Mono" << std::endl;
    std::cout << octoScreamer.extIn.sumInputSignalToMono(-6.7f,-12.3f,2.f)  << std::endl;

    octoScreamer.limitSignal(-600.f);


    std::cout << "good to go!" << std::endl;
}
