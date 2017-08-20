#include "stdafx.h"
#include "CVCreator.h"

void CVCreator::Questionnaire() {
	cout << "Who is writing this letter? ";
	string name;
	cin >> name;
	this->setUser(name);

	cout << "What skill/attribute do you want your reader(s) to know about you (e.g. quick-learner, hard worker, etc.)?" << endl;
	string attr1, attr2, attr3;
	cin >> attr1;
	this->attr1 = attr1;
	cout << "Any other skill/attribute?" << endl;
	cin >> attr2;
	this->attr2 = attr2;
	cout << "And a final (third) skill/attribute?" << endl;
	this->attr3 = attr3;
	


}

void CVCreator::AddCustom() {
	cout << "What would you like to add to your cover letter?" << endl;
	cout << "Type away anything you would like to include in your cover letter (just don't press enter until you are finished)."
}

void CVCreator::CopyTo() {

}