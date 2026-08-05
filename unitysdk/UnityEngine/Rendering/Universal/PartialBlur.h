#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PartialBlur_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_PARTIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC72000)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PartialBlur_TypeDefinitionIndex = 27509;

	class PartialBlur : public ::UnityEngine::NAPRenderPipeline0::PartialBlur_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PARTIALBLUR__CTOR_OFFSET))(this);
		}
	};
}
