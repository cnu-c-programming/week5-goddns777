#include <stdio.h>

int sum_range(int *start, int *end){
    int sum = 0;
    for(int *srt = start; srt < end; srt++){
        sum += *srt;
    }
    return sum;
}

int main(){
    int data[] = {10, 20, 30, 40, 50, 60, 70};

    int result = sum_range(&data[1], &data[4]);

    printf("%d\n", result);
    return 0;
}
