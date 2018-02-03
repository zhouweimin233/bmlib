/*################################################################################
  ##
  ##   Copyright (C) 2011-2018 Keith O'Hara
  ##
  ##   This file is part of the StatsLib C++ library.
  ##
  ##   StatsLib is free software: you can redistribute it and/or modify
  ##   it under the terms of the GNU General Public License as published by
  ##   the Free Software Foundation, either version 2 of the License, or
  ##   (at your option) any later version.
  ##
  ##   StatsLib is distributed in the hope that it will be useful,
  ##   but WITHOUT ANY WARRANTY; without even the implied warranty of
  ##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  ##   GNU General Public License for more details.
  ##
  ################################################################################*/

/*
 * pdf of the univariate log-normal distribution
 */

#ifndef _statslib_dlnorm_HPP
#define _statslib_dlnorm_HPP

// single input
template<typename T>
statslib_constexpr T dlnorm(const T x, const T mu_par, const T sigma_par, const bool log_form);

statslib_constexpr double dlnorm(const double x);
statslib_constexpr double dlnorm(const double x, const bool log_form);
statslib_constexpr double dlnorm(const double x, const double mu_par, const double sigma_par);

// matrix/vector input
#ifndef STATS_NO_ARMA
arma::mat dlnorm_int(const arma::mat& x, const double* mu_par_inp, const double* sigma_par_inp, const bool log_form);

arma::mat dlnorm(const arma::mat& x);
arma::mat dlnorm(const arma::mat& x, const bool log_form);
arma::mat dlnorm(const arma::mat& x, const double mu_par, const double sigma_par);
arma::mat dlnorm(const arma::mat& x, const double mu_par, const double sigma_par, const bool log_form);
#endif

#include "dlnorm.ipp"

#endif
