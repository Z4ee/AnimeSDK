#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/AmbientMode.h"
#include "unitysdk/UnityEngine/Rendering/DefaultReflectionMode.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNITYENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x192AFD00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UnityEnvironment_TypeDefinitionIndex = 29920;

	class UnityEnvironment : public ::System::Object
	{
	public:
		::System::Boolean overrideGlobalSetting; // 0x10
		::UnityEngine::Material* skybox; // 0x18
		::UnityEngine::Rendering::AmbientMode ambientMode; // 0x20
		::UnityEngine::Color ambientLight; // 0x24
		::System::Single ambientIntensity; // 0x34
		::UnityEngine::Color ambientSkyColor; // 0x38
		::UnityEngine::Color ambientEquatorColor; // 0x48
		::UnityEngine::Color ambientGroundColor; // 0x58
		::UnityEngine::Rendering::DefaultReflectionMode defaultReflectionMode; // 0x68
		::System::Int32 defaultReflectionResolution; // 0x6C
		::System::Single reflectionIntensity; // 0x70
		::UnityEngine::Cubemap* customReflection; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNITYENVIRONMENT__CTOR_OFFSET))(this);
		}
	};
}
