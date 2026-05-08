#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1B3A4D20)
#define UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1B3A4DC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B3A4DA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B3A4DE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B3A4D30)
#define UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1B3A4DD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A4D00)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TransparentSettingsPassNativeState_TypeDefinitionIndex = 5753;

	class TransparentSettingsPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::Boolean shadowReceiveSupported)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE__CTOR_OFFSET))(this, shadowReceiveSupported);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative(::System::Boolean shadowReceiveSupported)
		{
			return ((::System::IntPtr(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_CREATENATIVE_OFFSET))(shadowReceiveSupported);
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Boolean Setup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_SETUP_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TRANSPARENTSETTINGSPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
