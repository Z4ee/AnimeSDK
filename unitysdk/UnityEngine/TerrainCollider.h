#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"

namespace UnityEngine { class TerrainData; }

#define UNITYENGINE_TERRAINCOLLIDER_SET_TERRAINDATA_OFFSET UNITYSDK_OFFSET(0x1F474CB0)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainCollider_TypeDefinitionIndex = 5836;

	class TerrainCollider : public ::UnityEngine::Collider
	{
	public:
		::System::Void set_terrainData(::UnityEngine::TerrainData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINCOLLIDER_SET_TERRAINDATA_OFFSET))(this, a1);
		}
	};
}
