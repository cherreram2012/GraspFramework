#pragma once
#ifndef GraspBase_H
#define GraspBase_H

#include "GraspCandidate.h"
#include "GraspStatistics.h"
#include "GraspStopCriterion.h"

class GraspStopCriterion;

class GraspProcedureGrasp
{
	//public:
		//typedef void(*Evaluator)(GAPopulation &);

	public:
		GraspProcedureGrasp() {};

		virtual void initialize(unsigned int seed = 0) = 0;
		virtual void step() = 0; 
		virtual void execute() = 0;
		bool done(void);
		GraspProcedureGrasp& operator ++() { step(); return *this; }
		//Evaluator eval;		// population evaluation method

	protected:
		GraspStatistics statistics;
		GraspStopCriterion *terminator;
};

#endif