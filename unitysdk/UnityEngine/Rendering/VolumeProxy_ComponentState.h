#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_Priority.h"

#define UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A33C2D0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE_REQUIRE_OFFSET UNITYSDK_OFFSET(0x1A33BE70)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A33BA00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProxy_ComponentState_TypeDefinitionIndex = 33575;

	class VolumeProxy_ComponentState : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* Required; // 0x10
		::UnityEngine::Rendering::VolumeProxy_Priority TopPriority; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Require(::UnityEngine::Rendering::VolumeProxy_Priority priority, ::System::Boolean needStackTrace)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE_REQUIRE_OFFSET))(this, priority, needStackTrace);
		}

		::System::Void Release(::UnityEngine::Rendering::VolumeProxy_Priority priority)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE_RELEASE_OFFSET))(this, priority);
		}
	};
}
