#pragma once
#ifndef GraspException_H
#define GraspException_H

#include <exception>

using namespace std;

/*class GraspException : public exception
{
	virtual const char* what(void) = 0;
};*/

//class GraspComponentException : public GraspException
class GraspComponentException : public exception
{
	 GraspComponentException (const char *msg);
	~GraspComponentException (void);

	//virtual const char* what (void);
};

#endif
