#pragma once
#ifndef GraspLocalSearch_H
#define GraspLocalSearch_H

class CLocalSearchStrategy
{
	protected:


	public:
		CLocalSearchStrategy(void);
		virtual ~CLocalSearchStrategy(void);

		virtual void Execute(void) = 0;
		
		//void NeighborStrategy(CNeighborhoobStrategy *neighbors);
};

class CFirstImprovingSearch : public CLocalSearchStrategy {
public:
	//--- Constructor and destructor ---//
	CFirstImprovingSearch(void);
	~CFirstImprovingSearch(void);

	virtual void Execute (void);
};

class CBestImprovingSearch : public CLocalSearchStrategy {
public:
	CBestImprovingSearch(void);
	~CBestImprovingSearch(void);

	virtual void Execute(void);
};

//------------------------------------------------------------------------------
//	ClassName: BestImprovingSearch
//
//  Description: .
//
//  Revision: 16/05/2019 
//------------------------------------------------------------------------------
class CVariableDescentSearch : public CLocalSearchStrategy {
public:

	CVariableDescentSearch(void);
	~CVariableDescentSearch(void);

	virtual void Execute(void);
};
#endif