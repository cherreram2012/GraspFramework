#pragma once
#ifndef GraspBasicGrasp_H
#define GraspBasicGrasp_H

#include "GraspAbstractGrasp.h"

/// <summary>
/// 
/// </summary>
class GraspBasicGrasp : public GraspAbstractGrasp
{
	public:
		/// <summary>
		/// 
		/// </summary>
		/// <param name="c"></param>
		/// <param name="alfa"></param>
		GraspBasicGrasp(const GraspCandidate &c, const GraspFloat alfa);

		/// <summary>
		/// Destructor.
		/// </summary>
		virtual ~GraspBasicGrasp(void);
};

#endif
