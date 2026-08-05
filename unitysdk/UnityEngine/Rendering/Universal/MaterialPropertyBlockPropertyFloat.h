#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/MaterialPropertyBlockProperty_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC660B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyFloat_TypeDefinitionIndex = 27269;

	class MaterialPropertyBlockPropertyFloat : public ::UnityEngine::Rendering::Universal::MaterialPropertyBlockProperty_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYFLOAT__CTOR_OFFSET))(this);
		}
	};
}
