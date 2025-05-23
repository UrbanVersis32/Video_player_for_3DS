#if !defined(DEF_RAW_TYPES_H)
#define DEF_RAW_TYPES_H
#include <stdbool.h>
#include <stdint.h>
#include "system/util/log_enum_types.h"

//These definitions are based on (stolen from) library\ffmpeg\include\libavutil\pixfmt.h see it for more information.
typedef enum
{
	RAW_PIXEL_INVALID = -1,
	//YUV*.
	RAW_PIXEL_YUV410P,
	RAW_PIXEL_YUV411P,
	RAW_PIXEL_YUV420P,
	RAW_PIXEL_YUV420P9BE,
	RAW_PIXEL_YUV420P9LE,
	RAW_PIXEL_YUV420P10BE,
	RAW_PIXEL_YUV420P10LE,
	RAW_PIXEL_YUV420P12BE,
	RAW_PIXEL_YUV420P12LE,
	RAW_PIXEL_YUV420P14BE,
	RAW_PIXEL_YUV420P14LE,
	RAW_PIXEL_YUV420P16BE,
	RAW_PIXEL_YUV420P16LE,
	RAW_PIXEL_YUV422P,
	RAW_PIXEL_YUV422P9BE,
	RAW_PIXEL_YUV422P9LE,
	RAW_PIXEL_YUV422P10BE,
	RAW_PIXEL_YUV422P10LE,
	RAW_PIXEL_YUV422P12BE,
	RAW_PIXEL_YUV422P12LE,
	RAW_PIXEL_YUV422P14BE,
	RAW_PIXEL_YUV422P14LE,
	RAW_PIXEL_YUV422P16BE,
	RAW_PIXEL_YUV422P16LE,
	RAW_PIXEL_YUV440P,
	RAW_PIXEL_YUV440P10BE,
	RAW_PIXEL_YUV440P10LE,
	RAW_PIXEL_YUV440P12BE,
	RAW_PIXEL_YUV440P12LE,
	RAW_PIXEL_YUV444P,
	RAW_PIXEL_YUV444P9BE,
	RAW_PIXEL_YUV444P9LE,
	RAW_PIXEL_YUV444P10BE,
	RAW_PIXEL_YUV444P10LE,
	RAW_PIXEL_YUV444P12BE,
	RAW_PIXEL_YUV444P12LE,
	RAW_PIXEL_YUV444P14BE,
	RAW_PIXEL_YUV444P14LE,
	RAW_PIXEL_YUV444P16BE,
	RAW_PIXEL_YUV444P16LE,
	//YUVJ*.
	RAW_PIXEL_YUVJ411P,
	RAW_PIXEL_YUVJ420P,
	RAW_PIXEL_YUVJ422P,
	RAW_PIXEL_YUVJ440P,
	RAW_PIXEL_YUVJ444P,
	//YUVA*.
	RAW_PIXEL_YUVA420P,
	RAW_PIXEL_YUVA420P9BE,
	RAW_PIXEL_YUVA420P9LE,
	RAW_PIXEL_YUVA420P10BE,
	RAW_PIXEL_YUVA420P10LE,
	RAW_PIXEL_YUVA420P16BE,
	RAW_PIXEL_YUVA420P16LE,
	RAW_PIXEL_YUVA422P,
	RAW_PIXEL_YUVA422P9BE,
	RAW_PIXEL_YUVA422P9LE,
	RAW_PIXEL_YUVA422P10BE,
	RAW_PIXEL_YUVA422P10LE,
	RAW_PIXEL_YUVA422P16BE,
	RAW_PIXEL_YUVA422P16LE,
	RAW_PIXEL_YUVA444P,
	RAW_PIXEL_YUVA444P9BE,
	RAW_PIXEL_YUVA444P9LE,
	RAW_PIXEL_YUVA444P10BE,
	RAW_PIXEL_YUVA444P10LE,
	RAW_PIXEL_YUVA444P16BE,
	RAW_PIXEL_YUVA444P16LE,
	//UYVY*.
	RAW_PIXEL_UYVY422,
	//YUYV*.
	RAW_PIXEL_YUYV422,
	//YVYU*.
	RAW_PIXEL_YVYU422,
	//UYYVYY*.
	RAW_PIXEL_UYYVYY411,
	//RGB* (exclude RGBA).
	RAW_PIXEL_RGB121,
	RAW_PIXEL_RGB121_BYTE,
	RAW_PIXEL_RGB332,
	RAW_PIXEL_RGB444BE,
	RAW_PIXEL_RGB444LE,
	RAW_PIXEL_RGB555BE,
	RAW_PIXEL_RGB555LE,
	RAW_PIXEL_RGB565BE,
	RAW_PIXEL_RGB565LE,
	RAW_PIXEL_RGB888,
	RAW_PIXEL_RGB161616BE,
	RAW_PIXEL_RGB161616LE,
	//BGR* (exclude BGRA).
	RAW_PIXEL_BGR121,
	RAW_PIXEL_BGR121_BYTE,
	RAW_PIXEL_BGR332,
	RAW_PIXEL_BGR444BE,
	RAW_PIXEL_BGR444LE,
	RAW_PIXEL_BGR555BE,
	RAW_PIXEL_BGR555LE,
	RAW_PIXEL_BGR565BE,
	RAW_PIXEL_BGR565LE,
	RAW_PIXEL_BGR888,
	RAW_PIXEL_BGR161616BE,
	RAW_PIXEL_BGR161616LE,
	//GBR* (exclude GRBA).
	RAW_PIXEL_GBR888P,
	RAW_PIXEL_GBR999PBE,
	RAW_PIXEL_GBR999PLE,
	RAW_PIXEL_GBR101010PBE,
	RAW_PIXEL_GBR101010PLE,
	RAW_PIXEL_GBR121212PBE,
	RAW_PIXEL_GBR121212PLE,
	RAW_PIXEL_GBR141414PBE,
	RAW_PIXEL_GBR141414PLE,
	RAW_PIXEL_GBR161616PBE,
	RAW_PIXEL_GBR161616PLE,
	//ARGB*.
	RAW_PIXEL_ARGB8888,
	//ABGR*.
	RAW_PIXEL_ABGR8888,
	//RGBA*.
	RAW_PIXEL_RGBA8888,
	RAW_PIXEL_RGBA16161616BE,
	RAW_PIXEL_RGBA16161616LE,
	//BGRA*.
	RAW_PIXEL_BGRA8888,
	RAW_PIXEL_BGRA16161616BE,
	RAW_PIXEL_BGRA16161616LE,
	//GBRA*.
	RAW_PIXEL_GBRA8888P,
	RAW_PIXEL_GBRA10101010PBE,
	RAW_PIXEL_GBRA10101010PLE,
	RAW_PIXEL_GBRA12121212PBE,
	RAW_PIXEL_GBRA12121212PLE,
	RAW_PIXEL_GBRA16161616PBE,
	RAW_PIXEL_GBRA16161616PLE,
	//GRAY*.
	RAW_PIXEL_GRAY8,
	RAW_PIXEL_GRAY10BE,
	RAW_PIXEL_GRAY10LE,
	RAW_PIXEL_GRAY12BE,
	RAW_PIXEL_GRAY12LE,
	RAW_PIXEL_GRAY16BE,
	RAW_PIXEL_GRAY16LE,
	//GRAYALPHA*.
	RAW_PIXEL_GRAYALPHA88,
	RAW_PIXEL_GRAYALPHA1616BE,
	RAW_PIXEL_GRAYALPHA1616LE,

	RAW_PIXEL_MAX,
} Raw_pixel;

