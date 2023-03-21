#ifndef X264_TIC6X_PIXEL_H
#define X264_TIC6X_PIXEL_H

#define x264_pixel_sad_16x16_ti x264_template(pixel_sad_16x16_ti)
int x264_pixel_sad_16x16_ti ( pixel *, intptr_t, pixel *, intptr_t );
#define x264_pixel_sad_16x8_ti x264_template(pixel_sad_16x8_ti)
int x264_pixel_sad_16x8_ti  ( pixel *, intptr_t, pixel *, intptr_t );
#define x264_pixel_sad_8x16_ti x264_template(pixel_sad_8x16_ti)
int x264_pixel_sad_8x16_ti  ( pixel *, intptr_t, pixel *, intptr_t );
#define x264_pixel_sad_8x8_ti x264_template(pixel_sad_8x8_ti)
int x264_pixel_sad_8x8_ti   ( pixel *, intptr_t, pixel *, intptr_t );
#define x264_pixel_sad_8x4_ti x264_template(pixel_sad_8x4_ti)
int x264_pixel_sad_8x4_ti   ( pixel *, intptr_t, pixel *, intptr_t );
#define x264_pixel_sad_4x8_ti x264_template(pixel_sad_4x8_ti)
int x264_pixel_sad_4x8_ti   ( pixel *, intptr_t, pixel *, intptr_t );
#define x264_pixel_sad_4x4_ti x264_template(pixel_sad_4x4_ti)
int x264_pixel_sad_4x4_ti   ( pixel *, intptr_t, pixel *, intptr_t );

#define x264_pixel_sad_x4_16x16_ti x264_template(pixel_sad_x4_16x16_ti)
void x264_pixel_sad_x4_16x16_ti ( pixel *fenc, pixel *pix0, pixel *pix1,pixel *pix2, pixel *pix3, intptr_t i_stride, int scores[4] );
#define x264_pixel_sad_x4_16x8_ti x264_template(pixel_sad_x4_16x8_ti)
void x264_pixel_sad_x4_16x8_ti  ( pixel *fenc, pixel *pix0, pixel *pix1,pixel *pix2, pixel *pix3, intptr_t i_stride, int scores[4] );
#define x264_pixel_sad_x4_8x16_ti x264_template(pixel_sad_x4_8x16_ti)
void x264_pixel_sad_x4_8x16_ti  ( pixel *fenc, pixel *pix0, pixel *pix1,pixel *pix2, pixel *pix3, intptr_t i_stride, int scores[4] );
#define x264_pixel_sad_x4_8x8_ti x264_template(pixel_sad_x4_8x8_ti)
void x264_pixel_sad_x4_8x8_ti   ( pixel *fenc, pixel *pix0, pixel *pix1,pixel *pix2, pixel *pix3, intptr_t i_stride, int scores[4] );

#define x264_pixel_sad_x3_16x16_ti x264_template(pixel_sad_x3_16x16_ti)
void x264_pixel_sad_x3_16x16_ti ( pixel *fenc, pixel *pix0, pixel *pix1, pixel *pix2, intptr_t i_stride, int scores[3] );
#define x264_pixel_sad_x3_16x8_ti x264_template(pixel_sad_x3_16x8_ti)
void x264_pixel_sad_x3_16x8_ti  ( pixel *fenc, pixel *pix0, pixel *pix1, pixel *pix2, intptr_t i_stride, int scores[3] );
#define x264_pixel_sad_x3_8x16_ti x264_template(pixel_sad_x3_8x16_ti)
void x264_pixel_sad_x3_8x16_ti  ( pixel *fenc, pixel *pix0, pixel *pix1, pixel *pix2, intptr_t i_stride, int scores[3] );
#define x264_pixel_sad_x3_8x8_ti x264_template(pixel_sad_x3_8x8_ti)
void x264_pixel_sad_x3_8x8_ti   ( pixel *fenc, pixel *pix0, pixel *pix1, pixel *pix2, intptr_t i_stride, int scores[3] );

#define x264_pixel_satd_4x4_ti x264_template(pixel_satd_4x4_ti)
int x264_pixel_satd_4x4_ti     ( pixel *, intptr_t, pixel *, intptr_t );
#define x264_pixel_satd_8x8_ti x264_template(pixel_satd_8x8_ti)
int x264_pixel_satd_8x8_ti     ( pixel *, intptr_t, pixel *, intptr_t );

#define x264_intra_satd_x3_4x4_ti x264_template(intra_satd_x3_4x4_ti)
void x264_intra_satd_x3_4x4_ti   ( pixel *fenc, pixel *fdec, int res[3] );
#define x264_intra_satd_x3_8x8c_ti x264_template(intra_satd_x3_8x8c_ti)
void x264_intra_satd_x3_8x8c_ti  ( pixel *fenc, pixel *fdec, int res[3] );
#define x264_intra_satd_x3_16x16_ti x264_template(intra_satd_x3_16x16_ti)
void x264_intra_satd_x3_16x16_ti ( pixel *fenc, pixel *fdec, int res[3] );

#define x264_intra_satd_x4_4x4_h_ti x264_template(intra_satd_x4_4x4_h_ti)
void x264_intra_satd_x4_4x4_h_ti ( pixel *fenc, pixel *fdec, int res[9] );
#define x264_intra_satd_x4_4x4_v_ti x264_template(intra_satd_x4_4x4_v_ti)
void x264_intra_satd_x4_4x4_v_ti ( pixel *fenc, pixel *fdec, int res[9] );

#define x264_pixel_ssd_8x8_ti x264_template(pixel_ssd_8x8_ti)
int x264_pixel_ssd_8x8_ti    ( pixel *, intptr_t, pixel *, intptr_t );
#define x264_pixel_var2_8x8_ti x264_template(pixel_var2_8x8_ti)
int x264_pixel_var2_8x8_ti   ( pixel *, intptr_t, pixel *, intptr_t, int * );

int pixel_satd_16x16_ti( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 );

int pixel_satd_16x8_ti( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 );

int pixel_satd_8x16_ti( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 );

int pixel_satd_8x4_ti( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 );

int pixel_satd_4x8_ti( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 );

#define x264_predict_4x4_v_ti x264_template(predict_4x4_v_ti)
void x264_predict_4x4_v_ti    ( pixel *src );
#define x264_predict_4x4_h_ti x264_template(predict_4x4_h_ti)
void x264_predict_4x4_h_ti    ( pixel *src );
#define x264_predict_4x4_dc_ti x264_template(predict_4x4_dc_ti)
void x264_predict_4x4_dc_ti   ( pixel *src );
#define x264_predict_8x8c_v_ti x264_template(predict_8x8c_v_ti)
void x264_predict_8x8c_v_ti   ( pixel *src );
#define x264_predict_8x8c_h_ti x264_template(predict_8x8c_h_ti)
void x264_predict_8x8c_h_ti   ( pixel *src );
#define x264_predict_8x8c_dc_ti x264_template(predict_8x8c_dc_ti)
void x264_predict_8x8c_dc_ti  ( pixel *src );
#define x264_predict_16x16_v_ti x264_template(predict_16x16_v_ti)
void x264_predict_16x16_v_ti  ( pixel *src );
#define x264_predict_16x16_h_ti x264_template(predict_16x16_h_ti)
void x264_predict_16x16_h_ti  ( pixel *src );
#define x264_predict_16x16_dc_ti x264_template(predict_16x16_dc_ti)
void x264_predict_16x16_dc_ti ( pixel *src );

#endif
