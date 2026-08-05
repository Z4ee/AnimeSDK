#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Shader; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_FLUIDFXRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99BA40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_FluidFXResources_TypeDefinitionIndex = 27774;

	class ForwardRendererData_FluidFXResources : public ::System::Object
	{
	public:
		::UnityEngine::Shader* M_MeshWindSourcePS; // 0x10
		::UnityEngine::Shader* M_AdvectPS; // 0x18
		::UnityEngine::Shader* M_DivergencePS; // 0x20
		::UnityEngine::Shader* M_PressurePS; // 0x28
		::UnityEngine::Shader* M_CompositeAndGradientPS; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_FLUIDFXRESOURCES__CTOR_OFFSET))(this);
		}
	};
}
