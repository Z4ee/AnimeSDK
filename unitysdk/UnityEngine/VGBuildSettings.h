#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine
{
	inline static constexpr unsigned int VGBuildSettings_TypeDefinitionIndex = 4089;

	struct alignas(8) VGBuildSettings
	{
		::System::Boolean debugMode; // 0x10
		::System::Boolean encode; // 0x11
		::System::Single precision; // 0x14
		::System::Boolean saveRes; // 0x18
		::System::UInt32 clusterSize; // 0x1C
		::System::UInt32 seekIteratorCount; // 0x20
		::System::String* guid; // 0x28
	};
}
