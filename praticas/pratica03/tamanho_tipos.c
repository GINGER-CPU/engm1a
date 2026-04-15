#include <stdio.h>

int main( ){
    
    printf("um inteiro tem %i bytes\n", sizeof(int));
    printf("um short int tem %i bytes\n", sizeof(short int));
    printf("um char tem %i bytes\n", sizeof(char));
    printf("um long tem %i bytes\n", sizeof(long int));
    printf("um foat tem %i bytes\n", sizeof(float));
    printf("um double tem %i bytes\n", sizeof(double));
    printf("um long double tem %i bytes\n", sizeof( long double));
    printf("um long long tem %i bytes\n", sizeof(long long));


    return 0;
}
