#pragma once
#ifndef GraspCandidate_H
#define GraspCandidate_H

class Candidate
{
	public:
		typedef void (*Initializer)	(Candidate &c);
		typedef void (*Repairer) (Candidate &c);
		typedef float (*Evaluator) (Candidate &c);
		typedef Candidate (*LocalSearch) (Candidate &c);
		typedef float(*Comparator)(const Candidate &c1, const Candidate &c2);

	public:
		Candidate (Candidate &c);
		virtual ~Candidate();

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