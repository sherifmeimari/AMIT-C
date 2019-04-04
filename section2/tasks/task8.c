// Make a function that asks the user to enter 2 values . 
// Value of step and value of integer 
// The value of integer will be the " Max value " 
// The value of step will be the skipped step . 
// Ex : 
// please enter the value : 15
// Please enter the step : 6 
// 1 2 3 4 5  7 8 9 10  13 14 15

#include <stdio.h>
#include <stdlib.h>

void miss_step() {
    int value, step, *pvalue = &value, *pstep = &step;
    printf("Please enter the value:\n");
    scanf("%i", pvalue);
    printf("Please enter the step:\n");
    scanf("%i", pstep);

    for(int i=1; i <= *pvalue; i++) {
        if(i % *pstep != 0) {
            printf("%i", i);
        }
    }
    printf("\n");
}

int main() {

    miss_step();

    return 0;
}
