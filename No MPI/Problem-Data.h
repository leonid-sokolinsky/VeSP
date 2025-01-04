/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: VeSP (Vertex Search by Projecting) method (No MPI)
Module: Problem-Data.h (Problem Data)
Prefix: PD
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-Types.h"		// Problem Parameters 
using namespace std;
//========================== Problem variables ====================================
static int PD_m;					// Total number of constraints
static int PD_meq;					// Number of constraints being equations
static int PD_n;					// Space dimension
static int PD_neq;					// Dimension of the subspace of intersection of equation-hyperplanes (PD_n = PD_neq + PD_meq)
static int PD_mneh_u;				// Number of inequality-hyperplanes that include point u
static int PD_mne_p;				// Number of inequality-hyperplanes used for pseudoprojection
static int PD_flatDim;				// Current flat dimension
static int PD_iterNo;				// Number of iterations
//========================== Problem structures ====================================
static PT_matrix_T PD_A;			// Matrix of constraint coefficients
static bool PD_isEquation[PP_MM];	// Constraint is equation
static PT_column_T PD_b;			// Column of the constant terms of the system Ax <= PD_b
static PT_vector_T PD_c;			// Objective Function Coefficients
static PT_vector_T PD_u;		// Current approximation
static PT_vector_T PD_hi;			// Higher bound
static PT_vector_T PD_lo;			// Lower bound
static PT_column_T PD_norm_a;		// Column of norms of matrix rows
static PT_vector_T PD_objVector;	// Used for pseudoprojecting
static int PD_neHyperplanes_u[PP_MM];			// Index of inequality-hyperplanes that include point u
static int PD_alHyperplanes_p[PP_N - 1];		// Index of all hyperplanes used for pseudoprojection
static int PD_projectionHyperplanesList[PP_N - 1];	// Randomized index of all hyperplanes used for pseudoprojection
//========================== Input/Output ====================================
static string PD_problemName;