DEF_LOG_ENUM_DEBUG
(
	Raw_pixel,
	RAW_PIXEL_INVALID,
	RAW_PIXEL_YUV410P,
	RAW_PIXEL_YUV411P,
	RAW_PIXEL_YUV420P,
	RAW_PIXEL_YUV420P9BE,
	RAW_PIXEL_YUV420P9LE,
	RAW_PIXEL_YUV420P10BE,
	RAW_PIXEL_YUV420P10LE,
	RAW_PIXEL_YUV420P12BE,
	RAW_PIXEL_YUV420P12LE,
	RAW_PIXEL_YUV420P14BE,
	RAW_PIXEL_YUV420P14LE,
	RAW_PIXEL_YUV420P16BE,
	RAW_PIXEL_YUV420P16LE,
	RAW_PIXEL_YUV422P,
	RAW_PIXEL_YUV422P9BE,
	RAW_PIXEL_YUV422P9LE,
	RAW_PIXEL_YUV422P10BE,
	RAW_PIXEL_YUV422P10LE,
	RAW_PIXEL_YUV422P12BE,
	RAW_PIXEL_YUV422P12LE,
	RAW_PIXEL_YUV422P14BE,
	RAW_PIXEL_YUV422P14LE,
	RAW_PIXEL_YUV422P16BE,
	RAW_PIXEL_YUV422P16LE,
	RAW_PIXEL_YUV440P,
	RAW_PIXEL_YUV440P10BE,
	RAW_PIXEL_YUV440P10LE,
	RAW_PIXEL_YUV440P12BE,
	RAW_PIXEL_YUV440P12LE,
	RAW_PIXEL_YUV444P,
	RAW_PIXEL_YUV444P9BE,
	RAW_PIXEL_YUV444P9LE,
	RAW_PIXEL_YUV444P10BE,
	RAW_PIXEL_YUV444P10LE,
	RAW_PIXEL_YUV444P12BE,
	RAW_PIXEL_YUV444P12LE,
	RAW_PIXEL_YUV444P14BE,
	RAW_PIXEL_YUV444P14LE,
	RAW_PIXEL_YUV444P16BE,
	RAW_PIXEL_YUV444P16LE,
	RAW_PIXEL_YUVJ411P,
	RAW_PIXEL_YUVJ420P,
	RAW_PIXEL_YUVJ422P,
	RAW_PIXEL_YUVJ440P,
	RAW_PIXEL_YUVJ444P,
	RAW_PIXEL_YUVA420P,
	RAW_PIXEL_YUVA420P9BE,
	RAW_PIXEL_YUVA420P9LE,
	RAW_PIXEL_YUVA420P10BE,
	RAW_PIXEL_YUVA420P10LE,
	RAW_PIXEL_YUVA420P16BE,
	RAW_PIXEL_YUVA420P16LE,
	RAW_PIXEL_YUVA422P,
	RAW_PIXEL_YUVA422P9BE,
	RAW_PIXEL_YUVA422P9LE,
	RAW_PIXEL_YUVA422P10BE,
	RAW_PIXEL_YUVA422P10LE,
	RAW_PIXEL_YUVA422P16BE,
	RAW_PIXEL_YUVA422P16LE,
	// RAW_PIXEL_YUVA444P,		//Too many, removed infrequently used values.
	// RAW_PIXEL_YUVA444P9BE,
	// RAW_PIXEL_YUVA444P9LE,
	// RAW_PIXEL_YUVA444P10BE,
	// RAW_PIXEL_YUVA444P10LE,
	// RAW_PIXEL_YUVA444P16BE,
	// RAW_PIXEL_YUVA444P16LE,
	RAW_PIXEL_UYVY422,
	RAW_PIXEL_YUYV422,
	RAW_PIXEL_YVYU422,
	RAW_PIXEL_UYYVYY411,
	RAW_PIXEL_RGB121,
	RAW_PIXEL_RGB121_BYTE,
	RAW_PIXEL_RGB332,
	RAW_PIXEL_RGB444BE,
	RAW_PIXEL_RGB444LE,
	RAW_PIXEL_RGB555BE,
	RAW_PIXEL_RGB555LE,
	RAW_PIXEL_RGB565BE,
	RAW_PIXEL_RGB565LE,
	RAW_PIXEL_RGB888,
	RAW_PIXEL_RGB161616BE,
	RAW_PIXEL_RGB161616LE,
	RAW_PIXEL_BGR121,
	RAW_PIXEL_BGR121_BYTE,
	RAW_PIXEL_BGR332,
	RAW_PIXEL_BGR444BE,
	RAW_PIXEL_BGR444LE,
	RAW_PIXEL_BGR555BE,
	RAW_PIXEL_BGR555LE,
	RAW_PIXEL_BGR565BE,
	RAW_PIXEL_BGR565LE,
	RAW_PIXEL_BGR888,
	RAW_PIXEL_BGR161616BE,
	RAW_PIXEL_BGR161616LE,
	RAW_PIXEL_GBR888P,
	RAW_PIXEL_GBR999PBE,
	RAW_PIXEL_GBR999PLE,
	RAW_PIXEL_GBR101010PBE,
	RAW_PIXEL_GBR101010PLE,
	RAW_PIXEL_GBR121212PBE,
	RAW_PIXEL_GBR121212PLE,
	RAW_PIXEL_GBR141414PBE,
	RAW_PIXEL_GBR141414PLE,
	RAW_PIXEL_GBR161616PBE,
	RAW_PIXEL_GBR161616PLE,
	RAW_PIXEL_ARGB8888,
	RAW_PIXEL_ABGR8888,
	RAW_PIXEL_RGBA8888,
	RAW_PIXEL_RGBA16161616BE,
	RAW_PIXEL_RGBA16161616LE,
	RAW_PIXEL_BGRA8888,
	RAW_PIXEL_BGRA16161616BE,
	RAW_PIXEL_BGRA16161616LE,
	RAW_PIXEL_GBRA8888P,
	RAW_PIXEL_GBRA10101010PBE,
	RAW_PIXEL_GBRA10101010PLE,
	RAW_PIXEL_GBRA12121212PBE,
	RAW_PIXEL_GBRA12121212PLE,
	RAW_PIXEL_GBRA16161616PBE,
	RAW_PIXEL_GBRA16161616PLE,
	RAW_PIXEL_GRAY8,
	RAW_PIXEL_GRAY10BE,
	RAW_PIXEL_GRAY10LE,
	RAW_PIXEL_GRAY12BE,
	RAW_PIXEL_GRAY12LE,
	RAW_PIXEL_GRAY16BE,
	RAW_PIXEL_GRAY16LE,
	RAW_PIXEL_GRAYALPHA88,
	RAW_PIXEL_GRAYALPHA1616BE,
	RAW_PIXEL_GRAYALPHA1616LE,
	RAW_PIXEL_MAX
)

