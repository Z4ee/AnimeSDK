#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_FACEINFOCACHE_SCALETOSIZE_OFFSET UNITYSDK_OFFSET(0x7D8220)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int FontEngineUtils_FaceInfoCache_TypeDefinitionIndex = 77989;

	struct alignas(4) FontEngineUtils_FaceInfoCache
	{
		::System::Boolean loaded; // 0x10
		::System::Int32 samplingSize; // 0x14
		::System::Single ascentLine; // 0x18
		::System::Single descentLine; // 0x1C
		::System::Single underlineOffset; // 0x20
		::System::Single underlineThickness; // 0x24

		::System::Single ScaleToSize(::System::Single cachedValue, ::System::Int32 targetSize)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_FACEINFOCACHE_SCALETOSIZE_OFFSET))(this, cachedValue, targetSize);
		}
	};
}
