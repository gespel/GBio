#include "core/sbio.h"
#include <stdio.h>

int main() {
    char *seq1 = "ATCG";
    char *seq2 = "ATGG";
    int length = 4;
    float score = calculatePairwiseAlignmentScore(seq1, seq2, length);
    printf("Score: %f\n", score);
    printf("Inserting gaps %s\n", insertGaps(seq1, length, 1)[0]);
    return 0;
}