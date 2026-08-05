#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CharacterVolumeProxy_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERVOLUMEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF1860)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CharacterVolumeProxy_TypeDefinitionIndex = 27308;

	class CharacterVolumeProxy : public ::UnityEngine::NAPRenderPipeline0::CharacterVolumeProxy_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERVOLUMEPROXY__CTOR_OFFSET))(this);
		}
	};
}
