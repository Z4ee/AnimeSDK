#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::NAPRenderPipeline0 { class ReflectionPassNativeState; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EA8EDD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EA8EE00)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1EA8ED80)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8ED00)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ReflectionPass_NativeImpl_TypeDefinitionIndex = 5772;

	class ReflectionPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ReflectionPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		::System::Void Setup(::UnityEngine::Vector3 reflectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_NATIVEIMPL_SETUP_OFFSET))(this, reflectionPlanePos, reflectionPlaneNormal);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
