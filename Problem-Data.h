/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: VeSP (Vertex Search by Projecting) method (MPI)
Module: Problem-Data.h (Problem Data)
Prefix: PD
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-Types.h"		// Problem Parameters 
using namespace std;
//========================== Problem variables ====================================
static int PD_m;					// Total number of constraints
static int PD_meq_total;			// Number of total constraints being equations
static int PD_meq;					// Number of [basic] constraints being equations
static int PD_n;					// Space dimension
static int PD_supportSubspaceDim;	// Dimension of of support subspace (PD_n = PD_supportSubspaceDim + PD_meq)
static int PD_malh_u;				// Number of all hyperplanes that include point u
static int PD_flatDim;				// Current flat dimension
static int PD_iterNo;				// Number of iterations
#ifdef PP_DEBUG
static int PD_projectionCounter;	// Counter in PC_bsf_MapF(*)
#endif
//========================== Problem structures ====================================
static PT_matrix_T PD_A;				// Matrix of constraint coefficients
static bool PD_isEquation[PP_MM];		// Constraint is equation
static PT_column_T PD_b;				// Column of the constant terms of the system Ax <= PD_b
static PT_vector_T PD_c;				// Objective Function Coefficients
static PT_vector_T PD_u;				// Current approximation
static PT_vector_T PD_hi;				// Higher bound
static PT_vector_T PD_lo;				// Lower bound
static PT_column_T PD_norm_a;			// Column of norms of matrix rows
static PT_vector_T PD_launchVector;		// Used for projecting
static int PD_neHyperplanes_u[PP_MM];	// Index of bounding hyperplanes that include point u
static int PD_alHyperplanes_u[PP_MM];	// Index of all hyperplanes that include point u
static PT_bitscale_T PD_flatBitscale;	// Bit scale that tags all hyperplanes forming the flat
//------------------------- Orthogonal projection onto line ---------------
static double PD_D[PP_MM][PP_N];	// Main matrix D
static double PD_B[PP_N];			// Column B
static double PD_Dv[PP_N];			// Dv
static double PD_Dv_B[PP_N];		// Dv-B
static double PD_DT[PP_N][PP_N];	// Transposed D
static double PD_DDT[PP_N][PP_N];	// D*DT
//static double PD_DDT_[PP_N][PP_N];// Copy of D*DT
static double PD_DDTI[PP_N][PP_N];	// Inverse matrix to D*DT
static double PD_DTDDTI[PP_N][PP_N];
//========================== Input/Output =====================================
static string PD_problemName;