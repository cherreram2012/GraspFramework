#include <conio.h>
#include <iostream>
#include "../graspLib/Grasp1DCandidate.h"

using namespace std;

void TestCandidate (void);

int main(void)
{
	cout << "+-----------------------------+"
			 << "| GRASP-Lib Tester project.  |" 
			 << "+-----------------------------+";

	TestCandidate();

	return 0;
}

void TestCandidate(void)
{
	//Grasp1DCandidate<unsigned> c(10);
	Grasp1DCandidate <unsigned> c(10);
}