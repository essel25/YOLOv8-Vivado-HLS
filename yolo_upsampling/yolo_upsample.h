#ifndef YOLO_UPSAMPLE_H
#define YOLO_UPSAMPLE_H

#include "yolo_stream.h"
#include "hls_video.h"

#define INPUT_H 20
#define INPUT_W 20
#define INPUT_FOLD_CH 8
#define STRIDE 1

typedef hls::LineBuffer<1,INPUT_W,fp_data_type> line_buff_type;
void yolo_upsamp_top(yolo_quad_stream &inStream, yolo_quad_stream &outStream);

#endif
