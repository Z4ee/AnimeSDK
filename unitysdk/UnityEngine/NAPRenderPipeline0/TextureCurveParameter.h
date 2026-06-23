#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ReferenceVolumeParameter_1.h"

namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }

#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D6AA280)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVEPARAMETER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D6AA200)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D6AA290)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AA160)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TextureCurveParameter_TypeDefinitionIndex = 6081;

	class TextureCurveParameter : public ::UnityEngine::NAPRenderPipeline0::ReferenceVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::TextureCurve*>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::TextureCurve* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::TextureCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVEPARAMETER_RELEASE_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* get_value()
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::NAPRenderPipeline0::TextureCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::TextureCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVEPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
