#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_RENDERTEXTUREPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3267C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTextureParameter_TypeDefinitionIndex = 33564;

	class RenderTextureParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::RenderTexture*>
	{
	public:
		::System::Void _ctor(::UnityEngine::RenderTexture* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTEXTUREPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
