#pragma once
#ifndef GraspStatistics_H
#define GraspStatistics_H

class GraspStatistics
{
	public:
		unsigned long int iterations() const;

	private:
		unsigned long int niterations;
		float currenttime;
		float elapsedtime;
};
#endif