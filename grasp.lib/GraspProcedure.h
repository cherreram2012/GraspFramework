#pragma once
#ifndef GraspBase_H
#define GraspBase_H

#include "GraspCandidate.h"
#include "GraspStatistics.h"
#include "GraspStopCriterion.h"

class GraspStopCriterion;

class GraspProcedure
{
	//public:
		//typedef void(*Evaluator)(GAPopulation &);

	public:
		GraspProcedure() {};

		virtual void initialize(unsigned int seed = 0) = 0;
		virtual void step() = 0;
		bool done(void);
		GraspProcedure& operator ++() { step(); return *this; }
		//Evaluator eval;		// population evaluation method

	protected:
		GraspStopCriterion *terminator;
		GraspStatistics statistics;
};

#endif