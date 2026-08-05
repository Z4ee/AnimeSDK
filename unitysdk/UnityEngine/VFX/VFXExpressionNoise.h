#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_VFX_VFXEXPRESSIONNOISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC67160)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXExpressionNoise_TypeDefinitionIndex = 93742;

	class VFXExpressionNoise : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEXPRESSIONNOISE__CTOR_OFFSET))(this);
		}
	};
}
