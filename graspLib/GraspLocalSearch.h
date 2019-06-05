#pragma once
#ifndef GraspLocalSearch_H
#define GraspLocalSearch_H

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//------------------------------------------------------------------------------
class GraspLocalSearch
{
	protected:


	public:
		GraspLocalSearch(void);
		virtual ~GraspLocalSearch(void);

		virtual void execute(void) = 0;
		
		//void NeighborStrategy(CNeighborhoobStrategy *neighbors);
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//------------------------------------------------------------------------------
class GraspFirstImproving : public GraspLocalSearch {
public:
	//--- Constructor and destructor ---//
	 GraspFirstImproving(void);
	~GraspFirstImproving(void);

	virtual void execute (void);
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//------------------------------------------------------------------------------
class GraspBestImproving : public GraspLocalSearch {
public:
	GraspBestImproving(void);
	~GraspBestImproving(void);

	virtual void execute(void);
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//------------------------------------------------------------------------------
class GraspVariableDescent : public GraspLocalSearch {
public:

	GraspVariableDescent(void);
	~GraspVariableDescent(void);

	virtual void execute(void);
};
#endif