// Project 5.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Name:         !!!!!Remember to put your name on your uploading zip file here!!!!!
//Date:
//Description:


//#include <iostream>
#include "list.h"
#include "vectorContain.h"
#include "part3.h"

using namespace std;

void mainInfo();

int main()
{
	do
	{
		mainInfo();
		switch (inputInteger("\n\t\tOption: "))
		{
		case 1:
		{
			vectorContain V1;	V1.vectorMain();
		}
			break;
		case 2:
			runLinkedList();
			break;
		case 3:
			part3();
			break;
		case 0:
			return EXIT_SUCCESS;
			break;
		default:
			
			break;
		}
		//system("pause");
		system("CLS");
	} while (true);
	return 0;
}

void mainInfo()
{
	cout << "\n\tCMPR131 Chapter 5: Vector and List Container by:\n\t Victor Huerta, Arturo Sanchez, Tien Nguyen, Bryan Soto Alejandro Mamani (10/5/2022)\n\t";
	cout << string(100, char(205));
	cout << "\n\t\t1> Vector container\n\t\t2> List container\n\t\t3> Application using Vector and/or List container\n\t";
	cout << string(100, char(196));
	cout << "\n\t\t0> Exit\n\t" << string(100, char(205));
}



