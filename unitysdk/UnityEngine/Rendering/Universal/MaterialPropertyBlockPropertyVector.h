#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/MaterialPropertyBlockProperty_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC1FA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyVector_TypeDefinitionIndex = 26843;

	class MaterialPropertyBlockPropertyVector : public ::UnityEngine::Rendering::Universal::MaterialPropertyBlockProperty_1<::UnityEngine::Vector4>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYVECTOR__CTOR_OFFSET))(this);
		}
	};
}
