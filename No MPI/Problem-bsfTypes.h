/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: VeSP (Vertex Search by Projecting) method (No MPI)
Module: Problem-bsfTypes.h (Predefined BSF Problem Types)
Prefix: PT_bsf
Author: Leonid B. Sokolinsky
This source code is a part of BSF Skeleton
==============================================================================*/
#pragma once
#include "Problem-Types.h"		// Problem Types 
//=========================== BSF Types =========================
struct PT_bsf_parameter_T {
	PT_vector_T v;			// Point to project
	PT_vector_T u;
	bool reduceFlatDim;
};

struct PT_bsf_mapElem_T {	// Type of map-list elements
	int hyperplaneI;		// Element of PD_projectionHyperplanesList
};

struct PT_bsf_reduceElem_T {	// Type of reduce-list elements for Job 0 (default)	
	PT_vector_T projectingVector;	// Orthogonal projecting vector
#ifdef PP_BIPROJECTION
	int nonZeroCounter;				// Counter of nonzero elements
#else
	double distance;				// Distance to projetion point
#endif // PP_BIPROJECTION
};

struct PT_bsf_reduceElem_T_1 {	// Type of reduce-list elements for Job 1
	// Not used
};

struct PT_bsf_reduceElem_T_2 {	// Type of reduce-list elements for Job 2
	// Not used
};

struct PT_bsf_reduceElem_T_3 {	// Type of reduce-list elements for Job 3
	// Not used
};