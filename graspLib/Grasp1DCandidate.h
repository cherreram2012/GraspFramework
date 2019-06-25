#pragma once
#ifndef Grasp1DCandidate_H
#define Grasp1DCandidate_H

#include "GraspTypes.h"
#include "GraspArray.h"
#include "GraspCandidate.h"

template <class T>
class Grasp1DCandidate : public GraspCandidate, public GraspArray <T>
{
	public:
		Grasp1DCandidate(const GraspUInt &sz) : GraspArray<T>(sz) { int a = 0; };
		virtual ~Grasp1DCandidate(void) {};
};
#endif
