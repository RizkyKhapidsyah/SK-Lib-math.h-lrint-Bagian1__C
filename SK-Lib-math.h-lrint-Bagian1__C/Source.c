#include <stdio.h>      /* printf */
#include <fenv.h>       /* fegetround, FE_* */
#include <math.h>       /* lrint */
#include <conio.h>

/*  Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019 */

int main() {
    printf("rounding using ");

    switch (fegetround()) {
    case FE_DOWNWARD: 
        printf("downward"); 
        break;
    case FE_TONEAREST: 
        printf("to-nearest"); 
        break;
    case FE_TOWARDZERO: 
        printf("toward-zero"); 
        break;
    case FE_UPWARD: 
        printf("upward"); 
        break;
    default: 
        printf("unknown");
    }
    
    printf(" rounding:\n");

    printf("lrint (2.3) = %ld\n", lrint(2.3));
    printf("lrint (3.8) = %ld\n", lrint(3.8));
    printf("lrint (-2.3) = %ld\n", lrint(-2.3));
    printf("lrint (-3.8) = %ld\n", lrint(-3.8));
    
    _getch();
    return 0;
}