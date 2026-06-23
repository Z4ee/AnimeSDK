#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { class IVisualEnvironmentE; }
namespace UnityEngine::NAPRenderPipeline0 { class IWeatherConfig; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1D7B3BE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D7B4350)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7B54C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B3A70)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SkyLutPass_TypeDefinitionIndex = 5845;

	class SkyLutPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Boolean* StaticGet_s_ForceUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SkyLutPass_TypeDefinitionIndex)->GetStaticField(0x2D90);
		}
		::System::String* k_ProfilerTag; // 0xA8
		::UnityEngine::NAPRenderPipeline0::IWeatherConfig* m_WeatherConfig; // 0xB0
		::UnityEngine::NAPRenderPipeline0::IWeatherConfig* m_LeftW; // 0xB8
		::UnityEngine::NAPRenderPipeline0::IWeatherConfig* m_RightW; // 0xC0
		::System::Boolean m_IsDynamicTime; // 0xC8
		::UnityEngine::NAPRenderPipeline0::IWeatherConfig* m_PreLeftW; // 0xD0
		::UnityEngine::NAPRenderPipeline0::IWeatherConfig* m_PreRightW; // 0xD8
		::UnityEngine::NAPRenderPipeline0::IWeatherConfig* m_PreWeatherConfig; // 0xE0
		::UnityEngine::NAPRenderPipeline0::IVisualEnvironmentE* m_PreVisualEnvironmentE; // 0xE8
		::System::Boolean m_SkyLutNeedChange; // 0xF0
		::System::Boolean m_SkyAngleLutNeedChange; // 0xF1
		::System::Single m_OldMainLightDir; // 0xF4
		::System::Boolean m_SkyAngleLutIsReady; // 0xF8
		::System::Boolean m_SkyLutIsReady; // 0xF9
		::Il2CppArray<::System::Int32>* oldHashes; // 0x100
		::Il2CppArray<::System::Int32>* newHashes; // 0x108

		::System::Void _ctor(::System::String* profileTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS__CTOR_OFFSET))(this, profileTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS__CCTOR_OFFSET))();
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_CONFIGURE_OFFSET))(this, cmd, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SKYLUTPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
