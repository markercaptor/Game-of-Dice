//********************************************************************
//Name: Matthew Buehring
//Class: COSC 1436 SP19
//Assignment 7 Problem 1
//Date: March 28, 2019

//********************************************************************
#ifndef MYGAME_H
#define MYGAME_H
#include "Dice.h"
#include "PairofDice.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
class MyGame
{
	private:
		PairofDice mydice;//object of class PairofDice
		int user;
		int com;
	public:
		MyGame();
		void play();
};

#endif