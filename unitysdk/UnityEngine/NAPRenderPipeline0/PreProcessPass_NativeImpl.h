#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PreProcessPassGetFromNativeOutParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class Object; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_NATIVEIMPL_EXECUTE_IMPL_OFFSET UNITYSDK_OFFSET(0x1B2F04A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B2F04B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_NATIVEIMPL_PREPROCESSPASSGETFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x1B2F04C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F0440)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PreProcessPass_NativeImpl_TypeDefinitionIndex = 5714;

	class PreProcessPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		static ::System::Void Execute_Impl(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_NATIVEIMPL_EXECUTE_IMPL_OFFSET))(context, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void PreProcessPassGetFromNative(::System::Object* weatherConfig, ::UnityEngine::NAPRenderPipeline0::PreProcessPassGetFromNativeOutParams& outParams)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::NAPRenderPipeline0::PreProcessPassGetFromNativeOutParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PREPROCESSPASS_NATIVEIMPL_PREPROCESSPASSGETFROMNATIVE_OFFSET))(weatherConfig, outParams);
		}
	};
}
