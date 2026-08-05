#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ChannelMixer_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C993880)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ChannelMixer_TypeDefinitionIndex = 27402;

	class ChannelMixer : public ::UnityEngine::NAPRenderPipeline0::ChannelMixer_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMIXER__CTOR_OFFSET))(this);
		}
	};
}
