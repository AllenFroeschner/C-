//*******************************************************
// SampleClassNumDebug.cpp
// Modified Chapter 5 Classifying Numbers Example
// Author: D.S. Malik 
//
// Program: Counts zeros, odds, evens, positive and 
//            negative numbers
// This program counts the number of odd and even numbers.
// The program also counts the number of zeros, which are
//             also positive and even.
// The program asks for 20 numbers with 99999 as early exit
//
//   Modifications added were:
//      1) Make sure user can see results 
//      2) Add Appropriate Header information about program 
//      3) Create and Display appropriate program intro 
//      4) Improve input and display back of numbers
//      5) Add early exit condition 
//      6) Also Classify Positive and Negative numbers
//     
//   Modified on 3/1/2015 by P.M.Betts
//********************************************************

#include <iostream>
#include <iomanip>



const int N = 20;

int main()
{
	//Declare variables
	int counter;    //loop control variable 
	int number;     //variable to store the new number 

	int zeros = 0;                                  //Step 1 
	int odds = 0;                                   //Step 1
	int evens = 0;                                  //Step 1 
	int positives = 0;
	int negatives = 0;
	using namespace std;
	// Display Program Intro telling what the program does.  
	cout << "********************************************************"
		<< "\n*  This is a program that counts integers you enter as *"
		<< "\n*    even, odd or zero   and     positve or negative   *"
		<< "\n*  It classifies 20 numbers or use 99999 to exit early *"
		<< "\n********************************************************"
		<< endl;

	// Ask for 20 integers with 99999 as early exit
	cout << "\n\nPlease enter " << N << " integers, "
		<< "positive, negative, or zeros."
		<< "\n\t\t or enter number 99999 to exit early. \n\n"
		<< endl;                               

	cout << "The numbers are:" << endl;
		
		for (int i = 0; i < 20; i++) {
			int numlist[20] = {};	
			cin >> number; 
			numlist[i] = number;
			cout << "\t\t" << numlist[i] << endl;      
	
		  //  Early exit condition:  99999        
			if (number == 99999)
				break;     // Exit loop before 20 numbers 

		   //  Count Postive and Negative Numbers           
			if (number < 0)
				negatives++;
			else
				positives++;

			//  Count Evens, Odds and Zeros           
				  //Step 3c
			switch (number % 2)
			{
			case 0:
				evens++;
				if (number == 0)
					zeros++;
			case 1:
			case -1:
				odds++;
			} //end switch
		} //end for loop 

	cout << endl;

	// Display the results ....  
					  //Step 4
	cout << "There are " << evens << " evens, "
		<< "which includes " << zeros << " zeros."
		<< endl;
	cout << "The number of odd numbers is: " << odds
		<< endl;
	cout << "The number of positive numbers is: " << positives
		<< endl;
	cout << "The number of negative numbers is: " << negatives
		<< endl;

	// Use Holdscreen to make sure the results are visible ....     
	char holdscr;     // This character and section is to hold screen open
	cout << "\n\n\tPress a character and Enter to exit program. ";
	cin >> holdscr;

	return 0;
}
