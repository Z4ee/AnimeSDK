#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/MaterialPropertyBlockProperty_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB9EE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyVector_TypeDefinitionIndex = 29858;

	class MaterialPropertyBlockPropertyVector : public ::UnityEngine::Rendering::Universal::MaterialPropertyBlockProperty_1<::UnityEngine::Vector4>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYVECTOR__CTOR_OFFSET))(this);
		}
	};
}
