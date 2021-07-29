#include "../Mother/Mother.h"
#include "Daughter.h"
#include <bits/stdc++.h>

using namespace std;


Daughter::Daughter(int age) : Mother(age) {
	cout << "Daughter constructor invoked!" << endl;
}

Daughter::~Daughter(){
	cout << "Daughter destructor invoked!" << endl;
}

void Daughter::printAge(){
	cout << "Daughter's age is: " << this->age << endl;
}
