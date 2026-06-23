#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCANMASKTYPEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C41B090)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanMaskTypeParameter_TypeDefinitionIndex = 26793;

	class ScanMaskTypeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::ScanMaskType>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::ScanMaskType value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScanMaskType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCANMASKTYPEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
