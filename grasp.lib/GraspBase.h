#pragma once
#ifndef GraspBase_H
#define GraspBase_H

#include "GraspCandidate.h"
#include "GraspStatistics.h"
#include "GraspStopCriterion.h"

class GraspStopBase;

class GraspBase
{
	//public:
		//typedef void(*Evaluator)(GAPopulation &);

	public:
		GraspBase() {};

		virtual void initialize(unsigned int seed = 0) = 0;
		virtual void step() = 0;
		bool done(void);
		GraspBase& operator++() { step(); return *this; }
		//Evaluator eval;		// population evaluation method

	protected:
		GraspStopBase *terminator;
		GraspStatistics statistics;
};

#endif