#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RUBYMEASURERESULT_GET_RUBYCENTER_OFFSET UNITYSDK_OFFSET(0xA68BD0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RubyFeature_RubyMeasureResult_TypeDefinitionIndex = 74241;

	struct alignas(4) RubyFeature_RubyMeasureResult
	{
		::System::Single rubyLeft; // 0x10
		::System::Single rubyRight; // 0x14
		::System::Single rubyBottom; // 0x18
		::System::Single rubyTop; // 0x1C
		::System::Single rubyWidth; // 0x20
		::System::Single rubyHeight; // 0x24
		::System::Single rubyHeightOffset; // 0x28
		::System::Single overhangScale; // 0x2C

		::System::Single get_rubyCenter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RUBYMEASURERESULT_GET_RUBYCENTER_OFFSET))(this);
		}
	};
}
