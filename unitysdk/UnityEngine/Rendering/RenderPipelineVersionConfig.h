#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/RenderPipelineVersion.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define UNITYENGINE_RENDERING_RENDERPIPELINEVERSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B86C630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipelineVersionConfig_TypeDefinitionIndex = 26434;

	class RenderPipelineVersionConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Rendering::RenderPipelineVersion renderPipelineVersion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEVERSIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
