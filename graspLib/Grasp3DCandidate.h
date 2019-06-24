#pragma once
#ifndef Grasp3DCandidate_H
#define Grasp3DCandidate_H

#include "GraspArray.h"
#include "GraspCandidate.h"

template <class T>
class Grasp3DCandidate : public GraspCandidate, public GraspArray <T>
{
	public:
		Grasp3DCandidate<T>();
};

#endif