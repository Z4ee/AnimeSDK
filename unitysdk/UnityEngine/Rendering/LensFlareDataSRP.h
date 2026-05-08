#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LensFlareDataSRP_NativeSRP.h"

#define UNITYENGINE_RENDERING_LENSFLAREDATASRP__CTOR_OFFSET UNITYSDK_OFFSET(0x19688280)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareDataSRP_TypeDefinitionIndex = 29796;

	class LensFlareDataSRP : public ::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATASRP__CTOR_OFFSET))(this);
		}
	};
}
