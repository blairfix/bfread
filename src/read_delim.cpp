#include <Rcpp.h>
#include <fstream>
#include <string>
#include <boost/utility/string_ref.hpp>
#include <vector>


using namespace Rcpp;

// [[Rcpp::plugins(cpp11)]]
// [[Rcpp::export]]


std::map<int, std::list<std::string>> read_delim( std::string filename,
                                                  std::string delim
                                                        )
{

    // 1. test if file exists
    std::ifstream ifile;
    ifile.open(filename);
    if(ifile) {
    } else {
        throw std::range_error("File does not exist");
    }


    // 2. read in data
    std::map<int, std::list<std::string>> output;

    std::string line;
    std::ifstream in(filename);

    int line_number = 1;
        std::size_t pos;

    while (getline(in, line)) {

        int col_number = 1;

        while ((pos = line.find(delim)) != std::string::npos) {

            output[col_number].push_back( line.substr(0, pos) );
            line.erase(0, pos + delim.length());
            col_number++;

        }

            // last column
            output[col_number].push_back( line);

        line_number++;
    }

    return output;
}
