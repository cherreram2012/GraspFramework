#include "GraspCandidate.h"

GraspCandidate::GraspCandidate(const GraspCandidate &c)
{
	evaluated = false;
	init = nullptr;
	eval = nullptr;
	fixer = nullptr;
	udata = nullptr;
	comp = nullptr;
}

GraspCandidate::~GraspCandidate()
{
}

void GraspCandidate::initializer(GraspInitializerFunc f)
{
	init = f;
}

void GraspCandidate::repairer(GraspRepairerFunc f)
{
	fixer = f;
}

void GraspCandidate::evaluator(GraspEvaluatorFunc f)
{
	eval = f;	
}

void GraspCandidate::comparator(ComparatorFunc f)
{
	comp = f;	
}

void GraspCandidate::userdata(GraspUserData ud)
{
	udata = ud;
}

GraspInitializerFunc GraspCandidate::initializer(void) const
{
	return init;
}

GraspEvaluatorFunc GraspCandidate::evaluator(void) const
{
	return eval;
}

GraspRepairerFunc GraspCandidate::repairer(void) const
{
	return fixer;
}

ComparatorFunc GraspCandidate::comparator(void) const
{
	return comp;
}

GraspUserData GraspCandidate::userdata(void) const
{
	return udata;
}
