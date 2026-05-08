#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONQUEUETYPEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B491E90)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DistortionQueueTypeParameter_TypeDefinitionIndex = 6091;

	class DistortionQueueTypeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::DistortionQueueType>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::DistortionQueueType value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DistortionQueueType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONQUEUETYPEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
