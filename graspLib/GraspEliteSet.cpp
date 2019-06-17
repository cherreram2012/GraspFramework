#include <limits>
#include "mt19937ar.h"
#include "GraspEliteSet.h"

GraspEliteSet::GraspEliteSet(void) 
{
	eindex = -1;	
	fworst = 0.0f;
	ganmadiff = 0.0f;
	esize = default_size;
	fbest = std::numeric_limits<float>::infinity();
	earray = new EliteItem[esize];
}

GraspEliteSet::GraspEliteSet(const GraspUShort &size)
{
	eindex = -1;
	fworst = 0.0f;
	ganmadiff = 0.0f;
	esize = size;
	fbest = std::numeric_limits<float>::infinity();
	earray = new EliteItem[esize];
}

GraspEliteSet::GraspEliteSet(const GraspEliteSet &obj)
{
}

GraspEliteSet::~GraspEliteSet(void)
{
	if (earray) delete[]earray;
}

void GraspEliteSet::resect(void)
{
	delete []earray;

	eindex = -1;
	fbest = 0.0f;
	fworst = 0.0f;
	earray = new EliteItem[esize];
}

void GraspEliteSet::size(const GraspUShort &size)
{
	esize = size;
	this->resect();
}

void GraspEliteSet::update(const GraspCandidate &S)
{
}

GraspBool GraspEliteSet::empty(void) const
{
	return eindex == -1;
}

GraspUShort GraspEliteSet::size(void) const
{
}

GraspUShort GraspEliteSet::count(void) const
{
	return (eindex != -1) ? eindex + 1 : 0;
}

GraspCandidate &GraspEliteSet::best(void) const
{
}

GraspCandidate &GraspEliteSet::worst(void) const
{
}

GraspCandidate &GraspEliteSet::rselect(void) const
{
	int i;

	if (eindex == -1) 
		throw std::exception("CEliteSet::rselect(): unable to random select. Elite set is empty.");

	i = genrand_int32() % (eindex + 1);
	return earray[i].S;
}

