#if !defined AUDIO_H
#define AUDIO_H

#include <stdlib.h>

struct audio {
    size_t samples;
    short* left, * right;
};

extern int audio_read(const char* filename, struct audio* a);

#endif