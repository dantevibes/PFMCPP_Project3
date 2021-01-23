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
Part1 will be broken up into 5 separate steps
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
struct CarWash
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

/*
Thing 5) Filter
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

/*
Thing 6) Oscillator
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

/*
Thing 8) Preset
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

/*
Thing 9) Delay
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
