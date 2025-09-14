/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: VeSP (Vertex Search by Projecting) method (No MPI)
Module: Problem-Types.h (BSF Types)
Prefix: PT
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/			
#pragma once
#include "Problem-Include.h"		// Problem "Include" Files
#include "Problem-Parameters.h"		// Problem Parameters 
//=========================== Problem Types =========================
typedef double PT_matrix_T[PP_MM][PP_N];
typedef double PT_vector_T[PP_N];
typedef int PT_vector_i_T[PP_N];
typedef double PT_column_T[PP_MM];
typedef int PT_intColumn_T[PP_MM];
typedef bool PT_bitscale_T[PP_MM];

typedef char PT_MPS_name_T[PP_MPS_NAME_LENGTH];

struct PT_MPS_row_T {
	PT_MPS_name_T name;
	char type;
	double RHS_value;
};

struct PT_MPS_column_T {
	PT_MPS_name_T varName;
	PT_MPS_name_T rowName;
	double value;
	int j;
};

struct PT_MPS_upBound_T {
	int varIndex;
	double value;
};

struct PT_MPS_fxVariable_T {
	int varIndex;
	double value;
};