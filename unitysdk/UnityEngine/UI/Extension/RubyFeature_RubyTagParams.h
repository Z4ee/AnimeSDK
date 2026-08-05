#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class String; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RubyFeature_RubyTagParams_TypeDefinitionIndex = 74240;

	struct alignas(8) RubyFeature_RubyTagParams
	{
		::System::String* annotation; // 0x10
		::System::Boolean hasColorOverride; // 0x18
		::UnityEngine::Color32 color; // 0x1C
		::System::Single scale; // 0x20
		::System::Boolean hasOffsetOverride; // 0x24
		::System::Single offsetRatio; // 0x28
		::System::Boolean hasMaxOverhang; // 0x2C
		::System::Single maxOverhang; // 0x30
	};
}
