#ifndef X264_TIC6X_DEBLOCK_H
#define X264_TIC6X_DEBLOCK_H

#define x264_deblock_v_luma_ti x264_template(deblock_v_luma_ti)
void x264_deblock_v_luma_ti   ( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
#define x264_deblock_h_luma_ti x264_template(deblock_h_luma_ti)
void x264_deblock_h_luma_ti   ( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
#define x264_deblock_v_chroma_ti x264_template(deblock_v_chroma_ti)
void x264_deblock_v_chroma_ti ( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
#define x264_deblock_h_chroma_ti x264_template(deblock_h_chroma_ti)
void x264_deblock_h_chroma_ti ( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );

#define x264_deblock_v_luma_intra_ti x264_template(deblock_v_luma_intra_ti)
void x264_deblock_v_luma_intra_ti   ( pixel *pix, intptr_t stride, int alpha, int beta );
#define x264_deblock_h_luma_intra_ti x264_template(deblock_h_luma_intra_ti)
void x264_deblock_h_luma_intra_ti   ( pixel *pix, intptr_t stride, int alpha, int beta );
#define x264_deblock_v_chroma_intra_ti x264_template(deblock_v_chroma_intra_ti)
void x264_deblock_v_chroma_intra_ti ( pixel *pix, intptr_t stride, int alpha, int beta );
#define x264_deblock_h_chroma_intra_ti x264_template(deblock_h_chroma_intra_ti)
void x264_deblock_h_chroma_intra_ti ( pixel *pix, intptr_t stride, int alpha, int beta );

#define x264_deblock_strength_ti x264_template(deblock_strength_ti)
void x264_deblock_strength_ti ( uint8_t nnz[X264_SCAN8_SIZE], int8_t ref[2][X264_SCAN8_LUMA_SIZE], int16_t mv[2][X264_SCAN8_LUMA_SIZE][2], uint8_t bs[2][8][4] );

#endif
