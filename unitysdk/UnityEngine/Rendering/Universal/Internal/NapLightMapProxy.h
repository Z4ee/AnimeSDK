#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering::Universal::Internal { class NapLightMapData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C4DDE90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPPROXY_SETLIGHTMAPDATA_OFFSET UNITYSDK_OFFSET(0x1C4DDB30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DDEE0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapLightMapProxy_TypeDefinitionIndex = 27673;

	class NapLightMapProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPPROXY__CTOR_OFFSET))(this);
		}

		::System::Void SetLightMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPPROXY_SETLIGHTMAPDATA_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPPROXY_ONENABLE_OFFSET))(this);
		}
	};
}
