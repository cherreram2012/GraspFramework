#pragma once
#ifndef Grasp1DCandidate_H
#define Grasp1DCandidate_H

#include "GraspArray.h"
#include "GraspCandidate.h"

template <class T>
class Grasp1DCandidate : public GraspCandidate, public GraspArray <T>
{
	public:
		Grasp1DCandidate<T>();
};
#endif
