#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_DEBUGUPDATER_RUNTIMEINIT_OFFSET UNITYSDK_OFFSET(0x1F292D00)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F292DB0)
#define UNITYENGINE_RENDERING_DEBUGUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F293210)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUpdater_TypeDefinitionIndex = 35551;

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
