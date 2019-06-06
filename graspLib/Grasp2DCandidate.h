#pragma once
#ifndef Grasp2DCandidate_H
#define Grasp2DCandidate_H

#include "GraspArray.h"
#include "GraspCandidate.h"

template <class T>
class Grasp2DCandidate : public GraspCandidate, public GraspArray <T>
{

};
#endif
