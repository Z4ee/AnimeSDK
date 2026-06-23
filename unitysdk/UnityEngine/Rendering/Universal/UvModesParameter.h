#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_UVMODESPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6AA80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UvModesParameter_TypeDefinitionIndex = 26438;

	class UvModesParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::UvModes>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::UvModes value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UvModes, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UVMODESPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
