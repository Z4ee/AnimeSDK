#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ComicDotType.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_COMICDOTTYPEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF7600)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComicDotTypeParameter_TypeDefinitionIndex = 27189;

	class ComicDotTypeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::ComicDotType>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::ComicDotType value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ComicDotType, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COMICDOTTYPEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
