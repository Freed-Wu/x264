#ifndef X264_TIC6X_QUANT_H
#define X264_TIC6X_QUANT_H

#define x264_quant_4x4_ti x264_template(quant_4x4_ti)
int x264_quant_4x4_ti ( dctcoef dct[16], udctcoef mf[16], udctcoef bias[16] );
#define x264_quant_4x4_dc_ti x264_template(quant_4x4_dc_ti)
int x264_quant_4x4_dc_ti ( dctcoef dct[16], int mf, int bias );
#define x264_quant_2x2_dc_ti x264_template(quant_2x2_dc_ti)
int x264_quant_2x2_dc_ti ( dctcoef dct[4], int mf, int bias );

#define x264_dequant_4x4_shl_ti x264_template(dequant_4x4_shl_ti)
void x264_dequant_4x4_shl_ti( dctcoef dct[16], int dequant_mf[16], int qbits );
#define x264_dequant_4x4_shr_ti x264_template(dequant_4x4_shr_ti)
void x264_dequant_4x4_shr_ti( dctcoef dct[16], int dequant_mf[16], int qbits, int bias );

#define x264_dequant_4x4_dc_shl_ti x264_template(dequant_4x4_dc_shl_ti)
void x264_dequant_4x4_dc_shl_ti( dctcoef dct[16], int dequant_mf, int qbits );
#define x264_dequant_4x4_dc_shr_ti x264_template(dequant_4x4_dc_shr_ti)
void x264_dequant_4x4_dc_shr_ti( dctcoef dct[16], int dequant_mf, int qbits, int bias );

#define x264_decimate_score16_ti x264_template(decimate_score16_ti)
int x264_decimate_score16_ti( dctcoef *dct );

#define x264_coeff_last16_ti x264_template(coeff_last16_ti)
int x264_coeff_last16_ti( dctcoef *dct );

void dequant_4x4_ti( dctcoef dct[16], int dequant_mf[6][16], int i_qp );

void dequant_4x4_dc_ti( dctcoef dct[16], int dequant_mf[6][16], int i_qp );


const int x264_dequant_div_lut[QP_MAX+1][2] = /* { qp/6, qp%6 } */
    {
        { 0, 0}, { 0, 1}, { 0, 2}, { 0, 3}, { 0, 4}, { 0, 5}, /* QP: [ 0 ~  5] */
        { 1, 0}, { 1, 1}, { 1, 2}, { 1, 3}, { 1, 4}, { 1, 5}, /* QP: [ 6 ~ 11] */
        { 2, 0}, { 2, 1}, { 2, 2}, { 2, 3}, { 2, 4}, { 2, 5}, /* QP: [12 ~ 17] */
        { 3, 0}, { 3, 1}, { 3, 2}, { 3, 3}, { 3, 4}, { 3, 5}, /* QP: [18 ~ 23] */
        { 4, 0}, { 4, 1}, { 4, 2}, { 4, 3}, { 4, 4}, { 4, 5}, /* QP: [24 ~ 29] */
        { 5, 0}, { 5, 1}, { 5, 2}, { 5, 3}, { 5, 4}, { 5, 5}, /* QP: [30 ~ 35] */
        { 6, 0}, { 6, 1}, { 6, 2}, { 6, 3}, { 6, 4}, { 6, 5}, /* QP: [36 ~ 41] */
        { 7, 0}, { 7, 1}, { 7, 2}, { 7, 3}, { 7, 4}, { 7, 5}, /* QP: [42 ~ 47] */
        { 8, 0}, { 8, 1}, { 8, 2}, { 8, 3}, { 8, 4}, { 8, 5}, /* QP: [48 ~ 53] */
        { 9, 0}, { 9, 1}, { 9, 2}, { 9, 3}, { 9, 4}, { 9, 5}, /* QP: [54 ~ 59] */
        {10, 0}, {10, 1}, {10, 2}, {10, 3}, {10, 4}, {10, 5}, /* QP: [60 ~ 65] */
        {11, 0}, {11, 1}, {11, 2}, {11, 3}                    /* QP: [66 ~ 69] */
    };

#endif
