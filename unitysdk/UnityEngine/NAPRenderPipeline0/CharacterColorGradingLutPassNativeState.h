#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CharacterColorGradingParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1D66C690)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1D66C740)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D66C720)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D66C710)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D66C6A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_SETUPAFTERVOLUMEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D66C750)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D66C670)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CharacterColorGradingLutPassNativeState_TypeDefinitionIndex = 5723;

	class CharacterColorGradingLutPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams& ccgp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData, ccgp);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Boolean SetupAfterVolumeUpdate(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams& ccgp)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASSNATIVESTATE_SETUPAFTERVOLUMEUPDATE_OFFSET))(this, context, ccgp);
		}
	};
}
