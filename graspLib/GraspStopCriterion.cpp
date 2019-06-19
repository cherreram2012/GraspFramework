#include "GraspStopCriterion.h"

GraspStopByIterations::GraspStopByIterations(const GraspULong &it)
{
	niter = it;
}

GraspBool GraspStopByIterations::isdone(const GraspStatistics &stats)
{
	return 0;
}

GraspStopByTarget::GraspStopByTarget(const GraspFloat &f)
{
	target = f;
}

GraspBool GraspStopByTarget::isdone(const GraspStatistics &stats)
{
	return 0;
}

GraspStopByTime::GraspStopByTime(const GraspDouble &t)
{
	time = t;
}

GraspBool GraspStopByTime::isdone(const GraspStatistics &stats)
{
	return 0;
}

GraspStopByProbability::GraspStopByProbability(const GraspFloat &p)
{
	prob = p;
}

GraspBool GraspStopByProbability::isdone(const GraspStatistics &stats)
{
	return 0;
}
