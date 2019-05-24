#pragma once
#ifndef Grasp1DArrayCandidate_H
#define Grasp1DArrayCandidate_H

#include "GraspArray.h"
#include "GraspCandidate.h"

template <class T>
class Grasp1DArrayCandidate : public GraspCandidate, public GraspArray <T>
{

};
#endif
