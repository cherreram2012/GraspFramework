#pragma once
#ifndef GraspPathRelinking_H
#define GraspPathRelinking_H

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//-----------------------------------------------------------------------------
class GraspPathRelinking
{
	public:
		GraspPathRelinking();
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//-----------------------------------------------------------------------------
class GraspForwardPR : public GraspPathRelinking
{
	public:
		GraspForwardPR();
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//-----------------------------------------------------------------------------
class GraspBackwardPR : public GraspPathRelinking
{
public:
	GraspBackwardPR();
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//-----------------------------------------------------------------------------
class GraspBackForwardPR : public GraspPathRelinking
{
public:
	GraspBackForwardPR();
};

class GraspMixedPR : public GraspPathRelinking
{
public:
	GraspMixedPR();
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//-----------------------------------------------------------------------------
class GraspRandomizedPR : public GraspPathRelinking
{
public:
	GraspRandomizedPR();
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//-----------------------------------------------------------------------------
class GraspTruncatedPR : public GraspPathRelinking
{
public:
	GraspTruncatedPR();
};

//------------------------------------------------------------------------------
//	ClassName: XYZ
//
//  Description: .
//
//  Revision: x/y/2019 
//-----------------------------------------------------------------------------
class GraspExternalPR : public GraspPathRelinking
{
public:
	GraspExternalPR();
};
#endif