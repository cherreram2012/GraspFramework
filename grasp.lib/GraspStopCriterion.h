#pragma once
#ifndef GraspStopCriterion_H
#define GraspStopCriterion_H

#include "GraspTypes.h"
#include "GraspProcedure.h"

class GraspProcedure;

class GraspStopCriterion
{
	protected:
		typedef GraspBoolean (*Terminator) (GraspProcedure &gb);

	protected:
		Terminator cstop;
};

class GraspStopByIterations : public GraspStopCriterion
{
	public:
		GraspStopByIterations (unsigned long int v);

	private:
		unsigned long int niterations;
};

class GraspStopByTarget : public GraspStopCriterion
{
	public:
		GraspStopByTarget (float v);

	private:
		float vtarget;
};

class GraspStopByTime : public GraspStopCriterion
{
	public:
		GraspStopByTime (float v);

	private:
		float vtime;
};

class GraspStopByProbability : public GraspStopCriterion
{
	public:
		GraspStopByProbability (float v);

	private:
		float vprobability;
};
#endif