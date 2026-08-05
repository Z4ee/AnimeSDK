#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1E317710)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1E3177C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E3177D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E3177A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E317790)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E317720)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_GETLIFTGAMMAGAINSETTINGSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1E317890)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_SETLIFTGAMMAGAINSETTINGSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1E317880)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3176F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ColorGradingLutPassNativeState_TypeDefinitionIndex = 5721;

	class ColorGradingLutPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_DISPOSE_1_OFFSET))(this);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		static ::System::Void SetLiftGammaGainSettingStrength(::System::Single lerpv)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_SETLIFTGAMMAGAINSETTINGSTRENGTH_OFFSET))(lerpv);
		}

		static ::System::Single GetLiftGammaGainSettingStrength()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORGRADINGLUTPASSNATIVESTATE_GETLIFTGAMMAGAINSETTINGSTRENGTH_OFFSET))();
		}
	};
}
