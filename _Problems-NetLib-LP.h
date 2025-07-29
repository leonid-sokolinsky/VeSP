/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: VeSP (Vertex Search by Projecting) method (No MPI)
Module: _Problems-NetLib-LP.h (Problems from the NETLIB LP Test Problem Set)
Prefix: PP
Author: Leonid B. Sokolinsky
This include file is part of Problem-Parameters.h
================================================================================*/
#pragma once

#define PP_MPS_FORMAT

/*============================== adlittle LP problem ===========================*
// Number of equations: 15
// Subspace dimension: 82
#define PP_PROBLEM_NAME		"adlittle"
#define PP_M 56	// Number of constraints in mps-file
#define PP_N 97	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 		-225494.96316238038228101176621492
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-10	// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			1E-9	// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-6	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6	// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_BASIC_VECTORS_ONLY
#define PP_RANDOM_LAUNCH_VECTOR 0
//------------------------------------------------------------------------------
// Elapsed time: 1
// Number of iterations: 44
// Computed objective value: -716430.781853274209424853
// Distance to polytope: 2.25586793420209640948635e-07
//------------------------------------------------------------------------------

/*============================== afiro LP problem ==============================*/
// Number of equations: 8
// Subspace dimension: 24
#define PP_PROBLEM_NAME	"afiro"
#define PP_M 27		// Number of constraints in mps-file
#define PP_N 32		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 464.75314285714285714285714285714
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-12	// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			1E-10	// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-9	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6	// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_BASIC_VECTORS_ONLY
#define PP_RANDOM_LAUNCH_VECTOR 113
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 6
// Computed objective value: 30.9501120000258822528849
// Distance to polytope: 9.89738502457257054669431e-11
//------------------------------------------------------------------------------

