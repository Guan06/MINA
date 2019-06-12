// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// c_cor
NumericMatrix c_cor(NumericMatrix mat);
RcppExport SEXP _mina_c_cor(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(c_cor(mat));
    return rcpp_result_gen;
END_RCPP
}
// cp_cor
Rcpp::NumericMatrix cp_cor(Rcpp::NumericMatrix mat);
RcppExport SEXP _mina_cp_cor(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(cp_cor(mat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mina_c_cor", (DL_FUNC) &_mina_c_cor, 1},
    {"_mina_cp_cor", (DL_FUNC) &_mina_cp_cor, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_mina(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
