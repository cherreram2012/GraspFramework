#pragma once
#ifndef GraspCandidate_H
#define GraspCandidate_H

#include "GraspTypes.h"

class GraspCandidate
{
	public:
		GraspCandidate (const GraspCandidate &c);
		virtual ~GraspCandidate();

		void initializer (Initializer f);
		void repairer (Repairer f);
		void evaluator (Evaluator f);
		void comparator (Comparator f);
		void userdata (UserData ud);

		Initializer initializer (void) const;
		Evaluator evaluator (void) const;
		Repairer repairer (void) const;
		Comparator comparator(void) const;
		UserData userdata (void) const;

	protected:
		Initializer init;
		Evaluator eval;		// objective function
		Repairer fixer;
		UserData udata;
		Comparator comparer;

};
#endif