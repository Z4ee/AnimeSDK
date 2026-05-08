#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/VideoColorData_VideoEntry.h"

namespace System { class String; }

#define VIDEOCOLORDATA___C__DISPLAYCLASS2_0__ADDVIDEODATA_B__0_OFFSET UNITYSDK_OFFSET(0x1AA305E0)
#define VIDEOCOLORDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA305D0)

inline static constexpr unsigned int VideoColorData___c__DisplayClass2_0_TypeDefinitionIndex = 59799;

class VideoColorData___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::String* path; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOCOLORDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddVideoData_b__0(::VideoColorData_VideoEntry e)
	{
		return ((::System::Boolean(*)(::PVOID, ::VideoColorData_VideoEntry))((::PBYTE)hIl2Cpp + VIDEOCOLORDATA___C__DISPLAYCLASS2_0__ADDVIDEODATA_B__0_OFFSET))(this, e);
	}
};
