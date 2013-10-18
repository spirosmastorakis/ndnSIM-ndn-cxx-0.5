//  (C) Copyright Gennadiy Rozental 2005-2008.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at 
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.
//
//  File        : $RCSfile$
//
//  Version     : $Revision: 49312 $
//
//  Description : plain report formatter implementation
// ***************************************************************************

#ifndef NDNBOOST_TEST_PLAIN_REPORT_FORMATTER_HPP_020105GER
#define NDNBOOST_TEST_PLAIN_REPORT_FORMATTER_HPP_020105GER

// Boost.Test
#include <ndnboost/test/detail/global_typedef.hpp>
#include <ndnboost/test/results_reporter.hpp>

#include <ndnboost/test/detail/suppress_warnings.hpp>

//____________________________________________________________________________//

namespace ndnboost {

namespace unit_test {

namespace output {

// ************************************************************************** //
// **************             plain_report_formatter           ************** //
// ************************************************************************** //

class plain_report_formatter : public results_reporter::format {
public:
    // Formatter interface
    void    results_report_start( std::ostream& ostr );
    void    results_report_finish( std::ostream& ostr );

    void    test_unit_report_start( test_unit const&, std::ostream& ostr );
    void    test_unit_report_finish( test_unit const&, std::ostream& ostr );

    void    do_confirmation_report( test_unit const&, std::ostream& ostr );

private:
    // Data members
    counter_t m_indent;
};

} // namespace output

} // namespace unit_test

} // namespace ndnboost

//____________________________________________________________________________//

#include <ndnboost/test/detail/enable_warnings.hpp>

#endif // NDNBOOST_TEST_PLAIN_REPORT_FORMATTER_HPP_020105GER