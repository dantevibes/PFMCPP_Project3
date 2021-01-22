/*
Project 3 - Part 1a / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps, all on the same branch
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) Look at the picture of the car interior (Part1a pic.jpg).  
    Fill in the blanks below which break this car interior down into sub-objects.

    Several sub-objects are listed below that make up this car's interior.
        you're going to name several things that you'll find on each subobject
        you're going to name several things that each subobject can do.
        If you've seen "Family Feud", we are going to do what they do in that show

        A few blanks are filled in for you already.

Main Object: Car Interior
Sub Object 1: Steering Wheel
    Name 4 things you'll find on the:    Steering Wheel
        1) paddle shifters
        2) 'cruise control' controls
        3) volume controls
        4) call button
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) change the volume
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) Speedometer
        2) engine temperature
        3) fuel guage
        4) Odometer
    Name 3 things you can do with the:   Instrument Cluster
        1) Reset trip mileage
        2) check speed
        3) check fuel level
    
Sub Object 3: Environment Controls
    Name 3 things you'll find on the:    Environment Controls
        1) temperature dial
        2) fan strength
        3) vent control
    Name 3 things you can do with the:   Environment Controls
        1) turn fans on
        2) make air hotter
        3) make air colder

Sub Object 4: Infotainment System
    Name 3 things you'll find on the:    Infotainment System
        1) music menu
        2) call menu
        3) navigation system
    Name 3 things you can do with the:   Infotainment System
        1) get directions to somewhere
        2) pick a track to play
        3) hang up on your boss

Sub Object 5: Seat 
    Name 3 things you'll find on the:    Seat
        1) recliner lever
        2) head rest
        3) seat warmers
    Name 2 things you can do with the:   Seat
        1) adjust recline angle
        2) adjust headrest height



1b)
Object 1: Octopus
    member variables: legs, head, jets, beak, color

    member functions: squirt ink, open clams, change color

Object 2: Band
    member variables: numOfPeople, Guitarist, Drummer, Bassist, Singer

    member functions: play tune, inspire crowd, annoy neighbors

Object 3: Espresso Machine
    member variables: water heater, water tank, espresso cup, portafilter

    member functions: heat water, make coffee, make alert sound

Object 4: Airplane
    member variables: engine, landing gear, left wing, right wing, number of crewmembers, pilot

    member functions: start engine, retract landing gear, accelerate, adjust cabin pressure



1c) 
Main object: Hand
5 sub-objects: Thumb, Finger, Palm, Back of Hand, Wrist

1d)
Sub-obj: Thumb
    member variables: number of joints, length, nail length, is double jointed
Sub-obj: Finger
    member variables: number of joints, length, nail length, nail color
Sub-obj: Palm
    member variables: is smooth, is clammy, x orientation, y orientation, z orientation
Sub-obj: Back of Hand
    member variables: is hard, temperature
Sub-obj: Wrist
    member variables: rotation degree, flex degree
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
    struct Thumb
    {

    };

    struct Finger
    {

    };

    struct Palm
    {

    };

    struct BackOfHand
    {

    };

    struct Wrist
    {

    };


    struct Hand
    {
        
    };

    std::cout << "good to go!" << std::endl;
}
