//********************************************************************
//Name: Matthew Buehring
//Class: COSC 1436 SP19
//Assignment 7 Problem 1
//Date: March 28, 2019
//Program description: This program allows the user to play a game of dice against the computer.
//********************************************************************
#include "Dice.h"
#include "PairofDice.h"
#include "MyGame.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

MyGame::MyGame() //default constructor
{
	user=0;
	com=0;
	
}
void MyGame:: play()
{

	
	char x;
	cout<<"Welcome to the game."<<endl;
	cout<<"Your goal is to get to 100 points before you opponent."<<endl;
	cout<<"You will roll first."<<endl;
	//mydice.rollDice();

	do
	{
		
		
		
		
			while(user < 100)//checks to make sure the user score has not reached the winning number
			{	
				mydice.rollDice();
				cout<<"Here is your Roll: "<<mydice.getDice1()<< " and "<< mydice.getDice2()<<endl;
				user = user+mydice.getTotal();//hold running total of user score
				if(mydice.getDice1() + mydice.getDice2() == 2)
				{
					
					user =0;
					cout<<"Your current total is: "<<user<<endl;
					cout<<endl;
					break;
				}
				if(mydice.getDice1() == 1 || mydice.getDice2() == 1)
					{
						
						cout<<"Your current total is: "<<user<<endl;
						cout<<endl;
						break;
					} 
					else
					{
						
						cout<<"Your current total is: "<<user<<endl;
						
					}
				cout<<"Would you like to hold? (y/n): ";
				cin>>x;
				cout<<endl;
				if(x == 'n' || x ==  'N')//validation from user
				{
					//cout<<"Here is your next Roll: "<<mydice.getDice1()<< " and "<< mydice.getDice2()<<endl;
					
					
				}
				else if(x == 'y' || x == 'Y')
				{
					cout<<endl;
					break;
				}
				
				if(user >= 100)
				{
					cout<<"You Win!"<<endl;
					break;
				}
				
				
			}
			if(user >= 100)
			{
				cout<<"You Win!"<<endl;
				break;
			}
		cout<<"It is now your opponents turn."<<endl;
		
			int calc = 0;
		
		while(com < 100)// checks to make sure the opponent has not reached the winning number
		{
			
			mydice.rollDice();//rolls dice
			com = com+mydice.getTotal();//contains running total of score
			calc = calc+mydice.getTotal();//tracks to make sure the opponent holds at 20
			cout<<"Their roll: "<<mydice.getDice1()<< " and " <<mydice.getDice2()<<endl;
			
			if(mydice.getDice1() == 1 && mydice.getDice2() == 1)
				{
					
					com=0;
					cout<<"Your opponents total is: "<<com<<endl;
					cout<<endl;
					break;
					
					
				}
				else if(mydice.getDice1() == 1 || mydice.getDice2() == 1)
				{
					//cout<<"Their roll: "<<mydice.getDice1()<< " and " <<mydice.getDice2()<<endl;
					
					cout<<"Your opponents total is: "<<com<<endl;
					cout<<endl;
					break;
					
				}
				else
				{
					//cout<<"Their roll: "<<mydice.getDice1()<< " and " <<mydice.getDice2()<<endl;
					
					cout<<"Your opponents total is: "<<com<<endl;
				}
				cout<<endl;
				
			if(calc >= 20)
			{
				cout<<"Your opponent holds"<<endl;
				cout<<endl;
				break;
			}				
			if(com >= 100)
			{
				cout<<"Your opponent defeated you."<<endl;
				break;
			}
		}
		
		
		

	}while(user<100 && com<100);
	
		

}

