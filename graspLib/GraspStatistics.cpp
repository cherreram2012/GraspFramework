#include "GraspStatistics.h"

GraspULong GraspStatistics::improves(void) const
{
	return n_improves; 
}

GraspULong GraspStatistics::iterations(void) const
{
	return n_iterations;
}

GraspFloat GraspStatistics::best_score(void) const
{ 
	return bestscore; 
}

GraspFloat GraspStatistics::worst_score(void) const
{ 
	return worstscore; 
}

GraspFloat GraspStatistics::average_score(void) const 
{ 
	return sum_all_scores / n_iterations; 
}

GraspFloat GraspStatistics::average_best_score(void) const
{ 
	return sum_best_scores / n_improves; 
}

GraspDouble GraspStatistics::time_execution(void) const
{
	return elapsed_time; 
}