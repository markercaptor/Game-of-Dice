//********************************************************************
//Name: Matthew Buehring
//Class: COSC 1436 SP19
//Assignment 7 Problem 1
//Date: March 28, 2019

//********************************************************************
#include "Dice.h"
#include "PairofDice.h"
#include "MyGame.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;



 void PairofDice::rollDice()//rolls the dice
 {
	 diceOne.roll();
	 diceTwo.roll();
 }
 
 int PairofDice::getDice1()//gets value of the dice
 {
	 return diceOne.getRoll();
 }
 
int PairofDice::getDice2()//gets value of the dice
{
	return diceTwo.getRoll();
}

int PairofDice::getTotal()//collects total of the current roll of the die
{
	return diceOne.getRoll()+diceTwo.getRoll();
}


