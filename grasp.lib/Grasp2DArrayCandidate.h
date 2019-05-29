#pragma once
#ifndef Grasp2DArrayCandidate_H
#define Grasp2DArrayCandidate_H

#include "GraspArray.h"
#include "GraspCandidate.h"

template <class T>
class Grasp2DArrayCandidate : public GraspCandidate, public GraspArray <T>
{

};
#endif
