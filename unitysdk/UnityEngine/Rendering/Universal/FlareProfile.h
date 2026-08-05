#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/FlareProfile_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_FLAREPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC7E460)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FlareProfile_TypeDefinitionIndex = 27747;

	class FlareProfile : public ::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLAREPROFILE__CTOR_OFFSET))(this);
		}
	};
}
