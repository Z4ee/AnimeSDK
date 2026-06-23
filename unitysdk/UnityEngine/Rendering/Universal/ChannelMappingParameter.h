#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMAPPINGPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C400410)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ChannelMappingParameter_TypeDefinitionIndex = 26777;

	class ChannelMappingParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::ChannelMapping>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::ChannelMapping value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChannelMapping, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMAPPINGPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
