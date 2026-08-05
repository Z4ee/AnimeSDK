#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Terrain; }
namespace UnityEngine::Experimental::TerrainAPI { class TerrainUtility___c__DisplayClass4_0; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY___C__DISPLAYCLASS4_1__COLLECTTERRAINS_B__0_OFFSET UNITYSDK_OFFSET(0x1FAC1200)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC0510)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility___c__DisplayClass4_1_TypeDefinitionIndex = 33125;

	class TerrainUtility___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::UnityEngine::Terrain* t; // 0x10
		::UnityEngine::Experimental::TerrainAPI::TerrainUtility___c__DisplayClass4_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _CollectTerrains_b__0(::UnityEngine::Terrain* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY___C__DISPLAYCLASS4_1__COLLECTTERRAINS_B__0_OFFSET))(this, x);
		}
	};
}
