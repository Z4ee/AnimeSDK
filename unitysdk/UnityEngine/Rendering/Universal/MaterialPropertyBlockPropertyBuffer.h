#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/MaterialPropertyBlockProperty_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0A330)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyBuffer_TypeDefinitionIndex = 26540;

	class MaterialPropertyBlockPropertyBuffer : public ::UnityEngine::Rendering::Universal::MaterialPropertyBlockProperty_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYBUFFER__CTOR_OFFSET))(this);
		}
	};
}
