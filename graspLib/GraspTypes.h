#pragma once
#ifndef GraspTypes_H
#define GraspTypes_H

typedef bool GraspBool;

typedef short GraspShort;

typedef float GraspFloat;

typedef double GraspDouble;

typedef unsigned int GraspUInt;

typedef unsigned short GraspUShort;

typedef unsigned long int GraspULong;

typedef  void* GraspUserData;
typedef  void (*GraspInitializerFunc)	(GraspCandidate &c, const float &alfa);
//typedef  GraspCandidate &(*GraspInitializerFunc)(const float &alfa);
typedef  void (*GraspRepairerFunc) (GraspCandidate &c);
typedef float (*GraspEvaluatorFunc) (GraspCandidate &c);
typedef float (*ComparatorFunc) (const GraspCandidate &c1, const GraspCandidate &c2);
typedef   int (*GraspNeighborCardFunc) (void);

/*typedef enum _GraspBoolean {
	graspFalse = 0,
	graspTrue
} GraspBool, GraspBoolean;*/

#endif
