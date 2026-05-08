#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ReferenceVolumeParameter_1.h"

namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOMFLAREPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B493A30)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOMFLAREPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B493A40)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOMFLAREPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B493990)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapBloomFlareParameter_TypeDefinitionIndex = 6097;

	class NapBloomFlareParameter : public ::UnityEngine::NAPRenderPipeline0::ReferenceVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP*>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOMFLAREPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* get_value()
		{
			return ((::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOMFLAREPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOMFLAREPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