//These definitions are based on (stolen from) library\ffmpeg\include\libavutil\samplefmt.h see it for more information.
typedef enum
{
	RAW_SAMPLE_INVALID = -1,
	//Integer.
	RAW_SAMPLE_U8,
	RAW_SAMPLE_U8P,
	RAW_SAMPLE_S16,
	RAW_SAMPLE_S16P,
	RAW_SAMPLE_S32,
	RAW_SAMPLE_S32P,
	RAW_SAMPLE_S64,
	RAW_SAMPLE_S64P,
	//Float.
	RAW_SAMPLE_FLOAT32,
	RAW_SAMPLE_FLOAT32P,
	//Double.
	RAW_SAMPLE_DOUBLE64,
	RAW_SAMPLE_DOUBLE64P,

	RAW_SAMPLE_MAX,
} Raw_sample;

DEF_LOG_ENUM_DEBUG
(
	Raw_sample,
	RAW_SAMPLE_INVALID,
	RAW_SAMPLE_U8,
	RAW_SAMPLE_U8P,
	RAW_SAMPLE_S16,
	RAW_SAMPLE_S16P,
	RAW_SAMPLE_S32,
	RAW_SAMPLE_S32P,
	RAW_SAMPLE_S64,
	RAW_SAMPLE_S64P,
	RAW_SAMPLE_FLOAT32,
	RAW_SAMPLE_FLOAT32P,
	RAW_SAMPLE_DOUBLE64,
	RAW_SAMPLE_DOUBLE64P,
	RAW_SAMPLE_MAX
)

#endif //!defined(DEF_RAW_TYPES_H)
