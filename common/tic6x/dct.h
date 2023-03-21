#ifndef X264_TIC6X_DCT_H
#define X264_TIC6X_DCT_H

#define x264_sub4x4_dct_ti x264_template(sub4x4_dct_ti)
void x264_sub4x4_dct_ti     ( dctcoef dct[16], pixel *pix1, pixel *pix2 );
#define x264_add4x4_idct_ti x264_template(add4x4_idct_ti)
void x264_add4x4_idct_ti    ( pixel *p_dst, dctcoef dct[16] );

#define x264_sub8x8_dct_ti x264_template(sub8x8_dct_ti)
void x264_sub8x8_dct_ti     ( dctcoef dct[4][16], pixel *pix1, pixel *pix2 );
#define x264_sub8x8_dct_dc_ti x264_template(sub8x8_dct_dc_ti)
void x264_sub8x8_dct_dc_ti  ( dctcoef dct[4], pixel *pix1, pixel *pix2 );
#define x264_add8x8_idct_ti x264_template(add8x8_idct_ti)
void x264_add8x8_idct_ti    ( pixel *p_dst, dctcoef dct[4][16] );
#define x264_add8x8_idct_dc_ti x264_template(add8x8_idct_dc_ti)
void x264_add8x8_idct_dc_ti ( pixel *p_dst, dctcoef dct[4] );

#define x264_add16x16_idct_ti x264_template(add16x16_idct_ti)
void x264_add16x16_idct_ti( pixel *p_dst, dctcoef dct[16][16] );
#define x264_sub16x16_dct_ti x264_template(sub16x16_dct_ti)
void x264_sub16x16_dct_ti( dctcoef dct[16][16], pixel *pix1, pixel *pix2 );
#define x264_add16x16_idct_dc_ti x264_template(add16x16_idct_dc_ti)
void x264_add16x16_idct_dc_ti ( pixel *p_dst, dctcoef dct[16] );

#define x264_dct4x4dc_ti x264_template(dct4x4dc_ti)
void x264_dct4x4dc_ti   ( dctcoef d[16] );
#define x264_idct4x4dc_ti x264_template(idct4x4dc_ti)
void x264_idct4x4dc_ti  ( dctcoef d[16] );

#define x264_zigzag_scan_4x4_frame_ti x264_template(zigzag_scan_4x4_frame_ti)
void x264_zigzag_scan_4x4_frame_ti( dctcoef level[16], dctcoef dct[16] );

#endif
