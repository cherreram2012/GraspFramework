#pragma once
#ifndef GraspCandidate_H
#define GraspCandidate_H

class GraspCandidate
{
	public:
		typedef void (*Initializer)	(GraspCandidate &c);
		typedef void (*Repairer) (GraspCandidate &c);
		typedef float (*Evaluator) (GraspCandidate &c);
		typedef GraspCandidate (*LocalSearch) (GraspCandidate &c);
		typedef float(*Comparator)(const GraspCandidate &c1, const GraspCandidate &c2);

	public:
		GraspCandidate (GraspCandidate &c);
		virtual ~GraspCandidate();

		void initializer (Initializer f);
		void evaluator (Evaluator f);
		void repairer (Repairer f);
		void localsearch (LocalSearch f);
		void comparator (Comparator f);
		
		Initializer initializer (void) const;
		Evaluator evaluator (void) const;
		Repairer repairer (void) const;
		LocalSearch localsearch (void) const;
		Comparator comparator(void) const;

	protected:
		Initializer init;
		Evaluator eval;		// objective function
		Repairer fixer;
		LocalSearch seek;
		Comparator comparer;

};
#endif