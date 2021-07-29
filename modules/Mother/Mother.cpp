#include "./Mother.h"
#include <bits/stdc++.h>

using namespace std;


Mother::Mother(int age){
	cout << "Mother constructor invoked!" << endl;
	this->age = age;
}

Mother::~Mother(){
	cout << "Mother desructor invoked!" << endl;
}

void Mother::printAge(){
	cout << "Mother's age is: " << this->age << endl;
}

void Mother::sayName(){
	cout << "I am a Roberts!" << endl;
}
