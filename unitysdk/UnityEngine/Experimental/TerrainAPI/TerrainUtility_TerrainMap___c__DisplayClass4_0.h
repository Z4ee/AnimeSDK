#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Terrain; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP___C__DISPLAYCLASS4_0__CREATEFROMPLACEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x1E6DB7E0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D9350)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TerrainMap___c__DisplayClass4_0_TypeDefinitionIndex = 32487;

	class TerrainUtility_TerrainMap___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Int32 groupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateFromPlacement_b__0(::UnityEngine::Terrain* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINMAP___C__DISPLAYCLASS4_0__CREATEFROMPLACEMENT_B__0_OFFSET))(this, x);
		}
	};
}
