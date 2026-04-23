#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_COLORPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1A3046A0)
#define UNITYENGINE_RENDERING_COLORPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A304630)
#define UNITYENGINE_RENDERING_COLORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A304600)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ColorParameter_TypeDefinitionIndex = 33554;

	class ColorParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Color>
	{
	public:
		::System::Boolean hdr; // 0x28
		::System::Boolean showAlpha; // 0x29
		::System::Boolean showEyeDropper; // 0x2A

		::System::Void _ctor(::UnityEngine::Color value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void _ctor_1(::UnityEngine::Color value, ::System::Boolean hdr, ::System::Boolean showAlpha, ::System::Boolean showEyeDropper, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORPARAMETER__CTOR_1_OFFSET))(this, value, hdr, showAlpha, showEyeDropper, overrideState);
		}

		::System::Void Interp(::UnityEngine::Color from, ::UnityEngine::Color to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}
	};
}
