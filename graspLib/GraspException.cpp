#include "GraspException.h"

GraspComponentException::GraspComponentException(const char *msg)
{
}

GraspComponentException::~GraspComponentException(void)
{
}

const char* GraspComponentException::what()
{
	return "My exception happened";
}