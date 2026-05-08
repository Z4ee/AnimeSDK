#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UI_EXTENSION_NAP_FACEINFO_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x81C8D0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_FaceInfo_TypeDefinitionIndex = 72404;

	struct alignas(4) NAP_FaceInfo
	{
		::System::Single ascentLine; // 0x10
		::System::Single descentLine; // 0x14
		::System::Single underlineOffset; // 0x18
		::System::Single underlineThickness; // 0x1C

		::System::Single get_lineHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_FACEINFO_GET_LINEHEIGHT_OFFSET))(this);
		}
	};
}
