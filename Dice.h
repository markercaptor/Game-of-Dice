//********************************************************************
//Name: Matthew Buehring
//Class: COSC 1436 SP19
//Assignment 7 Problem 1
//Date: March 28, 2019

//********************************************************************
#ifndef DICE_H
#define DICE_H
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class Dice
{
	private:
			int rolVal;
	
	public:
			Dice();
			void roll();//rolls the individual die
			int getRoll()//gets value for each roll
			{return rolVal;}
			
};



#endif