#ifndef X264_TIC6X_MC_H
#define X264_TIC6X_MC_H

#define x264_mc_copy_w16_ti x264_template(mc_copy_w16_ti)
#define x264_mc_copy_w16_ti x264_template(mc_copy_w16_ti)
void x264_mc_copy_w16_ti ( pixel *dst, intptr_t dst_stride, pixel *src, intptr_t src_stride, int i_height );
#define x264_mc_copy_w8_ti x264_template(mc_copy_w8_ti)
#define x264_mc_copy_w8_ti x264_template(mc_copy_w8_ti)
void x264_mc_copy_w8_ti  ( pixel *dst, intptr_t dst_stride, pixel *src, intptr_t src_stride, int i_height );
#define x264_mc_copy_w4_ti x264_template(mc_copy_w4_ti)
#define x264_mc_copy_w4_ti x264_template(mc_copy_w4_ti)
void x264_mc_copy_w4_ti  ( pixel *dst, intptr_t dst_stride, pixel *src, intptr_t src_stride, int i_height );

#define x264_plane_copy_ti x264_template(plane_copy_ti)
#define x264_plane_copy_ti x264_template(plane_copy_ti)
void x264_plane_copy_ti              ( pixel *dst, intptr_t i_dst, pixel *src, intptr_t i_src, int w, int h );
#define x264_plane_copy_interleave_ti x264_template(plane_copy_interleave_ti)
#define x264_plane_copy_interleave_ti x264_template(plane_copy_interleave_ti)
void x264_plane_copy_interleave_ti   ( pixel *dst,  intptr_t i_dst, pixel *srcu, intptr_t i_srcu, pixel *srcv, intptr_t i_srcv, int w, int h );
#define x264_plane_copy_deinterleave_ti x264_template(plane_copy_deinterleave_ti)
#define x264_plane_copy_deinterleave_ti x264_template(plane_copy_deinterleave_ti)
void x264_plane_copy_deinterleave_ti ( pixel *dstu, intptr_t i_dstu, pixel *dstv, intptr_t i_dstv, pixel *src,  intptr_t i_src, int w, int h );
#define x264_plane_copy_deinterlace_ti x264_template(plane_copy_deinterlace_ti)
#define x264_plane_copy_deinterlace_ti x264_template(plane_copy_deinterlace_ti)
void x264_plane_copy_deinterlace_ti  (
		pixel *srcy, intptr_t i_srcy, pixel *dsty, intptr_t i_dsty,
		pixel *srcc, intptr_t i_srcc, pixel *dstc, intptr_t i_dstc,
		int i_width, int i_height );
#define x264_plane_deinterlace_ti x264_template(plane_deinterlace_ti)
#define x264_plane_deinterlace_ti x264_template(plane_deinterlace_ti)
void x264_plane_deinterlace_ti       ( pixel *pixy, intptr_t i_pixy, pixel *pixc, intptr_t i_pixc, int i_width, int i_height );

#define x264_store_interleave_chroma_ti x264_template(store_interleave_chroma_ti)
#define x264_store_interleave_chroma_ti x264_template(store_interleave_chroma_ti)
void x264_store_interleave_chroma_ti       ( pixel *dst, intptr_t i_dst, pixel *srcu, pixel *srcv, int height );
#define x264_load_deinterleave_chroma_fenc_ti x264_template(load_deinterleave_chroma_fenc_ti)
#define x264_load_deinterleave_chroma_fenc_ti x264_template(load_deinterleave_chroma_fenc_ti)
void x264_load_deinterleave_chroma_fenc_ti ( pixel *dst, pixel *src, intptr_t i_src, int height );
#define x264_load_deinterleave_chroma_fdec_ti x264_template(load_deinterleave_chroma_fdec_ti)
#define x264_load_deinterleave_chroma_fdec_ti x264_template(load_deinterleave_chroma_fdec_ti)
void x264_load_deinterleave_chroma_fdec_ti ( pixel *dst, pixel *src, intptr_t i_src, int height );

#define x264_frame_init_lowres_core_ti x264_template(frame_init_lowres_core_ti)
#define x264_frame_init_lowres_core_ti x264_template(frame_init_lowres_core_ti)
void x264_frame_init_lowres_core_ti ( pixel *src0, pixel *dst0, pixel *dsth, pixel *dstv, pixel *dstc, intptr_t src_stride, intptr_t dst_stride, int width, int height );


