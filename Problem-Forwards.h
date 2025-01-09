/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: VeSP (Vertex Search by Projecting) method (MPI)
Module: Problem-Forwards.h (Problem Function Forwards)
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-bsfTypes.h"
#include "Problem-Types.h"
//====================== Private Functions ===========================
namespace PF {
	void	MakeProjectionHyperplaneList(int* projectionHyperplanesList, int* alHyperplanes_p, int flatDim);
	void	PreparationForIterations(PT_vector_T u, int* flatDim);
}
//====================== Shared Functions ===========================
namespace SF {
	unsigned long long BinomialCoefficient(int n, int k);
	double	Distance_PointToHalfspace_i(PT_vector_T x, int i);
	double	Distance_PointToHyperplane_i(PT_vector_T x, int i);
	double	Distance_PointToPoint(PT_vector_T x, PT_vector_T y);
	double	Distance_PointToPolytope(PT_vector_T x);
	double	DistanceSQR_PointToPoint(PT_vector_T x, PT_vector_T y);
	void	Flat_BipProjection(int* flatHyperplanes, int m_flat, PT_vector_T v, double eps_bipprojection_round, double eps_zero, int maxProjectingIter, PT_vector_T w, int* success);
	void	Flat_MaxProjection(int* flatHyperplanes, int m_flat, PT_vector_T v, double eps_maxprojection_zero, double eps_zero, int maxProjectingIter, PT_vector_T w, int* success);
	void	JumpingOnPolytope(PT_vector_T startPoint, PT_vector_T directionVector, PT_vector_T finishPoint, double eps_zero);
	void	MakeColumnOfNorms(PT_matrix_T A, PT_column_T norm_a);
	void	MakeListOfNotIncludingHalfspaces(PT_vector_T x, int* notIncludingHalfspacesList, double eps);
	void	MakeNeHyperplaneList(PT_vector_T u, int* neHyperplanes_u, int* mneh_u, double eps);
	void	MovingToPolytope(PT_vector_T startPoint, PT_vector_T directionVector, PT_vector_T finishPoint, double eps_moving, double eps_on_hyperplane);
	bool	MPS___Load_Problem();
	bool	MPS__MakeProblem(PT_MPS_row_T* row, int n_row, PT_MPS_column_T* column, int n_col, double* loBound, PT_MPS_upBound_T* upBounds, int n_up, PT_MPS_fxVariable_T* fxVariable, int n_fx);
	bool	MPS__ReadBounds(FILE* stream, PT_MPS_column_T* column, int n_col, double* loBound, PT_MPS_upBound_T* upBound, int* n_up, PT_MPS_fxVariable_T* fxVariable, int* n_fx);
	bool	MPS__ReadColumns(FILE* stream, PT_MPS_column_T* columns, int* n_col);
	bool	MPS__ReadKeyWord(FILE* stream, string* word, string pattern);
	bool	MPS__ReadRHS(FILE* stream, PT_MPS_row_T* row, int n_row);
	bool	MPS__ReadRows(FILE* stream, PT_MPS_row_T* rows, int* n_row);
	void	MPS__SetColumnIndexes(PT_MPS_column_T* column, int n_col, int* n_A);
	void	MPS__SkipComment(FILE* stream);
	bool	MPS_AddEquation(PT_MPS_name_T rowName, double RHS_value, PT_MPS_column_T* column, int n_col);
	bool	MPS_AddInequality_G(PT_MPS_name_T rowName, double RHS_value, PT_MPS_column_T* column, int n_col);
	bool	MPS_AddInequality_L(PT_MPS_name_T rowName, double RHS_value, PT_MPS_column_T* column, int n_col);
	bool	MPS_AddObjectiveFunction(PT_MPS_name_T rowName, PT_MPS_column_T* column, int n_col);
	void	MPS_CopyName(char* name_x, char* name_y);
	void	MPS_NewLine(FILE* stream);
	bool	MPS_ReadColumnLine(FILE* stream, PT_MPS_column_T* column, int* n_col);
	bool	MPS_ReadName(FILE* stream, char* name);
	bool	MPS_ReadRHS_line(FILE* stream, PT_MPS_row_T* row, int n_row, PT_MPS_name_T RHS_name);
	bool	MPS_ReadValue(FILE* stream, double* value);
	bool	MPS_SameNames(PT_MPS_name_T name_x, PT_MPS_name_T name_y);
	int		MPS_SearchColByName(PT_MPS_column_T* column, int j_col, PT_MPS_name_T name);
	int		MPS_SearchRowByName(PT_MPS_row_T* row, int n_row, PT_MPS_name_T name);
	void	MPS_SkipSpaces(FILE* stream);
	bool	MPS_UniqueRowName(PT_MPS_row_T* rows, int n_row, PT_MPS_name_T name);
	bool	MTX__Load_Problem();
	void	MTX_Conversion();
	bool	MTX_Load_A();
	bool	MTX_Load_b();
	bool	MTX_Load_c();
	bool	MTX_Load_hi();
	bool	MTX_Load_lo();
	bool	MTX_LoadPoint(PT_vector_T x, string postfix);
	void	MTX_RemoveFreeVariables(void);
	bool	MTX_SavePoint(PT_vector_T x, string postfix);
	void	MTX_SkipComments(FILE* stream);
	int		Number_IncludingNeHyperplanes(PT_vector_T x, double eps);
	double	ObjF(PT_vector_T x);
	void	ObliqueProjectingVectorOntoHalfspace_i(PT_vector_T z, int i, PT_vector_T g, PT_vector_T o, double eps, int* exitCode);
	void	OrthogonalProjectingVectorOntoHalfspace_i(PT_vector_T z, int i, PT_vector_T r, double eps, int* exitcode);
	void	OrthogonalProjectingVectorOntoHyperplane_i(PT_vector_T x, int i, PT_vector_T p);
	bool	PointBelongsHalfspace_i(PT_vector_T point, int i, double eps);
	bool	PointBelongsHyperplane_i(PT_vector_T z, int i, double eps);
	bool	PointBelongsOuterCone(PT_vector_T x, int* notIncludingHalfspacesList, double eps);
	bool	PointBelongsPolytope(PT_vector_T x, double eps);
	void	PointHomothety(PT_vector_T x, PT_vector_T center, double ratio);
	bool	PointInsideHalfspace_i(PT_vector_T x, int i, double eps);
	bool	PointIsVertex_i(PT_vector_T x, double  eps);
	int		PointLocation_i(PT_vector_T x, int i, double eps, double* a_DoT_x_MinuS_b);
	void	PolytopeHomothety(PT_vector_T center, double ratio);
	void	Print_Constraints();
	void	Print_HalfspacesIncludingPoint(PT_vector_T x, double eps);
	void	Print_HalfspacesOutOfPoint(PT_vector_T x, double eps);
	void	Print_HyperplanesIncludingPoint(PT_vector_T x, double eps);
	void	Print_Number_of_edges(PT_vector_T x, double eps_on_hyperplane);
	void	Print_Vector(PT_vector_T x);
	double	RelativeError(double trueValue, double calculatedValue);
	void	Shift(PT_vector_T point, PT_vector_T shiftVector, double factor, PT_vector_T shiftedPoint);
	void	TWIDDLE(int* x, int* y, int* z, int* p, bool* done);
	void	TWIDDLE_CodeToSubset(int code, int* a, int* c, int n, int m, int* x, int* y, int* z, int* p, bool* done, int* nextI);
	void	TWIDDLE_Make_p(int* p, int n, int m);
	void	Vector_Addition(PT_vector_T x, PT_vector_T y, PT_vector_T z);
	void	Vector_Copy(PT_vector_T x, PT_vector_T y);
	void	Vector_DivideByNumber(PT_vector_T x, double r, PT_vector_T y);
	void	Vector_DivideEquals(PT_vector_T x, double r);
	double	Vector_DotProduct(PT_vector_T x, PT_vector_T y);
	bool	Vector_Is_Tiny(PT_vector_T x, double eps);
	void	Vector_MakeLike(PT_vector_T x, double lengthOfLikeVector, PT_vector_T likeVector);
	void	Vector_MakeMinus_e(PT_vector_T minus_e);
	void	Vector_MinusEquals(PT_vector_T equalPoint, PT_vector_T minusVector);
	void	Vector_MultiplyByNumber(PT_vector_T x, double r, PT_vector_T y);
	void	Vector_MultiplyEquals(PT_vector_T x, double r);
	double	Vector_Norm(PT_vector_T x);
	double	Vector_NormSquare(PT_vector_T x);
	void	Vector_PlusEquals(PT_vector_T equalVector, PT_vector_T plusVector);
	void	Vector_Round(PT_vector_T x, double eps);
	void	Vector_SetValue(PT_vector_T x, double v);
	void	Vector_Subtraction(PT_vector_T x, PT_vector_T y, PT_vector_T z);
	void	Vector_Zeroing(PT_vector_T x);
}
//====================== Macros ================================
#define PF_MIN(x,y) (x<y?x:y)
#define PF_MAX(x,y) (x>y?x:y)
#define PF_MAP_LIST_INDEX (BSF_sv_addressOffset + BSF_sv_numberInSublist)