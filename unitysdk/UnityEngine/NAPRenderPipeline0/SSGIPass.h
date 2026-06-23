#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBinding.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::NAPRenderPipeline0 { class ConsoleVariableBool; }
namespace UnityEngine::NAPRenderPipeline0 { class ConsoleVariableFloat; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { class SSGIPass_HistoryBuffer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_CACHESCENECOLOR_OFFSET UNITYSDK_OFFSET(0x1D425B10)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_EXECUTESSGIPASS_OFFSET UNITYSDK_OFFSET(0x1D423A50)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D42D1B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D42B5E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1D423980)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_PREPAREHISTORY_OFFSET UNITYSDK_OFFSET(0x1D42B720)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D42D220)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D42B530)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SSGIPass_TypeDefinitionIndex = 5820;

	class SSGIPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool** StaticGet_SSGIDisableMultiBounce()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool**)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_TypeDefinitionIndex)->GetStaticField(0x5280);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableFloat** StaticGet_SSGISSNum()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableFloat**)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_TypeDefinitionIndex)->GetStaticField(0x5288);
		}
		static ::UnityEngine::NAPRenderPipeline0::SSGIPass_HistoryBuffer** StaticGet_s_history()
		{
			return (::UnityEngine::NAPRenderPipeline0::SSGIPass_HistoryBuffer**)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_TypeDefinitionIndex)->GetStaticField(0x5290);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableFloat** StaticGet_SSGIResoScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableFloat**)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_TypeDefinitionIndex)->GetStaticField(0x5298);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSampler()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_TypeDefinitionIndex)->GetStaticField(0x52A0);
		}
		static ::UnityEngine::Rendering::RenderTargetBinding* StaticGet_s_binding()
		{
			return (::UnityEngine::Rendering::RenderTargetBinding*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_TypeDefinitionIndex)->GetStaticField(0x52A8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool** StaticGet_SSGIUseLowPrecision()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool**)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_TypeDefinitionIndex)->GetStaticField(0x5308);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool** StaticGet_SSGIEnabled()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool**)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_TypeDefinitionIndex)->GetStaticField(0x5310);
		}
		static ::System::Boolean* StaticGet_s_InitializedOver()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_TypeDefinitionIndex)->GetStaticField(0x2BE0);
		}

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS__CCTOR_OFFSET))();
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_INITIALIZE_OFFSET))();
		}

		static ::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_ISENABLED_OFFSET))();
		}

		static ::System::Void CacheSceneColor(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 sceneColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_CACHESCENECOLOR_OFFSET))(cmd, sceneColor);
		}

		static ::System::Void PrepareHistory(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera, ::System::Int32 width, ::System::Int32 height, ::System::Int32 sceneColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_PREPAREHISTORY_OFFSET))(cmd, camera, width, height, sceneColor);
		}

		static ::System::Void ExecuteSSGIPass(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Int32 sceneColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_EXECUTESSGIPASS_OFFSET))(context, renderingData, sceneColor);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
