#pragma once
#ifndef GraspContinuosGrasp_H
#define GraspContinuosGrasp_H

#include "GraspAbstractGrasp.h"

class GraspContinuosGrasp : public GraspAbstractGrasp
{
	public:
		GraspContinuosGrasp(const GraspCandidate &c, const GraspFloat alfa);
		virtual ~GraspContinuosGrasp();
};

#endif