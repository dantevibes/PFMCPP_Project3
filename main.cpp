/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/

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
    1) Pitch
    2) Waveform
    3) Phase
    4) Pitch bend
    5) LFO amount
3 things it can do:
    1) Make signal
    2) Sync with another oscillator
    3) Modulate other parameter
 */

/*
Thing 7) Amplifier
5 properties:
    1) Gain
    2) Tone
    3) Waveshaper type
    4) bass boost
    5) Output
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
Thing 9) Effect
5 properties:
    1) Type
    2) Speed
    3) Feedback
    4) Tone
    5) Wet/Dry
3 things it can do:
    1) Switch inputs
    2) Switch types
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
