#include "rna_transcription.h"

const char *DNA = "GCTA";
const char *RNA = "CGAU";

char *to_rna(const char *dna) {
    size_t len, idx;
    for (len = 0; dna[len]; ++len);
    char *rna = malloc(len);

    for (size_t i = 0; i < len; ++i) {        
        for (idx = 0; idx < 4 && dna[i] != DNA[idx]; ++idx);
        rna[i] = RNA[idx];
    }

    return rna;
}
