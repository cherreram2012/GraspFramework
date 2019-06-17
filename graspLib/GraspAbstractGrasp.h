#pragma once
#ifndef GraspBase_H
#define GraspBase_H

#include "GraspCandidate.h"
#include "GraspStatistics.h"
#include "GraspLocalSearch.h"
#include "GraspNeighborhood.h"
#include "GraspStopCriterion.h"

class GraspStopCriterion;

class GraspAbstractGrasp
{
	protected:
		GraspLocalSearch *localsearch;

	public:
		GraspAbstractGrasp() {};

		virtual void initialize(unsigned int seed = 0) = 0;
		virtual void step() = 0; 
		virtual void execute() = 0;
		bool done(void);
		GraspAbstractGrasp& operator ++() { step(); return *this; }
		//Evaluator eval;		// population evaluation method

	protected:
		GraspStatistics statistics;
		GraspStopCriterion *terminator;
};

#endif