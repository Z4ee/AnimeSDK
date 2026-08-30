#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_TEXTUREPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC03700)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureParameter_TypeDefinitionIndex = 34982;

	class TextureParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Texture*>
	{
	public:
		::System::Void _ctor(::UnityEngine::Texture* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREPARAMETER__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
