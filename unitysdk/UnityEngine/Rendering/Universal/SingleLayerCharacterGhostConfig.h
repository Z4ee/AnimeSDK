#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLELAYERCHARACTERGHOSTCONFIG_TOVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA39780)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SingleLayerCharacterGhostConfig_TypeDefinitionIndex = 27616;

	struct alignas(4) SingleLayerCharacterGhostConfig
	{
		::System::Single direction; // 0x10
		::System::Single radius; // 0x14
		::System::Single intensity; // 0x18
		::UnityEngine::Color color; // 0x1C

		/*
		::System::Void ToVectorArray(::Il2CppArray<::UnityEngine::Vector4>*& output, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLELAYERCHARACTERGHOSTCONFIG_TOVECTORARRAY_OFFSET))(this, output, startIndex);
		}
		*/
	};
}
