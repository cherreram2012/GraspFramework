#pragma once
#ifndef GraspEliteSet_H
#define GraspEliteSet_H

#include "GraspTypes.h"
#include "GraspCandidate.h"

class GraspEliteSet
{
	public:
		 GraspEliteSet (void);
		 GraspEliteSet (const GraspUShort &size);
		 GraspEliteSet (const GraspEliteSet &obj);
		~GraspEliteSet (void);

		void resect (void);
		void size (const GraspUShort &size);
		void update (const GraspCandidate &S);

		GraspBool empty (void) const;
		GraspUShort size (void) const;
		GraspUShort count (void) const;
		GraspCandidate &best (void) const;
		GraspCandidate &worst (void) const;
		GraspCandidate &rselect (void) const;
		
	private:
		const GraspUShort default_size = 15;

	private:
		typedef struct Item {
			GraspFloat f;
			//GraspCandidate S;
		} EliteItem;

	private:
		GraspFloat fbest;
		GraspFloat fworst;
		GraspFloat ganmadiff;
		GraspUShort eindex;
		GraspUShort esize;
		//GraspCandidate sbest;
		//GraspCandidate sworst;
		EliteItem *earray;
};

#endif