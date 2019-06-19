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
		GraspAbstractGrasp(const GraspCandidate &c, const GraspFloat &_alfa);
		virtual ~GraspAbstractGrasp(void);
		
		virtual void step() = 0; 
		virtual void execute() = 0;
		
		void prepare (GraspUInt _seed = 0);
		void initializer (GraspInitializerFunc f);
		void evaluator(GraspEvaluatorFunc f);
		void repairer (GraspRepairerFunc f);
		void terminator (GraspStopCriterion *sc);
		void localsearcher (GraspLocalSearch *ls);
		void userdata (GraspUserData ud);

		GraspInitializerFunc initializer(void) const;
		GraspEvaluatorFunc evaluator(void) const;
		GraspRepairerFunc repairer(void) const;
		GraspUserData userdata(void) const;
		GraspStopCriterion *terminator(void) const;
		GraspLocalSearch *localsearcher(void) const;
		GraspBool isdone(void);

		GraspAbstractGrasp& operator ++() { step(); return *this; }

	protected:
		GraspUInt seed;
		GraspFloat alfa;
		GraspBool prepared;
		GraspUserData udata;
		GraspStatistics stats;
		GraspInitializerFunc init;
		GraspEvaluatorFunc eval;
		GraspRepairerFunc fixer;
		GraspLocalSearch *lsearch;
		GraspStopCriterion *term;
};

#endif