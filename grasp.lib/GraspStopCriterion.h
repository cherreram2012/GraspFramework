#pragma once
#ifndef GraspStopCriterion_H
#define GraspStopCriterion_H

#include "GraspBase.h"
#include "GraspTypes.h"

class GraspBase;

class GraspStopBase
{
	protected:
		typedef GraspBoolean (*Terminator) (GraspBase &gb);

	protected:
		Terminator cstop;
};

class GraspStopByIterations : public GraspStopBase
{
	public:
		GraspStopByIterations (unsigned long int v);

	private:
		unsigned long int niterations;
};

class GraspStopByTarget : public GraspStopBase
{
	public:
		GraspStopByTarget (float v);

	private:
		float vtarget;
};

class GraspStopByTime : public GraspStopBase
{
	public:
		GraspStopByTime (float v);

	private:
		float vtime;
};

class GraspStopByProbability : public GraspStopBase
{
	public:
		GraspStopByProbability (float v);

	private:
		float vprobability;
};
#endif