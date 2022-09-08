#if !defined WEIGHT_H
#define WEIGHT_H

enum formula { lorenz, berthean, keys };

extern double ideal_weight(int h, int age, char sex, enum formula f);

#endif