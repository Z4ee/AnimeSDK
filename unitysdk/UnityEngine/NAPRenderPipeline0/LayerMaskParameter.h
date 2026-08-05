#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/StructVolumeParameter_1.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_LAYERMASKPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E480E10)
#define UNITYENGINE_NAPRENDERPIPELINE0_LAYERMASKPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E480E20)
#define UNITYENGINE_NAPRENDERPIPELINE0_LAYERMASKPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E480DF0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LayerMaskParameter_TypeDefinitionIndex = 6052;

	class LayerMaskParameter : public ::UnityEngine::NAPRenderPipeline0::StructVolumeParameter_1<::UnityEngine::LayerMask>
	{
	public:
		::System::Void _ctor(::UnityEngine::LayerMask value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LAYERMASKPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::UnityEngine::LayerMask get_value()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LAYERMASKPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::LayerMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LAYERMASKPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
