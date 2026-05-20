#include <print>
#include <cmath>

bool is_prime( int n ) {
    if( n <= 1 ) return false;
    for ( int i = 2; i <= sqrt( n ); i++ ) {
        if ( n % i == 0 ) return false;
    }
    return true;
}

int main( ) {
    std::println( "Hallo, Wereld!" );

    for ( int64_t i = 2; i <= INT64_MAX; i++ ) {
        if ( is_prime( std::pow( 2, i ) - 1 ) ) {
            int64_t perfect_number = ( std::pow( 2, i) - 1 );
            perfect_number *= std::pow( 2, i - 1 );
            if( perfect_number < 0 ) break;
            std::println( "found a perfect number: {}", perfect_number );
        }
    }

    return 0;
}
