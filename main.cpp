#include <print>
#include <cmath>
#include <chrono>

#include "BigInt.hpp"

bool is_prime( BigInt n ) {
    if( n <= 1 ) return false;
    for ( BigInt i = 2; i <= sqrt( n ); i++ ) {
        if ( n % i == 0 ) return false;
    }
    return true;
}

int main( ) {
    std::println( "Hallo, Wereld!" );

    auto start = std::chrono::high_resolution_clock::now();
    for ( BigInt i = 2; i <= INT64_MAX; i++ ) {
        if ( is_prime( pow( 2LL, i.to_long_long() ) - 1 ) ) {
            BigInt perfect_number = ( pow( 2LL, i.to_long_long()) - 1 );
            perfect_number *= pow( 2LL, i.to_long_long() - 1 );
            if( perfect_number < 0 ) break;
            auto stop = std::chrono::high_resolution_clock::now();
            std::println( "found a perfect number: {} in {} microseconds", perfect_number.to_string(), std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() );
        }
    }

    return 0;
}
