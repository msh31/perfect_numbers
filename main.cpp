#include <print>
#include <cmath>
#include <chrono>

bool is_prime( int64_t n ) {
    if( n <= 1 ) return false;
    for ( int64_t i = 2; i <= sqrt( n ); i++ ) {
        if ( n % i == 0 ) return false;
    }
    return true;
}

int main( ) {
    std::println( "Hallo, Wereld!" );

    auto start = std::chrono::high_resolution_clock::now();
    for ( int64_t i = 2; i <= INT64_MAX; i++ ) {
        if ( is_prime( std::pow( 2, i ) - 1 ) ) {
            int64_t perfect_number = ( std::pow( 2, i) - 1 );
            perfect_number *= std::pow( 2, i - 1 );
            if( perfect_number < 0 ) break;
            auto stop = std::chrono::high_resolution_clock::now();
            std::println( "found a perfect number: {} in {} microseconds", perfect_number, std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() );
        }
    }

    return 0;
}
