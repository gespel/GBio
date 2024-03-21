#include <stdlib.h>
/*
    Adenin = A
    Cytosin = C
    Guanin = G
    Thymin = T



*/


int initSBio();
float calculatePairwiseAlignmentScore(char *seq1, char *seq2, int length);
char **insertGap(char *seq, int length, int targetLength, int *out_num);