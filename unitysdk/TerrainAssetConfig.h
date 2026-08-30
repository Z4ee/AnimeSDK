#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define TERRAINASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x104F4410)

inline static constexpr unsigned int TerrainAssetConfig_TypeDefinitionIndex = 47797;

class TerrainAssetConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* SnowTexPath; // 0x18
	::System::Boolean UseHeightBlend; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TERRAINASSETCONFIG__CTOR_OFFSET))(this);
	}
};
