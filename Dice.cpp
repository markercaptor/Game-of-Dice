//********************************************************************
//Name: Matthew Buehring
//Class: COSC 1436 SP19
//Assignment 7 Problem 1
//Date: March 28, 2019

//********************************************************************
#include "Dice.h"
#include "PairofDice.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;


 Dice::Dice()//default constructor
 {
	 rolVal=0;
 }
void Dice::roll()//randomly generates the value of the die between 1 and 6
{
	rolVal=rand()%6+1;
}