#include <bits/stdc++.h>
#include "./modules/Mother/Mother.h"
#include "./modules/Daughter/Daughter.h"

using namespace std;


int main(){
	Mother mom(23);
	Daughter d(25);
	cout << "Size of mother: " << sizeof(mom) << endl;
	cout << "Size of mother class: " << sizeof(Mother) << endl;
	cout << "Size of daughter: " << sizeof(d) << endl;
	cout << "Size of daughter class: " << sizeof(Daughter) << endl;
	Mother *m1 = &d;
	Mother *m2 = &mom;
	m1->printAge();
	cout << endl << " === " << endl;
	m2->printAge();
	return 0;
}
