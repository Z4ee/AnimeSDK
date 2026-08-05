#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/BeginInitPassGetFromNativeOutParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class Object; }

#define UNITYENGINE_NAPRENDERPIPELINE0_BEGININITPASS_NATIVEIMPL_BEGININITPASSGETFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x1EDE0FA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_BEGININITPASS_NATIVEIMPL_EXECUTE_IMPL_OFFSET UNITYSDK_OFFSET(0x1EDE0F80)
#define UNITYENGINE_NAPRENDERPIPELINE0_BEGININITPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EDE0F90)
#define UNITYENGINE_NAPRENDERPIPELINE0_BEGININITPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE0F20)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int BeginInitPass_NativeImpl_TypeDefinitionIndex = 5714;

	class BeginInitPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BEGININITPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		static ::System::Void Execute_Impl(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BEGININITPASS_NATIVEIMPL_EXECUTE_IMPL_OFFSET))(context, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BEGININITPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void BeginInitPassGetFromNative(::System::Object* weatherConfig, ::UnityEngine::NAPRenderPipeline0::BeginInitPassGetFromNativeOutParams& outParams)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::NAPRenderPipeline0::BeginInitPassGetFromNativeOutParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BEGININITPASS_NATIVEIMPL_BEGININITPASSGETFROMNATIVE_OFFSET))(weatherConfig, outParams);
		}
	};
}
