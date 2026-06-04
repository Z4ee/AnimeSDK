#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace UnityEngine::Rendering { class TextureCurve; }

#define UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B181780)
#define UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B181740)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureCurveParameter_TypeDefinitionIndex = 33804;

	class TextureCurveParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::TextureCurve*>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::TextureCurve* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::TextureCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_RELEASE_OFFSET))(this);
		}
	};
}
