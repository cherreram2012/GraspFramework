#include <limits>
#include "GraspLocalSearch.h"

void GraspFirstImproving::execute(void)
{
	int card, last;
	float f, fprime;
	bool improved;
	//CSchedule S, Sprime;

	//S = entry;
	//Neighborhood->SetEntryPoint(S);

	last = -1;
	improved = true;
	while (improved)
	{
		improved = false;
		for (int i = 0; i < card && improved == false; i++)
		{
			if (i != last)
			{
				// run a neighbor evaluation .

				// updating to best neighbor  f(S') < f(S)
				if (fprime < f)
				{
					//S = Sprime;
					f = fprime;
					improved = true;
					//Neighborhood->SetEntryPoint(S);
					last = i;
					i = 0;
				}
			}
		}
	}

	//if (fo) *fo = f;
	//return S;
}

void GraspBestImproving::execute(void)
{
	int card;
	float f, fprime, fbest;
	bool improved;
	//CSchedule S, Sprime, Sbest;

	//S = entry;
	//Neighborhood->SetEntryPoint(S);
	//card = Neighborhood->Cardinality();

	
	improved = true;
	while (improved)
	{
		improved = false;
		fbest = std::numeric_limits<float>::infinity();
		for (int i = 0; i < card; i++)
		{
			// run a neighbor evaluation.
			//Sprime = Neighborhood->VisitNeighbor(i);
			
			// updating to best neighbor  f(S') < f(S)
			if (fprime < fbest)
			{
				//Sbest = Sprime;
				fbest = fprime;
			}
		}

		if (fbest < f)
		{
			//S = Sbest;
			f = fbest;
			improved = true;
			//Neighborhood->SetEntryPoint(S);
		}
	}

	//if (fo) *fo = f;
	//return S;
}