#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEPLANARREFLECTION_RENDERLAYERMASKPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D310EE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScreenSpacePlanarReflection_RenderLayerMaskParameter_TypeDefinitionIndex = 26800;

	class ScreenSpacePlanarReflection_RenderLayerMaskParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEPLANARREFLECTION_RENDERLAYERMASKPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
