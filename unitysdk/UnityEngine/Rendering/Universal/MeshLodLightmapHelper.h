#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MESHLODLIGHTMAPHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B089900)
#define UNITYENGINE_RENDERING_UNIVERSAL_MESHLODLIGHTMAPHELPER_REBINDLIGHTMAPINFO_OFFSET UNITYSDK_OFFSET(0x1B089950)
#define UNITYENGINE_RENDERING_UNIVERSAL_MESHLODLIGHTMAPHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B089AC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MeshLodLightmapHelper_TypeDefinitionIndex = 29865;

	class MeshLodLightmapHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MESHLODLIGHTMAPHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MESHLODLIGHTMAPHELPER_ONENABLE_OFFSET))(this);
		}

		::System::Void RebindLightMapInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MESHLODLIGHTMAPHELPER_REBINDLIGHTMAPINFO_OFFSET))(this);
		}
	};
}
