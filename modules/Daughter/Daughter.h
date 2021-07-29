#include "../Mother/Mother.h"

#ifndef DAUGHTER_H
#define DAUGHTER_H

class Daughter : public Mother{
	int age;

	public:
		Daughter(int);
		~Daughter();
		void printAge();
};

#endif