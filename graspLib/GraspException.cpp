#include "GraspException.h"

GraspComponentException::GraspComponentException(const char *msg)
	:exception(msg)
{
}

GraspComponentException::~GraspComponentException(void)
{
}

/*const char* GraspComponentException::what()
{
	return Mess;
}*/