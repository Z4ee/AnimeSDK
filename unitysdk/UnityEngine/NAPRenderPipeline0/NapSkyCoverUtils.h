#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SkyCoverTimeParams.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSKYCOVERUTILS_GETSKYCOVERTIMEPARAMS_OFFSET UNITYSDK_OFFSET(0x1B2F0410)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSKYCOVERUTILS_SETDRAWPARAMS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2F0400)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSKYCOVERUTILS_SETDRAWPARAMS_OFFSET UNITYSDK_OFFSET(0x1B2F03F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSKYCOVERUTILS_SETSKYCOVERTIMEPARAMS_OFFSET UNITYSDK_OFFSET(0x1B2F0420)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSKYCOVERUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F0430)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapSkyCoverUtils_TypeDefinitionIndex = 5707;

	class NapSkyCoverUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSKYCOVERUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void SetDrawParams(::System::Single skyCoverMoveSpeed, ::UnityEngine::Color lightSweepColor)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSKYCOVERUTILS_SETDRAWPARAMS_OFFSET))(skyCoverMoveSpeed, lightSweepColor);
		}

		static ::System::Void GetSkyCoverTimeParams(::UnityEngine::NAPRenderPipeline0::SkyCoverTimeParams& skyCoverTimeParams)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::SkyCoverTimeParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSKYCOVERUTILS_GETSKYCOVERTIMEPARAMS_OFFSET))(skyCoverTimeParams);
		}

		static ::System::Void SetSkyCoverTimeParams(::UnityEngine::NAPRenderPipeline0::SkyCoverTimeParams& skyCoverTimeParams)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::SkyCoverTimeParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSKYCOVERUTILS_SETSKYCOVERTIMEPARAMS_OFFSET))(skyCoverTimeParams);
		}

		static ::System::Void SetDrawParams_Injected(::System::Single skyCoverMoveSpeed, ::UnityEngine::Color& lightSweepColor)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSKYCOVERUTILS_SETDRAWPARAMS_INJECTED_OFFSET))(skyCoverMoveSpeed, lightSweepColor);
		}
	};
}
