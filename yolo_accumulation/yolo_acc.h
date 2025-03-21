#ifndef YOLO_ACC_H
#define YOLO_ACC_H

#include "yolo_stream.h"
#include "layer_parameter.h"

void yolo_acc_top(yolo_quad_stream &inStream_a, yolo_quad_stream &inStream_b,
		          yolo_quad_stream &outStream,
				  ap_uint<9> input_h, ap_uint<9> input_w,
				  ap_uint<MAX_FOLD_CH_BIT> fold_input_ch,
				  ap_uint<1> leaky, ap_uint<1> bias_en);
//Declares the function yolo_acc_top, which is likely the top-level function for the YOLO accelerator in an FPGA.
//fold_input_ch of type ap_uint<MAX_FOLD_CH_BIT> is probably used to indicate the number of input channels, particularly how they are folded in the FPGA implementation.
fp_data_type post_process_unit(fp_data_type data_in, fp_weight_type bias, ap_uint<1> bias_en, ap_uint<1> leaky);
//Declares a function post_process_unit which seems to be used for post-processing each data element
//takes input data and values to control bias addition and leaky ReLU activation
#endif
