#pragma once
#ifndef GraspArray_H
#define GraspArray_H

#include "GraspTypes.h"

/// <summary>
/// 
/// </summary>
template <class T>
class GraspArray {
	public:
		/*GraspArray(const GraspUInt &sz);
		/*virtual ~GraspArray(void);

		void size (const GraspUInt &n);
		void swap (const GraspUInt &i, const GraspUInt &j);
		GraspBool equal(const GraspArray<T> &A) const;
		GraspBool noequal (const GraspArray<T> &A) const;

		GraspUInt size() const;*/

		GraspArray(const GraspUInt &sz) { 
			items = new T[sz]; 
		}
		
		virtual ~GraspArray(void) {}

		void size(const GraspUInt &n) {}
		void swap(const GraspUInt &i, const GraspUInt &j) {}
		GraspBool equal(const GraspArray<T> &A) const { return false; }
		GraspBool noequal(const GraspArray<T> &A) const { return false; }

		GraspUInt size() const { return 0; }

	protected:
		T *items;
};

template class GraspArray<int>;
#endif