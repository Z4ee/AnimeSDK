#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SKYEFFECTOUTLINECONFIG_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C151BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SKYEFFECTOUTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C151D50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SkyEffectOutlineConfig_TypeDefinitionIndex = 26312;

	class SkyEffectOutlineConfig : public ::System::Object
	{
	public:
		::System::Single outlineWidth; // 0x10
		::UnityEngine::Color outlineColor; // 0x14
		::System::Single outlineFadeStartCircleRange; // 0x24
		::System::Single outlineFadePower; // 0x28
		::System::Single fadeStartDistance; // 0x2C
		::System::Single fadeDistance; // 0x30
		::System::Single fadeStartHeight; // 0x34
		::System::Single fadeHeight; // 0x38
		::UnityEngine::Material* skyEffectOutlineMaterial; // 0x40
		::System::Boolean enableInnerOutline; // 0x48
		::System::Boolean enableOuterOutline; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SKYEFFECTOUTLINECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SKYEFFECTOUTLINECONFIG_ISVALID_OFFSET))(this);
		}
	};
}
