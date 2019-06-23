#pragma once
#ifndef GraspDMGrasp_H
#define GraspDMGrasp_H

#include "GraspAbstractGrasp.h"

class GraspDMGrasp : public GraspAbstractGrasp
{
	public:
		GraspDMGrasp(const GraspCandidate &c, const GraspFloat alfa);
		virtual ~GraspDMGrasp(void);
};

#endif