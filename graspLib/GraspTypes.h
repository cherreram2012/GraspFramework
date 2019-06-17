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

typedef void* UserData;
typedef void (*Initializer)	(GraspCandidate &c);
typedef void (*Repairer) (GraspCandidate &c);
typedef float (*Evaluator) (GraspCandidate &c);
typedef float (*Comparator)(const GraspCandidate &c1, const GraspCandidate &c2);

/*typedef enum _GraspBoolean {
	graspFalse = 0,
	graspTrue
} GraspBool, GraspBoolean;*/

#endif
