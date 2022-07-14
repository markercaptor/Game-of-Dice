//********************************************************************
//Name: Matthew Buehring
//Class: COSC 1436 SP19
//Assignment 7 Problem 1
//Date: March 28, 2019

//********************************************************************
#ifndef PAIROFDICE_H
#define PAIROFDICE_H
#include "Dice.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class PairofDice
{
	private:
			 Dice diceOne;
			 Dice diceTwo;//objects of class dice
			int Total;
			
	public:
			 PairofDice()//default constructor
			 {diceOne,diceTwo;}
            void rollDice();//roll of the die
			//void setTotal(int totaled)
			//{Total = totaled;}
			int getTotal();//gets the total of the game
			int getDice1();
			int getDice2();//gets values of the die
			
};

#endif