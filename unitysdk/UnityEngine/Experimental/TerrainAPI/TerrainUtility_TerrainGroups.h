#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace UnityEngine::Experimental::TerrainAPI { class TerrainUtility_TerrainMap; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINGROUPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C39C820)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TerrainGroups_TypeDefinitionIndex = 30937;

	class TerrainUtility_TerrainGroups : public ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_TERRAINGROUPS__CTOR_OFFSET))(this);
		}
	};
}
