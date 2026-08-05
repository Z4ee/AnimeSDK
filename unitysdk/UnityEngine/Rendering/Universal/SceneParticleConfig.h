#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCENEPARTICLECONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF00140)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCENEPARTICLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF00130)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SceneParticleConfig_TypeDefinitionIndex = 26970;

	class SceneParticleConfig : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::SceneParticleConfig** StaticGet_s_CachedConfig()
		{
			return (::UnityEngine::Rendering::Universal::SceneParticleConfig**)Il2CppClass::FromTypeDefinitionIndex(SceneParticleConfig_TypeDefinitionIndex)->GetStaticField(0x22D60);
		}
		::UnityEngine::Color sceneEtherColor; // 0x10
		::UnityEngine::Color sceneEtherWaveColor; // 0x20
		::UnityEngine::Texture2D* sceneEtherWaveTexture; // 0x30
		::System::Single sceneEtherWaveTextureTilling; // 0x38
		::UnityEngine::Color sceneEtherEffectColor; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENEPARTICLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCENEPARTICLECONFIG__CCTOR_OFFSET))();
		}
	};
}
