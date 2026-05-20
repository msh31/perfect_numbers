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
    std::println( "is {} a prime? - {}", n, is_prime( n ) );
    return 0;
}
