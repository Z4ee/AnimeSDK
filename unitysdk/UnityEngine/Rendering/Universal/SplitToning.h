#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SplitToning_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SPLITTONING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C456FA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SplitToning_TypeDefinitionIndex = 27531;

	class SplitToning : public ::UnityEngine::NAPRenderPipeline0::SplitToning_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLITTONING__CTOR_OFFSET))(this);
		}
	};
}
