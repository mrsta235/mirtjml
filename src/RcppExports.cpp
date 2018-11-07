// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cjmle_conf_cpp
Rcpp::List cjmle_conf_cpp(const arma::mat& response, const arma::mat& nonmis_ind, arma::mat theta0, arma::mat A0, arma::mat Q, double cc, double tol, bool print_proc, bool parallel);
RcppExport SEXP _mirtjml_cjmle_conf_cpp(SEXP responseSEXP, SEXP nonmis_indSEXP, SEXP theta0SEXP, SEXP A0SEXP, SEXP QSEXP, SEXP ccSEXP, SEXP tolSEXP, SEXP print_procSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type response(responseSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type nonmis_ind(nonmis_indSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type A0(A0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< double >::type cc(ccSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type print_proc(print_procSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(cjmle_conf_cpp(response, nonmis_ind, theta0, A0, Q, cc, tol, print_proc, parallel));
    return rcpp_result_gen;
END_RCPP
}
// cjmle_expr_cpp
Rcpp::List cjmle_expr_cpp(const arma::mat& response, const arma::mat& nonmis_ind, arma::mat theta0, arma::mat A0, double cc, double tol, bool print_proc, bool parallel);
RcppExport SEXP _mirtjml_cjmle_expr_cpp(SEXP responseSEXP, SEXP nonmis_indSEXP, SEXP theta0SEXP, SEXP A0SEXP, SEXP ccSEXP, SEXP tolSEXP, SEXP print_procSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type response(responseSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type nonmis_ind(nonmis_indSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type A0(A0SEXP);
    Rcpp::traits::input_parameter< double >::type cc(ccSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type print_proc(print_procSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(cjmle_expr_cpp(response, nonmis_ind, theta0, A0, cc, tol, print_proc, parallel));
    return rcpp_result_gen;
END_RCPP
}
// prox_func_cpp
arma::vec prox_func_cpp(const arma::vec& y, double C);
RcppExport SEXP _mirtjml_prox_func_cpp(SEXP ySEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(prox_func_cpp(y, C));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mirtjml_cjmle_conf_cpp", (DL_FUNC) &_mirtjml_cjmle_conf_cpp, 9},
    {"_mirtjml_cjmle_expr_cpp", (DL_FUNC) &_mirtjml_cjmle_expr_cpp, 8},
    {"_mirtjml_prox_func_cpp", (DL_FUNC) &_mirtjml_prox_func_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_mirtjml(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}