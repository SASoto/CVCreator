// CVCreator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CVCreator.h"

int main()
{
	cout << "Welcome to CVCreator!" << endl;
	cout << "----------------------" << endl;
	CVCreator user;
	user.Questionnaire();

	cout << "Continue?" << endl;
	string response;
	cin >> response;

    return 0;
}

