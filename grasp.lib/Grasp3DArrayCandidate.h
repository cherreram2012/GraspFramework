#pragma once
#ifndef Grasp3DArrayCandidate_H
#define Grasp3DArrayCandidate_H

#include "GraspArray.h"
#include "GraspCandidate.h"

template <class T>
class Grasp3DArrayCandidate : public GraspCandidate, public GraspArray <T>
{

};

#endif