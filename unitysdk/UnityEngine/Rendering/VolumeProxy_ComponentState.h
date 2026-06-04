#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_Priority.h"

#define UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B196C60)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE_REQUIRE_OFFSET UNITYSDK_OFFSET(0x1B196770)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B196320)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProxy_ComponentState_TypeDefinitionIndex = 33857;

	class VolumeProxy_ComponentState : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* Required; // 0x10
		::UnityEngine::Rendering::VolumeProxy_Priority TopPriority; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Require(::UnityEngine::Rendering::VolumeProxy_Priority a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE_REQUIRE_OFFSET))(this, a1, a2);
		}

		::System::Void Release(::UnityEngine::Rendering::VolumeProxy_Priority a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_COMPONENTSTATE_RELEASE_OFFSET))(this, a1);
		}
	};
}
