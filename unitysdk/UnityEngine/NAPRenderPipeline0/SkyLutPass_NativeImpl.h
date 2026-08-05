#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class SkyLutPassNativeState; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB66A60)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EB66B00)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_NATIVEIMPL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB66B30)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB669E0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SkyLutPass_NativeImpl_TypeDefinitionIndex = 5768;

	class SkyLutPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Boolean* StaticGet_s_bForceUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SkyLutPass_NativeImpl_TypeDefinitionIndex)->GetStaticField(0x28B0);
		}
		::UnityEngine::NAPRenderPipeline0::SkyLutPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_NATIVEIMPL__CCTOR_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
