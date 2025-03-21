#ifndef YOLO_STREAM_H
#define YOLO_STREAM_H

#include "ap_int.h"
#include "hls_stream.h"
#include "yolo_fixed_point.h"

typedef struct quad_fp_pack{
	fp_data_type sub_data_0;
	fp_data_type sub_data_1;
	fp_data_type sub_data_2;
	fp_data_type sub_data_3;
	//fp_data_type sub_data_4;
	//fp_data_type sub_data_5;

}quad_fp_pack;

template<int D,int U,int TI,int TD>//used in  FPGA designs for high-speed data transfer
  struct ap_axi_fp{
	quad_fp_pack   data;
    ap_uint<(D+7)/8> keep;
    ap_uint<(D+7)/8> strb;
    ap_uint<U>       user;
    ap_uint<1>       last;
    ap_uint<TI>      id;
    ap_uint<TD>      dest;
};

typedef ap_axi_fp<64,2,5,6> quad_fp_side_channel;
typedef hls::stream<quad_fp_side_channel> yolo_quad_stream;
//Top and bottom used for high-throughput data streaming in the YOLO accelerator.
typedef hls::stream<fp_data_type> yolo_inter_stream;

#endif
