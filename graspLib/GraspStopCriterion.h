#pragma once
#ifndef GraspStopCriterion_H
#define GraspStopCriterion_H

#include "GraspTypes.h"
#include "GraspStatistics.h"

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//------------------------------------------------------------------------------
class GraspStopCriterion
{
	public:
		virtual GraspBool isdone(const GraspStatistics &stats) = 0;

	protected:
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//------------------------------------------------------------------------------
class GraspStopByIterations : public GraspStopCriterion
{
	public:
		 GraspStopByIterations (const GraspULong &it);
		 ~GraspStopByIterations(void) {};
		virtual GraspBool isdone (const GraspStatistics &stats);

	private:
		GraspULong niter;
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//------------------------------------------------------------------------------
class GraspStopByTarget : public GraspStopCriterion
{
	public:
		 GraspStopByTarget (const GraspFloat &f);
		~GraspStopByTarget (void) {};
		virtual GraspBool isdone(const GraspStatistics &stats);

	private:
		GraspFloat target;
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//------------------------------------------------------------------------------
class GraspStopByTime : public GraspStopCriterion
{
	public:
		 GraspStopByTime (const GraspDouble &t);
		~GraspStopByTime (void) {};
		virtual GraspBool isdone(const GraspStatistics &stats);

	private:
		GraspDouble time;
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//------------------------------------------------------------------------------
class GraspStopByProbability : public GraspStopCriterion
{
	public:
		 GraspStopByProbability (const GraspFloat &p);
		~GraspStopByProbability (void) {};
		virtual GraspBool isdone(const GraspStatistics &stats);

	private:
		GraspFloat prob;
};
#endif