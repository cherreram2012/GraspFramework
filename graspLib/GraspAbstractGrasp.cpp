#include "GraspException.h"
#include "GraspAbstractGrasp.h"


/*void GraspAbstractGrasp::step()
{
}*/

GraspAbstractGrasp::GraspAbstractGrasp(const GraspCandidate &c, const GraspFloat &_alfa)
{
	seed = 0;
	alfa = _alfa;
	term = nullptr;
	lsearch = nullptr;
	prepared = false;
	init = c.initializer();
	eval = c.evaluator();
	fixer = c.repairer();
	udata = c.userdata();
}

GraspAbstractGrasp::~GraspAbstractGrasp(void)
{
}

void GraspAbstractGrasp::prepare(GraspUInt _seed)
{
	seed = _seed;

	// Aqui se ejecutara comprobacion de los componentes del grasp
	// en caso de error se lanzara un exception
	
	// Alfa value check.
	if (alfa < 0 || alfa > 1.0f) throw exception("Alfa parameter just must received values between [0, 1]");

	// Grasp components check.!!!
	if (!init) throw exception("You must define a constructive component.");
	if (!eval) throw exception("You must define a evaluator component.");
	if (!term) throw exception("You must define a stop-criterion component.");
	if (!lsearch) throw exception("You must define a local-search component.");

	prepared = true;
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
