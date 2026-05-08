#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PrimitiveVolumeParameter_1.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_COLORPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0C07F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1B0C0780)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0C0800)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0C0030)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C0750)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ColorParameter_TypeDefinitionIndex = 6048;

	class ColorParameter : public ::UnityEngine::NAPRenderPipeline0::PrimitiveVolumeParameter_1<::UnityEngine::Color>
	{
	public:
		::System::Boolean hdr; // 0x28
		::System::Boolean showAlpha; // 0x29
		::System::Boolean showEyeDropper; // 0x2A

		::System::Void _ctor(::UnityEngine::Color value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void _ctor_1(::UnityEngine::Color value, ::System::Boolean hdr, ::System::Boolean showAlpha, ::System::Boolean showEyeDropper, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORPARAMETER__CTOR_1_OFFSET))(this, value, hdr, showAlpha, showEyeDropper, overrideState);
		}

		::System::Void Interp(::UnityEngine::Color from, ::UnityEngine::Color to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::UnityEngine::Color get_value()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
