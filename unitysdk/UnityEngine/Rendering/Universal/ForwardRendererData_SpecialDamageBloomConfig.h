#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SPECIALDAMAGEBLOOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3013A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_SpecialDamageBloomConfig_TypeDefinitionIndex = 27771;

	class ForwardRendererData_SpecialDamageBloomConfig : public ::System::Object
	{
	public:
		::System::Single damageThreshold; // 0x10
		::System::Single damageBloomIntenstiy; // 0x14
		::System::Single damageBloomScaler; // 0x18
		::UnityEngine::Vector4 damageBlurLevelWeights; // 0x1C
		::UnityEngine::Vector4 damageRefGaussRadius; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SPECIALDAMAGEBLOOMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
