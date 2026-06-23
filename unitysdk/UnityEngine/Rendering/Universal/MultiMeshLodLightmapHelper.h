#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MULTIMESHLODLIGHTMAPHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BC32B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MULTIMESHLODLIGHTMAPHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC32F10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MultiMeshLodLightmapHelper_TypeDefinitionIndex = 26478;

	class MultiMeshLodLightmapHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MULTIMESHLODLIGHTMAPHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MULTIMESHLODLIGHTMAPHELPER_ONENABLE_OFFSET))(this);
		}
	};
}
