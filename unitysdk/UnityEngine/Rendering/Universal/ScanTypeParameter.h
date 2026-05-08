#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCANTYPEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0xF7FD660)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanTypeParameter_TypeDefinitionIndex = 29883;

	class ScanTypeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::ScanType>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::ScanType value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScanType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCANTYPEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
