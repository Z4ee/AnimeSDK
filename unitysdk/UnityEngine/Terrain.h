#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class TerrainData; }

#define UNITYENGINE_TERRAIN_GET_ACTIVETERRAINS_OFFSET UNITYSDK_OFFSET(0x1FAC0050)
#define UNITYENGINE_TERRAIN_GET_ALLOWAUTOCONNECT_OFFSET UNITYSDK_OFFSET(0x1FAC0100)
#define UNITYENGINE_TERRAIN_GET_GROUPINGID_OFFSET UNITYSDK_OFFSET(0x1FAC0520)
#define UNITYENGINE_TERRAIN_GET_TERRAINDATA_OFFSET UNITYSDK_OFFSET(0x1FAC1290)
#define UNITYENGINE_TERRAIN_SETNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1FAC0110)
#define UNITYENGINE_TERRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC3770)

namespace UnityEngine
{
	inline static constexpr unsigned int Terrain_TypeDefinitionIndex = 33111;

	class Terrain : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN__CTOR_OFFSET))(this);
		}

		::UnityEngine::TerrainData* get_terrainData()
		{
			return ((::UnityEngine::TerrainData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_TERRAINDATA_OFFSET))(this);
		}

		::System::Boolean get_allowAutoConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_ALLOWAUTOCONNECT_OFFSET))(this);
		}

		::System::Int32 get_groupingID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_GROUPINGID_OFFSET))(this);
		}

		::System::Void SetNeighbors(::UnityEngine::Terrain* left, ::UnityEngine::Terrain* top, ::UnityEngine::Terrain* right, ::UnityEngine::Terrain* bottom)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SETNEIGHBORS_OFFSET))(this, left, top, right, bottom);
		}

		static ::Il2CppArray<::UnityEngine::Terrain*>* get_activeTerrains()
		{
			return ((::Il2CppArray<::UnityEngine::Terrain*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_ACTIVETERRAINS_OFFSET))();
		}
	};
}
