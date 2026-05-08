#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LiftGammaGain_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIFTGAMMAGAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B088FC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LiftGammaGain_TypeDefinitionIndex = 30130;

	class LiftGammaGain : public ::UnityEngine::NAPRenderPipeline0::LiftGammaGain_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIFTGAMMAGAIN__CTOR_OFFSET))(this);
		}
	};
}
