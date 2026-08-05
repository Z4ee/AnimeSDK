#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatRangeParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_AUTOEXPOSURE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1E78D120)
#define UNITYENGINE_RENDERING_UNIVERSAL_AUTOEXPOSURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78D190)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AutoExposure_TypeDefinitionIndex = 27374;

	class AutoExposure : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::FloatRangeParameter* Filtering; // 0x38
		::UnityEngine::NAPRenderPipeline0::FloatRangeParameter* LuminanceRange; // 0x40
		::UnityEngine::NAPRenderPipeline0::FloatParameter* ExposureCompensation; // 0x48
		::UnityEngine::NAPRenderPipeline0::BoolParameter* ProgressiveEyeAdaptation; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* SpeedUp; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* SpeedDown; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AUTOEXPOSURE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AUTOEXPOSURE_ISACTIVE_OFFSET))(this);
		}
	};
}
