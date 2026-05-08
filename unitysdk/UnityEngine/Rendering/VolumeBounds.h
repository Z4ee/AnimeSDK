#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeBounds_NativeSRP.h"

#define UNITYENGINE_RENDERING_VOLUMEBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x191FA090)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeBounds_TypeDefinitionIndex = 9605;

	class VolumeBounds : public ::UnityEngine::NAPRenderPipeline0::VolumeBounds_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEBOUNDS__CTOR_OFFSET))(this);
		}
	};
}
