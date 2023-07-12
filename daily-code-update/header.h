
int header( int x ) 
{ 
    int f ; 
    if ( x == 1 ) 
    return ( 1 ) ; 
    else 
    f = x * header( x - 1 ) ; 
    return ( f ) ; 
} 