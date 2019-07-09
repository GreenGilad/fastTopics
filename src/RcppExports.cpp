// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mixsqp_rcpp
arma::vec mixsqp_rcpp(const arma::mat& L, const arma::vec& w, const arma::vec& x0, double tol, double zerothreshold, double zerosearchdir, double suffdecr, double stepsizereduce, double minstepsize, const arma::vec& e, int numiter, int maxiteractiveset, bool verbose);
RcppExport SEXP _fastTopics_mixsqp_rcpp(SEXP LSEXP, SEXP wSEXP, SEXP x0SEXP, SEXP tolSEXP, SEXP zerothresholdSEXP, SEXP zerosearchdirSEXP, SEXP suffdecrSEXP, SEXP stepsizereduceSEXP, SEXP minstepsizeSEXP, SEXP eSEXP, SEXP numiterSEXP, SEXP maxiteractivesetSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type zerothreshold(zerothresholdSEXP);
    Rcpp::traits::input_parameter< double >::type zerosearchdir(zerosearchdirSEXP);
    Rcpp::traits::input_parameter< double >::type suffdecr(suffdecrSEXP);
    Rcpp::traits::input_parameter< double >::type stepsizereduce(stepsizereduceSEXP);
    Rcpp::traits::input_parameter< double >::type minstepsize(minstepsizeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type e(eSEXP);
    Rcpp::traits::input_parameter< int >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< int >::type maxiteractiveset(maxiteractivesetSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(mixsqp_rcpp(L, w, x0, tol, zerothreshold, zerosearchdir, suffdecr, stepsizereduce, minstepsize, e, numiter, maxiteractiveset, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastTopics_mixsqp_rcpp", (DL_FUNC) &_fastTopics_mixsqp_rcpp, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastTopics(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}