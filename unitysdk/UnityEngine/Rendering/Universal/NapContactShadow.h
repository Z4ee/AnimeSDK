#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapContactShadow_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCONTACTSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEFE750)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapContactShadow_TypeDefinitionIndex = 27609;

	class NapContactShadow : public ::UnityEngine::NAPRenderPipeline0::NapContactShadow_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCONTACTSHADOW__CTOR_OFFSET))(this);
		}
	};
}
