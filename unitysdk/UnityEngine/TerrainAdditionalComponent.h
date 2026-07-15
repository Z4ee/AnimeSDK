#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class ITerrainLayer; }

#define UNITYENGINE_TERRAINADDITIONALCOMPONENT_GETACTIVELAYERS_OFFSET UNITYSDK_OFFSET(0x1D2B8A00)
#define UNITYENGINE_TERRAINADDITIONALCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B8AD0)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainAdditionalComponent_TypeDefinitionIndex = 5321;

	class TerrainAdditionalComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINADDITIONALCOMPONENT__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ITerrainLayer*>* GetActiveLayers()
		{
			return ((::Il2CppArray<::UnityEngine::ITerrainLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINADDITIONALCOMPONENT_GETACTIVELAYERS_OFFSET))(this);
		}
	};
}
