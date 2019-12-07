// FunctionsWithFiction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Header.h"
#include <iostream>
using namespace::std;

int main()
{
	int sleep; //Sleep tracks our sleep. 1 is less sleep, and 2 is more.
	int productivity; //productivity tracks our productivity level. Anything above 1 is good

	cout << "\n\n\n\n\n\n\nWelcome to 'To Work or Not to Work'!\n";
	cout << "The Interactive game in which you\n ";
	cout << "choose your own destiny in a life like world.\n\n\n\n";
	system("pause");
	cout << "\n\n\n\n The Story starts here. It is 7pm, and your shift\n";
	cout << "For work starts in 7 hours.\n";
	cout << "What do you choose to do?\n";
	cout << "Your Options are:\n";
	cout << "1: Stay Up and Game\n";
	cout << "2: Go to Sleep\n";
	cout << "(Select a number!)\nMy Choice:";
	cin >> sleep; //Get the first input

	cout << "\n\n\n\n\n\nIt is now 2am, with your alarm clock ringing\n";
	cout << "louder than that of a war drum.\n";
	cout << "What are you going to do?\n";
	cout << "Your Options are:\n";
	cout << "1: Go back Sleep\n";
	cout << "2: Wake up (And get homework done)\n";
	cout << "3: Wake up (And get ready for work)\n";
	cout << "(Select a number!)\nMy Choice:";
	cin >> productivity; //Get the second input
	
	if (productivity == 3)
	{//You Chose to go to work
		if (sleep == 1)
		{//Did not get enough Sleep
			NoSleepWork();
		}
		else if (sleep == 2)
		{//Got all the sleep
			SleepWork();
		}	
	}
	else if (productivity == 2)
	{//Wake up and get Homework Done
		if (sleep == 1)
		{//Did not get enough Sleep
			NoSleepHomework();
		}
		else if (sleep == 2)
		{//Got all the sleep
			SleepHomework();
		}
	}
	else if (productivity == 1)
	{//Sleep in
		if (sleep == 1)
		{// Did not get enough sleep
			NoSleepNoWork();
		}
		else if (sleep == 2)
		{//Got up with the alarm
			SleepNoWork();
		}
	}
	/*Debug Arena
	cout << "And the results are in!\n";
	cout << "Sleep: " << sleep << endl;
	cout << "Productivity: " << productivity << endl;
	*/
}