/*============================== beaconfd LP problem ===========================*
// Number of equations: 140
// Subspace dimension: 122
#define PP_PROBLEM_NAME		"beaconfd"
#define PP_M 173	// Number of constraints in mps-file
#define PP_N 262	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE -33592.4858072
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-5					// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_BASIC_VECTORS_ONLY
#define PP_RANDOM_LAUNCH_VECTOR 0
//------------------------------------------------------------------------------
// Elapsed time: 19
// Number of iterations: 35
// Computed objective value: -33728.4323331992200110108
// Distance to polytope: 1.45601590258345734099262e-11
//------------------------------------------------------------------------------

/*============================== blend LP problem ==============================*
// Number of equations: 43
// Subspace dimension: 40
#define PP_PROBLEM_NAME		"blend"
#define PP_M 74	// Number of constraints in mps-file
#define PP_N 83		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 30.812149845828220173774356124984	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-10	// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			1E-8	// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-7	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6	// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
#ifndef PP_MAXPROJECTION
#define PP_BASIC_VECTORS_ONLY
#endif // !PP_MAXPROJECTION
#define PP_MEDIAN_LAUNCH_VECTOR
//------------------------------------------------------------------------------
// Elapsed time: 775.226907969
// Number of iterations: 18
// Computed objective value: 15.8981296224031627417617
// Distance to polytope: 1.13465951087516247373718e-12
//------------------------------------------------------------------------------

/*============================== fit1d LP problem ==============================*
// Number of equations : 1
// Subspace dimension : 1025
#define PP_PROBLEM_NAME		"fit1d"
#define PP_M 24		// Number of constraints
#define PP_N 1026	// Number of variables
#define PP_MAX_OBJ_VALUE 9146.3780924209269467749025024617	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-15	// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			1E-14	// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-6	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6	// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_MEDIAN_LAUNCH_VECTOR
//#define PP_RANDOM_LAUNCH_VECTOR 113
//------------------------------------------------------------------------------
// Elapsed time: 780
// Number of iterations: 530
// Computed objective value: 8995.43434399400211987086
// Distance to polytope: 4.05048421303497920494154e-07
//------------------------------------------------------------------------------

/*============================== grow7 LP problem ==============================*
// Number of equations: 140
// Subspace dimension: 161
#define PP_PROBLEM_NAME		"grow7"
#define PP_M 140	// Number of equations (after conversion to standard form)
#define PP_N 301	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 47787811.814711502616766956242865	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-15	// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			1E-10	// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-5	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+7	// Length of Objective Vector
//------------------------------------------------------------------------------
// Elapsed time: 16
// Number of iterations: 119
// Computed objective value: 43969431.1074070557951927
// Distance to polytope: 9.66803570715207168909285e-06
//------------------------------------------------------------------------------

/*============================== israel LP problem =============================*
// Number of equations: 0
#define PP_PROBLEM_NAME		"israel"
#define PP_M 174	// Number of constraints in mps-file
#define PP_N 142	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 896644.82186304572966200464196045	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11		// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			1E-10		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-6		// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6	// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_RANDOM_LAUNCH_VECTOR 3
//------------------------------------------------------------------------------
// F(x) = -3079072.39031
// Elapsed time: 1
// Number of iterations: 45
// Computed objective value: 102956.85689921339508146
// Distance to polytope: 5.88566228705398090758185e-07
//------------------------------------------------------------------------------

/*============================== kb2 LP problem ================================*
// Number of equations: 16
// Subspace dimension: 25
#define PP_PROBLEM_NAME		"kb2"
#define PP_M 43	// Number of equations (after conversion to standard form)
#define PP_N 41	// Number of variables in mps-file (after conversion to standard form)
#define PP_MAX_OBJ_VALUE 1749.9001299062057129526866493726
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-10					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			1E-7		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-6	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_BASIC_VECTORS_ONLY
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 2
// Computed objective value: 174.526507241575814077805
// Distance to polytope: 2.1836865792463599311058e-10
//------------------------------------------------------------------------------

/*============================== recipe LP problem =============================*
// Number of equations: 67
// Subspace dimension: 92 
#define PP_PROBLEM_NAME		"recipe"
#define PP_M 91	// Number of constraints in mps-file
#define PP_N 180	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 266.616 // Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_MAXPROJECTION
#ifndef PP_MAXPROJECTION
#define PP_BASIC_VECTORS_ONLY
#endif // !PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 2
// Number of iterations: 9
// Computed objective value: 262.820000000075992829807
// Distance to polytope: 1.52899914951376558747143e-12
//------------------------------------------------------------------------------


/*============================== sc105 LP problem ==============================*
// Number of equations: 45
// Subspace dimension: 58
#define PP_PROBLEM_NAME		"sc105"
#define PP_M 104	// Number of constraints in mps-file
#define PP_N 103	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 52.202061211707248062628010857689 // Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-8	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_MAXPROJECTION
#ifndef PP_MAXPROJECTION
#define PP_BASIC_VECTORS_ONLY
#endif // !PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 6
// Computed objective value: 9.81873854325621309158123
// Distance to polytope: 3.58507922695696403166089e-11
//------------------------------------------------------------------------------

/*============================== sc50a LP problem ==============================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50a"
#define PP_M 49	// Number of constraints in mps-file
#define PP_N 48		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 64.575077058564509026860413914575	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*100)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_MAXPROJECTION
#ifndef PP_MAXPROJECTION
#define PP_BASIC_VECTORS_ONLY
#endif // !PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 7
// Computed objective value: 41.4361496255259282861516
// Distance to polytope: 9.03330951555543123296775e-12
//------------------------------------------------------------------------------

/*============================== sc50b LP problem ==============================*
// Number of equations: 20
// Subspace dimension: 28
#define PP_PROBLEM_NAME		"sc50b"
#define PP_M 48	// Number of constraints in mps-file
#define PP_N 48		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 70	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			(PP_EPS_ZERO*10)		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		(PP_EPS_PROJECTION*10)	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_MAXPROJECTION
#ifndef PP_MAXPROJECTION
#define PP_BASIC_VECTORS_ONLY
#endif // !PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 13
// Computed objective value: 47.8109418755505117815119
// Distance to polytope: 4.86566097129245719020372e-12
//------------------------------------------------------------------------------

/*============================== scagr7 LP problem =============================*
// Number of equations : 84
// Subspace dimension : 56
#define PP_PROBLEM_NAME	"scagr7"
#define PP_M 129		// Number of constraints in mps-file
#define PP_N 140		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 2331389.824330984	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11	// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			1E-10	// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-7	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_MAXPROJECTION
//#define PP_RANDOM_LAUNCH_VECTOR 113
#define PP_MEDIAN_LAUNCH_VECTOR
//------------------------------------------------------------------------------
// Elapsed time: 1
// Number of iterations: 22
// Computed objective value: 2021557.75235718861222267
// Distance to polytope: 3.86792369984808244759302e-08
//------------------------------------------------------------------------------

/*============================== scsd1 LP problem ==============================*
// Number of equations : 77
// Subspace dimension : 683
#define PP_PROBLEM_NAME	"scsd1"
#define PP_M 77			// Number of constraints in mps-file
#define PP_N 760		// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE -8.6666666743333647292533502995263	// Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-11					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			1E-9		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-8	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
#define PP_MAXPROJECTION
//#define PP_BASIC_VECTORS_ONLY
//#define PP_RANDOM_LAUNCH_VECTOR 113
#define PP_MEDIAN_LAUNCH_VECTOR
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

/*============================== share2b LP problem ============================*
// Number of equations: 13
// Subspace dimension: 66
#define PP_PROBLEM_NAME		"share2b"
#define PP_M 96	// Number of constraints in mps-file
#define PP_N 79	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 415.732240741419486545199108738 // Exact maximum value of objective function
//------------------------------------------------------------------------------
#define PP_EPS_ZERO					1E-10					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION			1E-9		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE		1E-6	// Accuracy of belonging to hyperplane
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6					// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_MAXPROJECTION
#ifndef PP_MAXPROJECTION
#define PP_BASIC_VECTORS_ONLY
#endif // !PP_MAXPROJECTION
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 10
// Computed objective value: 389.506304102954800328007
// Distance to polytope: 1.27386515984388698717849e-07
//------------------------------------------------------------------------------

/*============================== stocfor1 LP problem ============================*
// Number of equations: 63
// Subspace dimension: 48
#define PP_PROBLEM_NAME		"stocfor1"
#define PP_M 117	// Number of constraints in mps-file
#define PP_N 111	// Number of variables in mps-file
#define PP_MAX_OBJ_VALUE 41131.976219436406065682760731514 // Exact maximum value of objective function
//--------------------------------------------------------------------------
#define PP_EPS_ZERO				1E-15					// Accuracy for comparison with zero
#define PP_EPS_PROJECTION		1E-10		// Precision to calculate projection
#define PP_EPS_ON_HYPERPLANE	1E-7	// Precision for point to be in halfspace
#define PP_OBJECTIVE_VECTOR_LENGTH	1E+6				// Length of Objective Vector
//-------------------------- Compilation Modes ---------------------------------
//#define PP_MAXPROJECTION
//#define PP_RANDOM_LAUNCH_VECTOR 113
//#define PP_MEDIAN_LAUNCH_VECTOR
//------------------------------------------------------------------------------
// Elapsed time: 0
// Number of iterations: 8
// Computed objective value: 25463.6407764100040367339
// Distance to polytope: 1.05547273497526090659406e-12
//------------------------------------------------------------------------------
//
//==============================================================================*/