#pragma once
#ifndef GraspParallelGrasp_H
#define GraspParallelGrasp_H

#include "GraspAbstractGrasp.h"

/// <summary>
/// 
/// </summary>
class GraspParallelGrasp : public GraspAbstractGrasp
{
	public:
		/// <summary>
		/// 
		/// </summary>
		/// <param name="c"></param>
		/// <param name="alfa"></param>
		GraspParallelGrasp(const GraspCandidate &c, const GraspFloat alfa);

		/// <summary>
		/// Destructor.
		/// </summary>
		virtual ~GraspParallelGrasp(void);
};

#endif