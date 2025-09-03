#include <iostream>
using namespace std;
typedef long long int lli ;

int main(){

    lli a , b; scanf("%lld %lld" , &a , &b);
    ( a == b ) ? printf("= \n"):
    ( a < b ) ? printf("< \n") : printf("> \n");
}
