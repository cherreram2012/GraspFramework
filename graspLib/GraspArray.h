#pragma once
#ifndef GraspArray_H
#define GraspArray_H

template <class T>
class GraspArray {
	public:
		virtual ~GraspArray();

		void size (unsigned int n);
		void swap (unsigned int i, unsigned int j);
		int equal (const GraspArray<T> &A) const;

		int size() const;

	protected:
		T *items;
};

#endif