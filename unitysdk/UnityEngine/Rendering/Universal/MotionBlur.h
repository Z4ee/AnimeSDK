#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlur_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9AE8F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MotionBlur_TypeDefinitionIndex = 26900;

	class MotionBlur : public ::UnityEngine::NAPRenderPipeline0::MotionBlur_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLUR__CTOR_OFFSET))(this);
		}
	};
}
