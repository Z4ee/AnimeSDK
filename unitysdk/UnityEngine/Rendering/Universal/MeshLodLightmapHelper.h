#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MESHLODLIGHTMAPHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E79EDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MESHLODLIGHTMAPHELPER_REBINDLIGHTMAPINFO_OFFSET UNITYSDK_OFFSET(0x1E79EE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_MESHLODLIGHTMAPHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E79EF90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MeshLodLightmapHelper_TypeDefinitionIndex = 27143;

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
