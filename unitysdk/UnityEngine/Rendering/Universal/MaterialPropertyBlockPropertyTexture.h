#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/MaterialPropertyBlockProperty_1.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC1F80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyTexture_TypeDefinitionIndex = 26895;

	class MaterialPropertyBlockPropertyTexture : public ::UnityEngine::Rendering::Universal::MaterialPropertyBlockProperty_1<::UnityEngine::Texture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYTEXTURE__CTOR_OFFSET))(this);
		}
	};
}
