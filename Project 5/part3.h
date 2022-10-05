#pragma once
#include <iostream>
#include <list>
using namespace std;

void part3();
bool removeInt(list<int>& in, int val);
void displayFreq(const list<int> in);
void displayInts(const list<int> in);
//only info
void part3Info()
{
	cout << "\n\t3> Application using Vector and/or List container\n\t" << string(100, char(205)) << "\n\t\tA> Add an integer\n\t\tB> Deleter an integer"
		<< "\n\t\tC> Display input integer\n\t\tD> Display frequencies of integers\n\t" << string(100, char(196)) << "\n\t\t0> return\n\t" << string(100, char(205));
}
//main menu
void part3()
{
	list<int> myList;
	system("CLS");
	do
	{

		part3Info();
		switch (inputChar("\n\t\tOption: "))
		{
		case 'a':
		case 'A':
			myList.push_front(inputInteger("\n\n\t\tAdd an integer (0..100): ", 0, 100));
			break;
		case 'b':
		case 'B':
			if (removeInt(myList, inputInteger("\n\n\t\tDelete an integer (0..100): ", 0, 100)))
				cout << "\n\t\tDone...\n";
			else
				cout << "\n\t\tThere is no such a number\n";
			break;
		case 'c':
		case 'C':
			displayInts(myList);
			break;
		case 'd':
		case 'D':
			displayFreq(myList);
			break;
		case '0':
			return;
			break;
		default:
			cout << "Please enter an avaliable option";
			break;
		}
		system("pause");


	} while (true);

}

//pre: a list either filled or empty and an int value
//Post: returns true if found and deleted, else false if not and not deleted.
bool removeInt(list<int>& in, int val)
{
	bool temp = false;
	for (auto itt = in.rbegin(); itt != in.rend(); itt++)
	{
		if (*itt == val)
		{
			temp = true;
			in.remove(val);
			break;
		}
	}
	return temp;
}
//pre: NA
//post: Display all values in list.
void displayInts(const list<int> in)
{
	int temp = 1;
	cout << "\n\t\t\t";
	for (auto it = in.rbegin(); it != in.rend(); it++)
	{
		cout << *it << " ";
		if (temp % 26 == 0)
		{
			cout << "\n\t\t\t";
		}
		temp++;
	}
	cout << endl;
}
//Pre: NA
//Post: Displays frequency of values in the list.
void displayFreq(const list<int> in)
{
	cout << "\n\t\tcontainer:\n";
	if (in.empty())
	{
		cout << "\t\t IT is empty\n";
		return;
	}

	list<int>temp = in;
	temp.sort();
	int repeatedVal = temp.back();
	int counter = 0;
	for (auto it = temp.rbegin(); it != temp.rend(); it++)
	{
		if (*it == repeatedVal)
		{
			counter++;
		}
		else
		{
			cout << "\n\t\t" << repeatedVal << ": " << counter;
			counter = 1;
			repeatedVal = *it;
		}
	}
	cout << "\n\t\t" << repeatedVal << ": " << counter;
	cout << "\n\tDone upside down due to copyright disclaimer legal issues... This is clearly not a copy of an executable\n";
}
