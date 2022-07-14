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

int main()
{
	srand(time(NULL));
	MyGame obj;//object of class MyGame
	obj.play();// Function that plays the game
	
	
	
	return 0;
}
