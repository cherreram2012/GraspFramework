#include "GraspStopCriterion.h"

GraspStopByIterations::GraspStopByIterations(unsigned long int v)
{
	niterations = v;
}

GraspStopByTarget::GraspStopByTarget(float v)
{
	vtarget = v;
}

GraspStopByTime::GraspStopByTime(float v)
{
	vtime = v;
}

GraspStopByProbability::GraspStopByProbability(float v)
{
	vprobability = v;
}