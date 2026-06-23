#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeProfile_NativeSRP.h"

#define UNITYENGINE_RENDERING_VOLUMEPROFILE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF0D4D0)
#define UNITYENGINE_RENDERING_VOLUMEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0D550)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProfile_TypeDefinitionIndex = 26599;

	class VolumeProfile : public ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROFILE__CTOR_OFFSET))(this);
		}
	};
}
