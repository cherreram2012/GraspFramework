#pragma once
#ifndef GraspStopCriterion_H
#define GraspStopCriterion_H

#include "GraspTypes.h"
#include "GraspStatistics.h"
#include "GraspAbstractGrasp.h"

class GraspAbstractGrasp;

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//------------------------------------------------------------------------------
class GraspStopCriterion
{
	protected:
		virtual bool isDone(const GraspStatistics &stats) = 0;
		//typedef GraspBoolean (*Terminator) (GraspAbstractGrasp &gb);

	protected:
		//Terminator cstop;
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
		GraspStopByIterations (unsigned long int v);

	private:
		unsigned long int niterations;
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
		GraspStopByTarget (float v);

	private:
		float vtarget;
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
		GraspStopByTime (float v);

	private:
		float vtime;
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
		GraspStopByProbability (float v);

	private:
		float vprobability;
};
#endif