#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostProcessPass_EFinalPPSType.h"

namespace UnityEngine::Rendering::Universal { class VREffects; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_UBERPOSTCONTEXT_INITUBERPOSTCALLSTACK_OFFSET UNITYSDK_OFFSET(0x822F60)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_UberPostContext_TypeDefinitionIndex = 30535;

	struct alignas(4) PostProcessPass_UberPostContext
	{
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass_EFinalPPSType m_FinalPPSType; // 0x10

		::System::Void InitUberPostCallStack(::UnityEngine::Rendering::Universal::VREffects* _vrEffects)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VREffects*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_UBERPOSTCONTEXT_INITUBERPOSTCALLSTACK_OFFSET))(this, _vrEffects);
		}
	};
}
