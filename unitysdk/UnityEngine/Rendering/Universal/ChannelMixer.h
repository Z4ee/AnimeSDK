#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ChannelMixer_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B847E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ChannelMixer_TypeDefinitionIndex = 30105;

	class ChannelMixer : public ::UnityEngine::NAPRenderPipeline0::ChannelMixer_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMIXER__CTOR_OFFSET))(this);
		}
	};
}
