#pragma once
#ifndef GraspStatistics_H
#define GraspStatistics_H

#include "GraspTypes.h"

class GraspStatistics
{
	public:
		friend class GraspBasicGrasp;

	public:
		inline GraspULong improves(void) const;
		inline GraspULong iterations (void) const;
		inline GraspFloat best_score (void) const;
		inline GraspFloat	worst_score (void) const;
		inline GraspFloat	average_score(void) const;
		inline GraspFloat	average_best_score(void) const;
		inline GraspDouble time_execution(void) const;

	private:
		GraspULong n_improves;
		GraspULong n_iterations;
		GraspFloat bestscore;
		GraspFloat worstscore;
		GraspFloat sum_best_scores;
		GraspFloat sum_all_scores;
		GraspDouble elapsed_time;
};
#endif