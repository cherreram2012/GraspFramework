#pragma once
#ifndef GraspCandidate_H
#define GraspCandidate_H

#include "GraspTypes.h"

class GraspCandidate
{
	public:
		GraspCandidate(void) {}
		GraspCandidate (const GraspCandidate &c);
		virtual ~GraspCandidate();

		//void initialize (const);
		void initializer (GraspInitializerFunc f);
		void evaluator (GraspEvaluatorFunc f);
		void repairer (GraspRepairerFunc f);
		void comparator (ComparatorFunc f);
		void userdata (GraspUserData ud);

		GraspInitializerFunc initializer (void) const;
		GraspEvaluatorFunc evaluator (void) const;
		GraspRepairerFunc repairer (void) const;
		ComparatorFunc comparator(void) const;
		GraspUserData userdata (void) const;

	protected:
		GraspInitializerFunc init;
		GraspEvaluatorFunc eval;		// objective function
		GraspRepairerFunc fixer;
		ComparatorFunc comp;
		GraspUserData udata;
		GraspBool evaluated;
};
#endif