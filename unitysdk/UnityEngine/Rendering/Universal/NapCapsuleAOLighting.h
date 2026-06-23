#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CapsuleAO_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPSULEAOLIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E52E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCapsuleAOLighting_TypeDefinitionIndex = 26225;

	class NapCapsuleAOLighting : public ::UnityEngine::NAPRenderPipeline0::CapsuleAO_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCAPSULEAOLIGHTING__CTOR_OFFSET))(this);
		}
	};
}
