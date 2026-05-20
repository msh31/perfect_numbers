#include <print>
#include <cmath>
#include <climits>

bool is_prime( int n ) {
    if( n <= 1 ) return false;
    for ( int i = 2; i <= sqrt( n ); i++ ) {
        if ( n % i == 0 ) return false;
    }
    return true;
}

int main( ) {
    std::println( "Hallo, Wereld!" );

    int n = INT_MAX;
    for ( int i = 2; i <= INT_MAX; i++ ) {
        if ( is_prime( std::pow( 2, i ) - 1 ) ) {
            int perfect_number = ( std::pow( 2, i) - 1 );
            perfect_number *= std::pow( 2, i - 1 );
            if(perfect_number < 0) break;
            std::println( "found a perfect number: {}", perfect_number );
        }
    }

    // std::println( "is {} a prime? - {}", n, is_prime( n ) );
    return 0;
}
