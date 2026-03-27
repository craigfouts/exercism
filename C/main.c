#include <stdio.h>
#include "rna_transcription/rna_transcription.h"

int main(void) {
    const char *dna = "ACGTG";
    char *rna = to_rna(dna);

    printf("%s\n", rna);

    free(rna);

    return 0;
}
