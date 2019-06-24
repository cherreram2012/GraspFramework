#pragma once
#ifndef GraspArray_H
#define GraspArray_H

#include "GraspTypes.h"

template <class T>
class GraspArray {
	public:
		GraspArray(const GraspUInt &size);
		virtual ~GraspArray(void);

		void size (const GraspUInt &n);
		void swap (const GraspUInt &i, const GraspUInt &j);
		GraspUInt equal(const GraspArray<T> &A) const;
		GraspUInt noequal (const GraspArray<T> &A) const;

		GraspUInt size() const;

	protected:
		T *items;
};

#endif