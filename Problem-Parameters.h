/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: VeSP (Vertex Search by Projecting) method (MPI)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/

/*----------------------------- Problems -------------------------------*/

//#define PP_PATH "Problems/"

/**
#include "../_Problems-Miscellaneous.h"
#define PP_PATH "../../Set-of-LP-Problems/Miscellaneous-LP/"

/**/
#include "_Problems-NetLib-LP.h"
#define PP_PATH "../../Set-of-LP-Problems/NetLib-LP/"

/*---------------------------------------------------------------------*/

#define PP_METHOD_NAME "VeSP"

//-------------------------- Compilation Modes -----------------------
#define PP_DEBUG
//#define PP_MATRIX_OUTPUT
#define PP_SAVE_RESULT
#define PP_SAVE_ITER_RESULT
//#define PP_BIPROJECTION

//=========================== Problem Parameters =========================
#ifdef PP_MPS_FORMAT
#define PP_MM							(PP_M+3*PP_N)		// Maximal number of constraints
#else
#define PP_MM							(PP_M+2*PP_N)		// Maximal number of constraints
#endif // PP_MPS_FORMAT
#define PP_MAX_ITER_COUNT		10000000000		// Maximal count of iterations
#define PP_DBL_MAX				1E+308			// Highest value
//-------------------------- Input/Outpoot Parameters ---------------------------
#define PP_OUTPUT_LIMIT	8	// Number of Elements to output
#define PP_SETW 14
//------------------------- Matrix format ----------------
#define PP_INFINITY			1E+308		// Highest bound in *_hi.mtx
#define PP_MTX_PREFIX		"lp_"
#define PP_MTX_POSTFIX_A	".mtx"
#define PP_MTX_POSTFIX_B	"_b.mtx"
#define PP_MTX_POSTFIX_C	"_c.mtx"
#define PP_MTX_POSTFIX_HI	"_hi.mtx"
#define PP_MTX_POSTFIX_LO	"_lo.mtx"
#define PP_MTX_POSTFIX_U0	"_u0.mtx"	// Surface point
#define PP_MTX_POSTFIX_V	"_v.mtx"	// Vertrx point
//------------------------- MPS format ----------------
#define PP_MPS_NAME_LENGTH	9
#define PP_MPS_PREFIX		"lp_"
#define PP_MPS_EXTENSION	".mps"
#define PP_MAX_NUMBER_OF_ROWS	(PP_M+3)
#define PP_MAX_NUMBER_OF_COLS	(PP_N*(PP_M+1)+1)
//-------------------------- Jobs  -----------------------
// Not used.
//------------- Locations -------------
#define PP_ON_HYPERPLANE			1
#define PP_INSIDE_HALFSPACE			2
#define PP_OUTSIDE_HALFSPACE		3
#define PP_PARALLEL					4
#define PP_RECESSIVE				5
#define PP_NONDEGENERATE_PROJECTING	9