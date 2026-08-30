#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_NOINTERPRENDERTEXTUREPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD20960)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpRenderTextureParameter_TypeDefinitionIndex = 34985;

	class NoInterpRenderTextureParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::RenderTexture*>
	{
	public:
		::System::Void _ctor(::UnityEngine::RenderTexture* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPRENDERTEXTUREPARAMETER__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
