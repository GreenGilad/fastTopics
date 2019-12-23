#ifndef INCLUDE_POISMIXEM
#define INCLUDE_POISMIXEM

#include <RcppArmadillo.h>

// FUNCTION DECLARATIONS
// ---------------------
void p2m (arma::mat& L, arma::vec& u, arma::vec& x);

void m2p (double s, const arma::vec& u, arma::vec& x);

arma::vec poismixem (const arma::mat& L, const arma::vec& w, 
		     const arma::vec& x0, uint numiter);

arma::vec poismixem (arma::mat& L, const arma::vec& w, const arma::vec& x0, 
		     arma::mat& P, uint numiter);

#endif
