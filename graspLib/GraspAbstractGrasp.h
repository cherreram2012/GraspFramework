#pragma once
#ifndef GraspBase_H
#define GraspBase_H

#include "GraspTypes.h"
#include "GraspCandidate.h"
#include "GraspStatistics.h"
#include "GraspLocalSearch.h"
#include "GraspNeighborhood.h"
#include "GraspStopCriterion.h"

class GraspAbstractGrasp
{
	public:
		 GraspAbstractGrasp();
		~GraspAbstractGrasp();

		virtual void initialize(GraspUInt seed = 0) = 0;
		virtual void step() = 0; 
		virtual void execute() = 0;

		GraspBool done (void);
		void localsearcher(GraspLocalSearch *ls);
		void terminator (GraspStopCriterion *sc);

		GraspAbstractGrasp& operator ++() { step(); return *this; }
		//Evaluator eval;		// population evaluation method

	protected:
		GraspStatistics stats;
		GraspLocalSearch *lsearch;
		GraspStopCriterion *term;
};

#endif