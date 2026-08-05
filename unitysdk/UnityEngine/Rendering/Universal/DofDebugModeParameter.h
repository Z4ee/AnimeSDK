#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DOFDEBUGMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F1B80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DofDebugModeParameter_TypeDefinitionIndex = 27781;

	class DofDebugModeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::DofDebugMode>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::DofDebugMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DofDebugMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DOFDEBUGMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
