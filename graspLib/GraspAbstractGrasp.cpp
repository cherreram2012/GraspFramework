#include "GraspAbstractGrasp.h"

void GraspAbstractGrasp::step()
{
}

GraspAbstractGrasp::GraspAbstractGrasp(const GraspCandidate &c, const GraspFloat &_alfa)
{
	alfa = _alfa;
}

GraspAbstractGrasp::~GraspAbstractGrasp(void)
{
}

void GraspAbstractGrasp::prepare(GraspUInt _seed)
{
	seed = _seed;

	// Aqui se ejecutara comprobacion de los componentes del grasp
	// en caso de error se lanzara un exception
}

void GraspAbstractGrasp::initializer(GraspInitializerFunc f)
{
	init = f;
}

void GraspAbstractGrasp::evaluator(GraspEvaluatorFunc f)
{
	eval = f;
}

void GraspAbstractGrasp::repairer(GraspRepairerFunc f)
{
	fixer = f;
}

void GraspAbstractGrasp::terminator(GraspStopCriterion *sc)
{
	term = sc;	
}

void GraspAbstractGrasp::localsearcher(GraspLocalSearch *ls)
{
	lsearch = ls;
}

void GraspAbstractGrasp::userdata(GraspUserData ud)
{
	udata = ud;	
}

GraspInitializerFunc GraspAbstractGrasp::initializer(void) const
{
	return init;
}

GraspEvaluatorFunc GraspAbstractGrasp::evaluator(void) const
{
	return eval;
}

GraspRepairerFunc GraspAbstractGrasp::repairer(void) const
{
	return fixer;
}

GraspUserData GraspAbstractGrasp::userdata(void) const
{
	return udata;
}

GraspStopCriterion *GraspAbstractGrasp::terminator(void) const
{
	return term;
}

GraspLocalSearch *GraspAbstractGrasp::localsearcher(void) const
{
	return lsearch;
}

GraspBool GraspAbstractGrasp::isdone(void)
{
	return term->isdone(stats);
}