#define x264_pixel_avg_w8e_ti x264_template(pixel_avg_w8e_ti)
#define x264_pixel_avg_w8e_ti x264_template(pixel_avg_w8e_ti)
void x264_pixel_avg_w8e_ti ( pixel *,  intptr_t, pixel *, intptr_t, pixel *, intptr_t, int, int );
#define x264_pixel_avg_w8o_ti x264_template(pixel_avg_w8o_ti)
#define x264_pixel_avg_w8o_ti x264_template(pixel_avg_w8o_ti)
void x264_pixel_avg_w8o_ti ( pixel *,  intptr_t, pixel *, intptr_t, pixel *, intptr_t, int, int );
#define x264_pixel_avg_w12_ti x264_template(pixel_avg_w12_ti)
#define x264_pixel_avg_w12_ti x264_template(pixel_avg_w12_ti)
void x264_pixel_avg_w12_ti ( pixel *,  intptr_t, pixel *, intptr_t, pixel *, intptr_t, int, int );
#define x264_pixel_avg_w16_ti x264_template(pixel_avg_w16_ti)
#define x264_pixel_avg_w16_ti x264_template(pixel_avg_w16_ti)
void x264_pixel_avg_w16_ti ( pixel *,  intptr_t, pixel *, intptr_t, pixel *, intptr_t, int, int );
#define x264_pixel_avg_w20_ti x264_template(pixel_avg_w20_ti)
#define x264_pixel_avg_w20_ti x264_template(pixel_avg_w20_ti)
void x264_pixel_avg_w20_ti ( pixel *,  intptr_t, pixel *, intptr_t, pixel *, intptr_t, int, int );

#define x264_pixel_avg_ti x264_template(pixel_avg_ti)
#define x264_pixel_avg_ti x264_template(pixel_avg_ti)
void x264_pixel_avg_ti( pixel *restrict dst,  intptr_t i_dst_stride,
                              pixel *restrict src1, intptr_t i_src1_stride,
                              pixel *restrict src2, intptr_t i_src2_stride, int i_width, int i_height );


#define x264_hpel_filter_v_ti x264_template(hpel_filter_v_ti)
#define x264_hpel_filter_v_ti x264_template(hpel_filter_v_ti)
void x264_hpel_filter_v_ti( pixel *dst, pixel *src, intptr_t stride, int width, int height );
#define x264_hpel_filter_h_ti x264_template(hpel_filter_h_ti)
#define x264_hpel_filter_h_ti x264_template(hpel_filter_h_ti)
void x264_hpel_filter_h_ti( pixel *dst, pixel *src, intptr_t stride, int width, int height );

#define x264_hpel_filter_ti x264_template(hpel_filter_ti)
#define x264_hpel_filter_ti x264_template(hpel_filter_ti)
void x264_hpel_filter_ti( pixel *restrict dsth, pixel *restrict dstv, pixel *restrict dstc, pixel *restrict src,
                         intptr_t stride, int width, int height, int16_t *buf );

#define x264_mc_chroma_w8_ti x264_template(mc_chroma_w8_ti)
#define x264_mc_chroma_w8_ti x264_template(mc_chroma_w8_ti)
void x264_mc_chroma_w8_ti ( pixel *dstu, pixel *dstv, intptr_t i_dst_stride, pixel *src, intptr_t i_src_stride, int mvx, int mvy, int i_width, int i_height );
#define x264_mc_chroma_w4_ti x264_template(mc_chroma_w4_ti)
#define x264_mc_chroma_w4_ti x264_template(mc_chroma_w4_ti)
void x264_mc_chroma_w4_ti ( pixel *dstu, pixel *dstv, intptr_t i_dst_stride, pixel *src, intptr_t i_src_stride, int mvx, int mvy, int i_width, int i_height );

#define x264_mc_chroma_ti x264_template(mc_chroma_ti)
#define x264_mc_chroma_ti x264_template(mc_chroma_ti)
void x264_mc_chroma_ti( pixel *restrict dstu, pixel *restrict dstv, intptr_t i_dst_stride,
                       pixel *restrict src, intptr_t i_src_stride,
                       int mvx, int mvy,
                       int i_width, int i_height );

#endif
