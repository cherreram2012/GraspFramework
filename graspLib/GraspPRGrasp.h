#pragma once
#ifndef GraspPRGrasp_H
#define GraspPRGrasp_H

#include "GraspAbstractGrasp.h"

class GraspPRGrasp : public GraspAbstractGrasp
{
	public:
		 GraspPRGrasp(const GraspCandidate &c, const GraspFloat alfa);
		virtual ~GraspPRGrasp(void);
};

#endif