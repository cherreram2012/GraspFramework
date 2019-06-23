#pragma once
#ifndef GraspEvPRGrasp_H
#define GraspEvPRGrasp_H

#include "GraspAbstractGrasp.h"

class GraspEvPRGrasp : public GraspAbstractGrasp
{
	public:
		GraspEvPRGrasp(const GraspCandidate &c, const GraspFloat alfa);
		virtual ~GraspEvPRGrasp(void);
};

#endif