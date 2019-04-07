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
