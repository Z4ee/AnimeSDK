#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_NAPSCREENPASSTEXTURE_ISVALID_OFFSET UNITYSDK_OFFSET(0x937020)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_NAPSCREENPASSTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x936FE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessWeightedSampleSum_NapScreenPassTexture_TypeDefinitionIndex = 26307;

	struct alignas(8) PostProcessWeightedSampleSum_NapScreenPassTexture
	{
		::UnityEngine::Rect ViewRect; // 0x10
		::UnityEngine::Rendering::RenderTargetIdentifier RTId; // 0x20
		::System::Int32 ShaderId; // 0x48

		::System::Void _ctor(::System::Int32 shaderId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_NAPSCREENPASSTEXTURE__CTOR_OFFSET))(this, shaderId);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSWEIGHTEDSAMPLESUM_NAPSCREENPASSTEXTURE_ISVALID_OFFSET))(this);
		}
	};
}
