#pragma once
#ifndef GraspReactiveGrasp_H
#define GraspReactiveGrasp_H

#include "GraspAbstractGrasp.h"

class GraspReactiveGrasp : public GraspAbstractGrasp
{
	public:
		GraspReactiveGrasp(const GraspCandidate &c, const GraspFloat alfa);
		virtual ~GraspReactiveGrasp(void);
};

#endif