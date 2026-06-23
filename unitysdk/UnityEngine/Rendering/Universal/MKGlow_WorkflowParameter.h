#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/Workflow.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_WORKFLOWPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B1A0E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_WORKFLOWPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1B1A0D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_WORKFLOWPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B1A0E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_WORKFLOWPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A0C60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_WorkflowParameter_TypeDefinitionIndex = 27108;

	class MKGlow_WorkflowParameter : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter_1<::PostProcess::MKGlow::Workflow>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_WORKFLOWPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::PostProcess::MKGlow::Workflow from, ::PostProcess::MKGlow::Workflow to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::Workflow, ::PostProcess::MKGlow::Workflow, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_WORKFLOWPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::PostProcess::MKGlow::Workflow get_value()
		{
			return ((::PostProcess::MKGlow::Workflow(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_WORKFLOWPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::Workflow value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::Workflow))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_WORKFLOWPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
