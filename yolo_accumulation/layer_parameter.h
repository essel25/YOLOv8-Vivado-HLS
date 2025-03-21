#ifndef LAYER_PARAMETER_H
#define LAYER_PARAMETER_H

#define MAX_KERNEL_NUM 64
#define MAX_CH_BIT (9+1)//represent the maximum number of bits used to encode the number of channels in a convolutional layer
//The basic idea behind folding is to reduce the number of hardware resources
//required to implement a given algorithm by reusing the same resources multiple times in a time-multiplexed manner.
#define MAX_FOLD_CH_BIT (9-2+1)//this line indicates the bit-width needed for indexing the maximum number of channels that can be processed in a folded manner
#endif
