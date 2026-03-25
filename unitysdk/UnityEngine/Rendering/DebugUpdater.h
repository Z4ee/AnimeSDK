#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_DEBUGUPDATER_RUNTIMEINIT_OFFSET UNITYSDK_OFFSET(0x188E3960)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x188E3A10)
#define UNITYENGINE_RENDERING_DEBUGUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E3E70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUpdater_TypeDefinitionIndex = 27838;

	class DebugUpdater : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER__CTOR_OFFSET))(this);
		}

		static ::System::Void RuntimeInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_RUNTIMEINIT_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_UPDATE_OFFSET))(this);
		}
	};
}
