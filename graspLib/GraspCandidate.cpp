#include "GraspCandidate.h"

GraspCandidate::GraspCandidate(const GraspCandidate &c)
{
}

GraspCandidate::~GraspCandidate()
{
}

void GraspCandidate::initializer(GraspInitializerFunc f)
{
}

void GraspCandidate::repairer(GraspRepairerFunc f)
{
}

void GraspCandidate::evaluator(GraspEvaluatorFunc f)
{
}

void GraspCandidate::comparator(ComparatorFunc f)
{
}

void GraspCandidate::userdata(GraspUserData ud)
{
}

GraspInitializerFunc GraspCandidate::initializer(void) const
{
}

GraspEvaluatorFunc GraspCandidate::evaluator(void) const
{
}

GraspRepairerFunc GraspCandidate::repairer(void) const
{
}

ComparatorFunc GraspCandidate::comparator(void) const
{
}

GraspUserData GraspCandidate::userdata(void) const
{
}
