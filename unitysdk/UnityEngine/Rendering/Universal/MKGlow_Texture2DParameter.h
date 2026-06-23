#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter_1.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_TEXTURE2DPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D3E2190)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_TEXTURE2DPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1D3E2110)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_TEXTURE2DPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D3E21A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_TEXTURE2DPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E21B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_Texture2DParameter_TypeDefinitionIndex = 27098;

	class MKGlow_Texture2DParameter : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter_1<::UnityEngine::Texture2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_TEXTURE2DPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::UnityEngine::Texture2D* from, ::UnityEngine::Texture2D* to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_TEXTURE2DPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::UnityEngine::Texture2D* get_value()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_TEXTURE2DPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_TEXTURE2DPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
