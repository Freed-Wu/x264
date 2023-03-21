#ifndef X264_TIC6X_PREDICT_H
#define X264_TIC6X_PREDICT_H

#define x264_predict_16x16_v_ti x264_template(predict_16x16_v_ti)
void x264_predict_16x16_v_ti       ( pixel *src );
#define x264_predict_16x16_h_ti x264_template(predict_16x16_h_ti)
void x264_predict_16x16_h_ti       ( pixel *src );
#define x264_predict_16x16_p_ti x264_template(predict_16x16_p_ti)
void x264_predict_16x16_p_ti       ( pixel *src );
#define x264_predict_16x16_dc_ti x264_template(predict_16x16_dc_ti)
void x264_predict_16x16_dc_ti      ( pixel *src );
#define x264_predict_16x16_dc_left_ti x264_template(predict_16x16_dc_left_ti)
void x264_predict_16x16_dc_left_ti ( pixel *src );
#define x264_predict_16x16_dc_top_ti x264_template(predict_16x16_dc_top_ti)
void x264_predict_16x16_dc_top_ti  ( pixel *src );
#define x264_predict_16x16_dc_128_ti x264_template(predict_16x16_dc_128_ti)
void x264_predict_16x16_dc_128_ti  ( pixel *src );

#define x264_predict_8x8c_v_ti x264_template(predict_8x8c_v_ti)
void x264_predict_8x8c_v_ti        ( pixel *src );
#define x264_predict_8x8c_h_ti x264_template(predict_8x8c_h_ti)
void x264_predict_8x8c_h_ti        ( pixel *src );
#define x264_predict_8x8c_p_ti x264_template(predict_8x8c_p_ti)
void x264_predict_8x8c_p_ti        ( pixel *src );
#define x264_predict_8x8c_dc_ti x264_template(predict_8x8c_dc_ti)
void x264_predict_8x8c_dc_ti       ( pixel *src );
#define x264_predict_8x8c_dc_left_ti x264_template(predict_8x8c_dc_left_ti)
void x264_predict_8x8c_dc_left_ti  ( pixel *src );
#define x264_predict_8x8c_dc_top_ti x264_template(predict_8x8c_dc_top_ti)
void x264_predict_8x8c_dc_top_ti   ( pixel *src );
#define x264_predict_8x8c_dc_128_ti x264_template(predict_8x8c_dc_128_ti)
void x264_predict_8x8c_dc_128_ti   ( pixel *src );

#define x264_predict_4x4_v_ti x264_template(predict_4x4_v_ti)
void x264_predict_4x4_v_ti         ( pixel *src );
#define x264_predict_4x4_h_ti x264_template(predict_4x4_h_ti)
void x264_predict_4x4_h_ti         ( pixel *src );
#define x264_predict_4x4_dc_ti x264_template(predict_4x4_dc_ti)
void x264_predict_4x4_dc_ti        ( pixel *src );
#define x264_predict_4x4_dc_left_ti x264_template(predict_4x4_dc_left_ti)
void x264_predict_4x4_dc_left_ti   ( pixel *src );
#define x264_predict_4x4_dc_top_ti x264_template(predict_4x4_dc_top_ti)
void x264_predict_4x4_dc_top_ti    ( pixel *src );
#define x264_predict_4x4_dc_128_ti x264_template(predict_4x4_dc_128_ti)
void x264_predict_4x4_dc_128_ti    ( pixel *src );
#define x264_predict_4x4_ddl_ti x264_template(predict_4x4_ddl_ti)
void x264_predict_4x4_ddl_ti       ( pixel *src );
#define x264_predict_4x4_ddr_ti x264_template(predict_4x4_ddr_ti)
void x264_predict_4x4_ddr_ti       ( pixel *src );
#define x264_predict_4x4_vr_ti x264_template(predict_4x4_vr_ti)
void x264_predict_4x4_vr_ti        ( pixel *src );
#define x264_predict_4x4_hd_ti x264_template(predict_4x4_hd_ti)
void x264_predict_4x4_hd_ti        ( pixel *src );
#define x264_predict_4x4_vl_ti x264_template(predict_4x4_vl_ti)
void x264_predict_4x4_vl_ti        ( pixel *src );
#define x264_predict_4x4_hu_ti x264_template(predict_4x4_hu_ti)
void x264_predict_4x4_hu_ti        ( pixel *src );

#endif
