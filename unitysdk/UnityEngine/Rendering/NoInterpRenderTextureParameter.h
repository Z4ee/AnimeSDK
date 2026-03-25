#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_NOINTERPRENDERTEXTUREPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E8400)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpRenderTextureParameter_TypeDefinitionIndex = 27941;

	class NoInterpRenderTextureParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::RenderTexture*>
	{
	public:
		::System::Void _ctor(::UnityEngine::RenderTexture* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPRENDERTEXTUREPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
