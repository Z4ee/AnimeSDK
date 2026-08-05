#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Rendering::Universal::Internal { class SceneObjectProxy; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_LIGHTANIMATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E79DDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_LIGHTANIMATION_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x1E79DF00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_LIGHTANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E79DDC0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SceneObjectProxy_LightAnimation_TypeDefinitionIndex = 26836;

	class SceneObjectProxy_LightAnimation : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* holder; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18
		::System::Single endTime; // 0x20
		::System::Single startTime; // 0x24
		::System::Boolean isOn; // 0x28
		::System::Single lifeTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_LIGHTANIMATION__CTOR_OFFSET))(this);
		}

		::System::Boolean Initialize(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* lHolder, ::System::Boolean lIsOn)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_LIGHTANIMATION_INITIALIZE_OFFSET))(this, lHolder, lIsOn);
		}

		::System::Void PlayAnim(::System::Single currentTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_LIGHTANIMATION_PLAYANIM_OFFSET))(this, currentTime);
		}
	};
}
