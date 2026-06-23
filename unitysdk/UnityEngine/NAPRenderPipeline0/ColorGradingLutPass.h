#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1DA292C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_GENERATECOLORGRADINGLUT_OFFSET UNITYSDK_OFFSET(0x1DA29790)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA2A090)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA291D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ColorGradingLutPass_TypeDefinitionIndex = 5815;

	class ColorGradingLutPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Single* StaticGet_s_LiftGammaGainSettingStrength()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingLutPass_TypeDefinitionIndex)->GetStaticField(0x2E70);
		}
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_HdrLutFormat; // 0xA8
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_LdrLutFormat; // 0xAC
		::Il2CppArray<::System::Int32>* m_OldHashCodes; // 0xB0
		::System::Int32 m_OldLutSize; // 0xB8
		::System::UInt64 m_LastDrawStamp; // 0xC0
		::System::Boolean m_OldIsHdr; // 0xC8
		::System::Single m_OldLiftGammaGainSettingStrength; // 0xCC
		::System::String* m_ProfileTag; // 0xD0

		::System::Void _ctor(::System::String* profileTag, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent renderPassEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS__CTOR_OFFSET))(this, profileTag, renderPassEvent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS__CCTOR_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void GenerateColorGradingLut(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 lutWidth, ::System::Int32 lutHeight)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASS_GENERATECOLORGRADINGLUT_OFFSET))(cmd, lutWidth, lutHeight);
		}
	};
}
