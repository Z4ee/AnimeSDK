#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowsMidtonesHighlights_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWSMIDTONESHIGHLIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F7980)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowsMidtonesHighlights_TypeDefinitionIndex = 30172;

	class ShadowsMidtonesHighlights : public ::UnityEngine::NAPRenderPipeline0::ShadowsMidtonesHighlights_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWSMIDTONESHIGHLIGHTS__CTOR_OFFSET))(this);
		}
	};
}
