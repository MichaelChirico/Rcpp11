
// Copyright (C) 2013 Romain Francois
//
// This file is part of Rcpp11.
//
// Rcpp11 is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Rcpp11 is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Rcpp11.  If not, see <http://www.gnu.org/licenses/>.

#ifndef Rcpp_Module_generated_void_function_invoke_h
#define Rcpp_Module_generated_void_function_invoke_h
     
    inline void void_function_invoke( traits::number_to_type<0>, void (*ptr_fun)(void), SEXP* args ){ 
        ptr_fun() ;
    }


    template <typename U0>
    void void_function_invoke( traits::number_to_type<1>, void (*ptr_fun)(U0), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        ptr_fun(x0) ;
    }
    

    template <typename U0, typename U1>
    void void_function_invoke( traits::number_to_type<2>, void (*ptr_fun)(U0, U1), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        ptr_fun(x0, x1) ;
    }
    

    template <typename U0, typename U1, typename U2>
    void void_function_invoke( traits::number_to_type<3>, void (*ptr_fun)(U0, U1, U2), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        ptr_fun(x0, x1, x2) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3>
    void void_function_invoke( traits::number_to_type<4>, void (*ptr_fun)(U0, U1, U2, U3), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        ptr_fun(x0, x1, x2, x3) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4>
    void void_function_invoke( traits::number_to_type<5>, void (*ptr_fun)(U0, U1, U2, U3, U4), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        ptr_fun(x0, x1, x2, x3, x4) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5>
    void void_function_invoke( traits::number_to_type<6>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6>
    void void_function_invoke( traits::number_to_type<7>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7>
    void void_function_invoke( traits::number_to_type<8>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8>
    void void_function_invoke( traits::number_to_type<9>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9>
    void void_function_invoke( traits::number_to_type<10>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10>
    void void_function_invoke( traits::number_to_type<11>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11>
    void void_function_invoke( traits::number_to_type<12>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12>
    void void_function_invoke( traits::number_to_type<13>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13>
    void void_function_invoke( traits::number_to_type<14>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14>
    void void_function_invoke( traits::number_to_type<15>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15>
    void void_function_invoke( traits::number_to_type<16>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16>
    void void_function_invoke( traits::number_to_type<17>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17>
    void void_function_invoke( traits::number_to_type<18>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18>
    void void_function_invoke( traits::number_to_type<19>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19>
    void void_function_invoke( traits::number_to_type<20>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20>
    void void_function_invoke( traits::number_to_type<21>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21>
    void void_function_invoke( traits::number_to_type<22>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22>
    void void_function_invoke( traits::number_to_type<23>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23>
    void void_function_invoke( traits::number_to_type<24>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24>
    void void_function_invoke( traits::number_to_type<25>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25>
    void void_function_invoke( traits::number_to_type<26>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26>
    void void_function_invoke( traits::number_to_type<27>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27>
    void void_function_invoke( traits::number_to_type<28>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28>
    void void_function_invoke( traits::number_to_type<29>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29>
    void void_function_invoke( traits::number_to_type<30>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30>
    void void_function_invoke( traits::number_to_type<31>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31>
    void void_function_invoke( traits::number_to_type<32>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32>
    void void_function_invoke( traits::number_to_type<33>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33>
    void void_function_invoke( traits::number_to_type<34>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34>
    void void_function_invoke( traits::number_to_type<35>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35>
    void void_function_invoke( traits::number_to_type<36>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36>
    void void_function_invoke( traits::number_to_type<37>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37>
    void void_function_invoke( traits::number_to_type<38>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38>
    void void_function_invoke( traits::number_to_type<39>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39>
    void void_function_invoke( traits::number_to_type<40>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40>
    void void_function_invoke( traits::number_to_type<41>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41>
    void void_function_invoke( traits::number_to_type<42>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42>
    void void_function_invoke( traits::number_to_type<43>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43>
    void void_function_invoke( traits::number_to_type<44>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44>
    void void_function_invoke( traits::number_to_type<45>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45>
    void void_function_invoke( traits::number_to_type<46>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46>
    void void_function_invoke( traits::number_to_type<47>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47>
    void void_function_invoke( traits::number_to_type<48>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48>
    void void_function_invoke( traits::number_to_type<49>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49>
    void void_function_invoke( traits::number_to_type<50>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50>
    void void_function_invoke( traits::number_to_type<51>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51>
    void void_function_invoke( traits::number_to_type<52>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52>
    void void_function_invoke( traits::number_to_type<53>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53>
    void void_function_invoke( traits::number_to_type<54>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54>
    void void_function_invoke( traits::number_to_type<55>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55>
    void void_function_invoke( traits::number_to_type<56>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        typename Rcpp::traits::input_parameter<U55>::type x55( args[55] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54, x55) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56>
    void void_function_invoke( traits::number_to_type<57>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        typename Rcpp::traits::input_parameter<U55>::type x55( args[55] ) ;
        typename Rcpp::traits::input_parameter<U56>::type x56( args[56] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54, x55, x56) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57>
    void void_function_invoke( traits::number_to_type<58>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        typename Rcpp::traits::input_parameter<U55>::type x55( args[55] ) ;
        typename Rcpp::traits::input_parameter<U56>::type x56( args[56] ) ;
        typename Rcpp::traits::input_parameter<U57>::type x57( args[57] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54, x55, x56, x57) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58>
    void void_function_invoke( traits::number_to_type<59>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        typename Rcpp::traits::input_parameter<U55>::type x55( args[55] ) ;
        typename Rcpp::traits::input_parameter<U56>::type x56( args[56] ) ;
        typename Rcpp::traits::input_parameter<U57>::type x57( args[57] ) ;
        typename Rcpp::traits::input_parameter<U58>::type x58( args[58] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54, x55, x56, x57, x58) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59>
    void void_function_invoke( traits::number_to_type<60>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        typename Rcpp::traits::input_parameter<U55>::type x55( args[55] ) ;
        typename Rcpp::traits::input_parameter<U56>::type x56( args[56] ) ;
        typename Rcpp::traits::input_parameter<U57>::type x57( args[57] ) ;
        typename Rcpp::traits::input_parameter<U58>::type x58( args[58] ) ;
        typename Rcpp::traits::input_parameter<U59>::type x59( args[59] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54, x55, x56, x57, x58, x59) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60>
    void void_function_invoke( traits::number_to_type<61>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        typename Rcpp::traits::input_parameter<U55>::type x55( args[55] ) ;
        typename Rcpp::traits::input_parameter<U56>::type x56( args[56] ) ;
        typename Rcpp::traits::input_parameter<U57>::type x57( args[57] ) ;
        typename Rcpp::traits::input_parameter<U58>::type x58( args[58] ) ;
        typename Rcpp::traits::input_parameter<U59>::type x59( args[59] ) ;
        typename Rcpp::traits::input_parameter<U60>::type x60( args[60] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54, x55, x56, x57, x58, x59, x60) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61>
    void void_function_invoke( traits::number_to_type<62>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        typename Rcpp::traits::input_parameter<U55>::type x55( args[55] ) ;
        typename Rcpp::traits::input_parameter<U56>::type x56( args[56] ) ;
        typename Rcpp::traits::input_parameter<U57>::type x57( args[57] ) ;
        typename Rcpp::traits::input_parameter<U58>::type x58( args[58] ) ;
        typename Rcpp::traits::input_parameter<U59>::type x59( args[59] ) ;
        typename Rcpp::traits::input_parameter<U60>::type x60( args[60] ) ;
        typename Rcpp::traits::input_parameter<U61>::type x61( args[61] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54, x55, x56, x57, x58, x59, x60, x61) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62>
    void void_function_invoke( traits::number_to_type<63>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        typename Rcpp::traits::input_parameter<U55>::type x55( args[55] ) ;
        typename Rcpp::traits::input_parameter<U56>::type x56( args[56] ) ;
        typename Rcpp::traits::input_parameter<U57>::type x57( args[57] ) ;
        typename Rcpp::traits::input_parameter<U58>::type x58( args[58] ) ;
        typename Rcpp::traits::input_parameter<U59>::type x59( args[59] ) ;
        typename Rcpp::traits::input_parameter<U60>::type x60( args[60] ) ;
        typename Rcpp::traits::input_parameter<U61>::type x61( args[61] ) ;
        typename Rcpp::traits::input_parameter<U62>::type x62( args[62] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54, x55, x56, x57, x58, x59, x60, x61, x62) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63>
    void void_function_invoke( traits::number_to_type<64>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        typename Rcpp::traits::input_parameter<U55>::type x55( args[55] ) ;
        typename Rcpp::traits::input_parameter<U56>::type x56( args[56] ) ;
        typename Rcpp::traits::input_parameter<U57>::type x57( args[57] ) ;
        typename Rcpp::traits::input_parameter<U58>::type x58( args[58] ) ;
        typename Rcpp::traits::input_parameter<U59>::type x59( args[59] ) ;
        typename Rcpp::traits::input_parameter<U60>::type x60( args[60] ) ;
        typename Rcpp::traits::input_parameter<U61>::type x61( args[61] ) ;
        typename Rcpp::traits::input_parameter<U62>::type x62( args[62] ) ;
        typename Rcpp::traits::input_parameter<U63>::type x63( args[63] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54, x55, x56, x57, x58, x59, x60, x61, x62, x63) ;
    }
    

    template <typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63, typename U64>
    void void_function_invoke( traits::number_to_type<65>, void (*ptr_fun)(U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63, U64), SEXP* args ){ 
        typename Rcpp::traits::input_parameter<U0>::type x0( args[0] ) ;
        typename Rcpp::traits::input_parameter<U1>::type x1( args[1] ) ;
        typename Rcpp::traits::input_parameter<U2>::type x2( args[2] ) ;
        typename Rcpp::traits::input_parameter<U3>::type x3( args[3] ) ;
        typename Rcpp::traits::input_parameter<U4>::type x4( args[4] ) ;
        typename Rcpp::traits::input_parameter<U5>::type x5( args[5] ) ;
        typename Rcpp::traits::input_parameter<U6>::type x6( args[6] ) ;
        typename Rcpp::traits::input_parameter<U7>::type x7( args[7] ) ;
        typename Rcpp::traits::input_parameter<U8>::type x8( args[8] ) ;
        typename Rcpp::traits::input_parameter<U9>::type x9( args[9] ) ;
        typename Rcpp::traits::input_parameter<U10>::type x10( args[10] ) ;
        typename Rcpp::traits::input_parameter<U11>::type x11( args[11] ) ;
        typename Rcpp::traits::input_parameter<U12>::type x12( args[12] ) ;
        typename Rcpp::traits::input_parameter<U13>::type x13( args[13] ) ;
        typename Rcpp::traits::input_parameter<U14>::type x14( args[14] ) ;
        typename Rcpp::traits::input_parameter<U15>::type x15( args[15] ) ;
        typename Rcpp::traits::input_parameter<U16>::type x16( args[16] ) ;
        typename Rcpp::traits::input_parameter<U17>::type x17( args[17] ) ;
        typename Rcpp::traits::input_parameter<U18>::type x18( args[18] ) ;
        typename Rcpp::traits::input_parameter<U19>::type x19( args[19] ) ;
        typename Rcpp::traits::input_parameter<U20>::type x20( args[20] ) ;
        typename Rcpp::traits::input_parameter<U21>::type x21( args[21] ) ;
        typename Rcpp::traits::input_parameter<U22>::type x22( args[22] ) ;
        typename Rcpp::traits::input_parameter<U23>::type x23( args[23] ) ;
        typename Rcpp::traits::input_parameter<U24>::type x24( args[24] ) ;
        typename Rcpp::traits::input_parameter<U25>::type x25( args[25] ) ;
        typename Rcpp::traits::input_parameter<U26>::type x26( args[26] ) ;
        typename Rcpp::traits::input_parameter<U27>::type x27( args[27] ) ;
        typename Rcpp::traits::input_parameter<U28>::type x28( args[28] ) ;
        typename Rcpp::traits::input_parameter<U29>::type x29( args[29] ) ;
        typename Rcpp::traits::input_parameter<U30>::type x30( args[30] ) ;
        typename Rcpp::traits::input_parameter<U31>::type x31( args[31] ) ;
        typename Rcpp::traits::input_parameter<U32>::type x32( args[32] ) ;
        typename Rcpp::traits::input_parameter<U33>::type x33( args[33] ) ;
        typename Rcpp::traits::input_parameter<U34>::type x34( args[34] ) ;
        typename Rcpp::traits::input_parameter<U35>::type x35( args[35] ) ;
        typename Rcpp::traits::input_parameter<U36>::type x36( args[36] ) ;
        typename Rcpp::traits::input_parameter<U37>::type x37( args[37] ) ;
        typename Rcpp::traits::input_parameter<U38>::type x38( args[38] ) ;
        typename Rcpp::traits::input_parameter<U39>::type x39( args[39] ) ;
        typename Rcpp::traits::input_parameter<U40>::type x40( args[40] ) ;
        typename Rcpp::traits::input_parameter<U41>::type x41( args[41] ) ;
        typename Rcpp::traits::input_parameter<U42>::type x42( args[42] ) ;
        typename Rcpp::traits::input_parameter<U43>::type x43( args[43] ) ;
        typename Rcpp::traits::input_parameter<U44>::type x44( args[44] ) ;
        typename Rcpp::traits::input_parameter<U45>::type x45( args[45] ) ;
        typename Rcpp::traits::input_parameter<U46>::type x46( args[46] ) ;
        typename Rcpp::traits::input_parameter<U47>::type x47( args[47] ) ;
        typename Rcpp::traits::input_parameter<U48>::type x48( args[48] ) ;
        typename Rcpp::traits::input_parameter<U49>::type x49( args[49] ) ;
        typename Rcpp::traits::input_parameter<U50>::type x50( args[50] ) ;
        typename Rcpp::traits::input_parameter<U51>::type x51( args[51] ) ;
        typename Rcpp::traits::input_parameter<U52>::type x52( args[52] ) ;
        typename Rcpp::traits::input_parameter<U53>::type x53( args[53] ) ;
        typename Rcpp::traits::input_parameter<U54>::type x54( args[54] ) ;
        typename Rcpp::traits::input_parameter<U55>::type x55( args[55] ) ;
        typename Rcpp::traits::input_parameter<U56>::type x56( args[56] ) ;
        typename Rcpp::traits::input_parameter<U57>::type x57( args[57] ) ;
        typename Rcpp::traits::input_parameter<U58>::type x58( args[58] ) ;
        typename Rcpp::traits::input_parameter<U59>::type x59( args[59] ) ;
        typename Rcpp::traits::input_parameter<U60>::type x60( args[60] ) ;
        typename Rcpp::traits::input_parameter<U61>::type x61( args[61] ) ;
        typename Rcpp::traits::input_parameter<U62>::type x62( args[62] ) ;
        typename Rcpp::traits::input_parameter<U63>::type x63( args[63] ) ;
        typename Rcpp::traits::input_parameter<U64>::type x64( args[64] ) ;
        ptr_fun(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, x46, x47, x48, x49, x50, x51, x52, x53, x54, x55, x56, x57, x58, x59, x60, x61, x62, x63, x64) ;
    }
    

#endif
