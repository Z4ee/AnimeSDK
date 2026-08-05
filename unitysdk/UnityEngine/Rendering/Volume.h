#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/Volume_NativeSRP.h"

#define UNITYENGINE_RENDERING_VOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6FE7F0)
#define UNITYENGINE_RENDERING_VOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FE850)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Volume_TypeDefinitionIndex = 27151;

	class Volume : public ::UnityEngine::NAPRenderPipeline0::Volume_NativeSRP
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME__CTOR_OFFSET))(this);
		}
	};
}
