#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class CVCreator {
	public:
		void Before();
		void After();
		void Questionnaire();
		void CopyTo();
		void AddCustom();

		void setUser(string username) {
			this->name = username;
		}

	private:
		//Company-related
		string who;
		string when;
		string compattr1;
		string compattr2;
		//Subject-related
		string name;
		string attr1;
		string attr2;
		string attr3;
		string aorh1;
		string aorh2;
		string aorh3;
};