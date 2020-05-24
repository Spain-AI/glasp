// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mean_squared_error
double mean_squared_error(arma::vec ypred, arma::vec ytrue);
RcppExport SEXP _glasp_mean_squared_error(SEXP ypredSEXP, SEXP ytrueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type ypred(ypredSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ytrue(ytrueSEXP);
    rcpp_result_gen = Rcpp::wrap(mean_squared_error(ypred, ytrue));
    return rcpp_result_gen;
END_RCPP
}
// binary_cross_entropy
double binary_cross_entropy(arma::vec ypred, arma::vec ytrue);
RcppExport SEXP _glasp_binary_cross_entropy(SEXP ypredSEXP, SEXP ytrueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type ypred(ypredSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ytrue(ytrueSEXP);
    rcpp_result_gen = Rcpp::wrap(binary_cross_entropy(ypred, ytrue));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_Rcpp_glasp_export();

static const R_CallMethodDef CallEntries[] = {
    {"_glasp_mean_squared_error", (DL_FUNC) &_glasp_mean_squared_error, 2},
    {"_glasp_binary_cross_entropy", (DL_FUNC) &_glasp_binary_cross_entropy, 2},
    {"_rcpp_module_boot_Rcpp_glasp_export", (DL_FUNC) &_rcpp_module_boot_Rcpp_glasp_export, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_glasp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
