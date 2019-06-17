#include "GraspStopCriterion.h"

GraspStopByIterations::GraspStopByIterations(const GraspULong &it)
{
	niter = it;
}

GraspBool GraspStopByIterations::isDone(const GraspStatistics &stats)
{
	return 0;
}

GraspStopByTarget::GraspStopByTarget(const GraspFloat &f)
{
	target = f;
}

GraspBool GraspStopByTarget::isDone(const GraspStatistics &stats)
{
	return 0;
}

GraspStopByTime::GraspStopByTime(const GraspDouble &t)
{
	time = t;
}

GraspBool GraspStopByTime::isDone(const GraspStatistics &stats)
{
	return 0;
}

GraspStopByProbability::GraspStopByProbability(const GraspFloat &p)
{
	prob = p;
}

GraspBool GraspStopByProbability::isDone(const GraspStatistics &stats)
{
	return 0;
}
