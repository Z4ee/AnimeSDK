#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/VideoColorData_VideoEntry.h"

namespace System { class String; }

#define VIDEOLIGHTSYNC___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC0DB0)
#define VIDEOLIGHTSYNC___C__DISPLAYCLASS11_0__UPDATEVIDEONAME_B__0_OFFSET UNITYSDK_OFFSET(0x18EC0DC0)

inline static constexpr unsigned int VideoLightSync___c__DisplayClass11_0_TypeDefinitionIndex = 66828;

class VideoLightSync___c__DisplayClass11_0 : public ::System::Object
{
public:
	::System::String* videoName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOLIGHTSYNC___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UpdateVideoName_b__0(::VideoColorData_VideoEntry e)
	{
		return ((::System::Boolean(*)(::PVOID, ::VideoColorData_VideoEntry))((::PBYTE)hIl2Cpp + VIDEOLIGHTSYNC___C__DISPLAYCLASS11_0__UPDATEVIDEONAME_B__0_OFFSET))(this, e);
	}
};
