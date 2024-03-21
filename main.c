#include "core/sbio.h"
#include <stdio.h>

int main() {
    char *seq1 = "ATCG";
    char *seq2 = "ATGG";
    int length = 4;
    float score = calculatePairwiseAlignmentScore(seq1, seq2, length);
    printf("Score: %f\n", score);
    int out_num = 0;
    char **gaps = insertGap(seq2, length, 7, &out_num);
    for(int i = 0; i < out_num; i++) {
        printf("%s\n", gaps[i]);
    }
    return 0;
}