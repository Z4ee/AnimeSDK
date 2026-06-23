#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"

namespace UnityEngine { class Cubemap; }

#define UNITYENGINE_RENDERING_UNIVERSAL_STATICENVIRONMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B8006C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_STATICENVIRONMENT_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B800EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_STATICENVIRONMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B800B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_STATICENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B800EF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int StaticEnvironment_TypeDefinitionIndex = 27037;

	class StaticEnvironment : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Cubemap* cube; // 0x18
		::UnityEngine::Rendering::SphericalHarmonicsL2 bakeResult; // 0x20
		::System::Single intensity; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_STATICENVIRONMENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_STATICENVIRONMENT_ONENABLE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_STATICENVIRONMENT_REFRESH_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_STATICENVIRONMENT_ONVALIDATE_OFFSET))(this);
		}
	};
}
