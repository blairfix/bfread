// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// get_data
DataFrame get_data(std::string filename, IntegerVector ids);
RcppExport SEXP _bfread_get_data(SEXP filenameSEXP, SEXP idsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ids(idsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_data(filename, ids));
    return rcpp_result_gen;
END_RCPP
}
// get_ngrams
std::vector<std::string> get_ngrams(std::string filename);
RcppExport SEXP _bfread_get_ngrams(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_ngrams(filename));
    return rcpp_result_gen;
END_RCPP
}
// read_column
std::list<std::string> read_column(std::string filename, int col_number, std::string delimiter);
RcppExport SEXP _bfread_read_column(SEXP filenameSEXP, SEXP col_numberSEXP, SEXP delimiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type col_number(col_numberSEXP);
    Rcpp::traits::input_parameter< std::string >::type delimiter(delimiterSEXP);
    rcpp_result_gen = Rcpp::wrap(read_column(filename, col_number, delimiter));
    return rcpp_result_gen;
END_RCPP
}
// read_delim
std::map<int, std::list<std::string>> read_delim(std::string filename, std::string delim);
RcppExport SEXP _bfread_read_delim(SEXP filenameSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type delim(delimSEXP);
    rcpp_result_gen = Rcpp::wrap(read_delim(filename, delim));
    return rcpp_result_gen;
END_RCPP
}
// read_sql
std::list<std::string> read_sql(std::string filename, std::string table, std::vector<std::string> get_columns);
RcppExport SEXP _bfread_read_sql(SEXP filenameSEXP, SEXP tableSEXP, SEXP get_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type table(tableSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type get_columns(get_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(read_sql(filename, table, get_columns));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bfread_get_data", (DL_FUNC) &_bfread_get_data, 2},
    {"_bfread_get_ngrams", (DL_FUNC) &_bfread_get_ngrams, 1},
    {"_bfread_read_column", (DL_FUNC) &_bfread_read_column, 3},
    {"_bfread_read_delim", (DL_FUNC) &_bfread_read_delim, 2},
    {"_bfread_read_sql", (DL_FUNC) &_bfread_read_sql, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_bfread(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
