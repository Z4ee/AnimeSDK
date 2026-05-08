#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CharacterColorGradingParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class CharacterColorGradingLutPassNativeState; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B0BF8C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_NATIVEIMPL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B0BF800)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_NATIVEIMPL_SETUPAFTERVOLUMEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B0BF8F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_NATIVEIMPL_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B0BF810)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BF820)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CharacterColorGradingLutPass_NativeImpl_TypeDefinitionIndex = 5722;

	class CharacterColorGradingLutPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPass_NativeImpl** StaticGet__instance_k__BackingField()
		{
			return (::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPass_NativeImpl**)Il2CppClass::FromTypeDefinitionIndex(CharacterColorGradingLutPass_NativeImpl_TypeDefinitionIndex)->GetStaticField(0x53A0);
		}
		::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPassNativeState* m_NativeState; // 0xA8
		::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams m_CharacterColorGradingParams; // 0xB0

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		static ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPass_NativeImpl* get_instance()
		{
			return ((::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPass_NativeImpl*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_NATIVEIMPL_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_instance(::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPass_NativeImpl* value)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CharacterColorGradingLutPass_NativeImpl*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_NATIVEIMPL_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void SetupAfterVolumeUpdate(::UnityEngine::Rendering::ScriptableRenderContext& context, ::System::Boolean& rampParamsDirty)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORGRADINGLUTPASS_NATIVEIMPL_SETUPAFTERVOLUMEUPDATE_OFFSET))(this, context, rampParamsDirty);
		}
	};
}
