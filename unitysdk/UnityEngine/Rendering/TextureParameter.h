#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_TEXTUREPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188ED540)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureParameter_TypeDefinitionIndex = 27938;

	class TextureParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Texture*>
	{
	public:
		::System::Void _ctor(::UnityEngine::Texture* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
