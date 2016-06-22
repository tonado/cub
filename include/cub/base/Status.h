#ifndef H5712E60C_DEF5_4A3B_93C0_C074CD80C63B
#define H5712E60C_DEF5_4A3B_93C0_C074CD80C63B

#include <cub/cub.h>
#include <cub/base/BaseTypes.h>

CUB_NS_BEGIN

typedef U32 Status;

CUB_NS_END

const CUB_NS::U16 CUB_INVALID_U16 = 0xFFFF;
const CUB_NS::U32 CUB_INVALID_U32 = 0xFFFFFFFF;

enum CubStatus : CUB_NS::Status
{
	CUB_SUCCESS   = 0,
	CUB_FATAL_BUG = 0xFFFFFFFE,
	CUB_FAILURE   = CUB_INVALID_U32
};

#define __CUB_FAILED(result)   (result != CUB_SUCCESS)
#define __CUB_SUCCESS(result)  (result == CUB_SUCCESS)

#endif
