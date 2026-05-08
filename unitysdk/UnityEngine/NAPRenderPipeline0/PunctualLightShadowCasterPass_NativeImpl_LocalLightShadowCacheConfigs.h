#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_LOCALLIGHTSHADOWCACHECONFIGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4950D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PunctualLightShadowCasterPass_NativeImpl_LocalLightShadowCacheConfigs_TypeDefinitionIndex = 5716;

	class PunctualLightShadowCasterPass_NativeImpl_LocalLightShadowCacheConfigs : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_kDynamicUpdateDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_NativeImpl_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2B10);
		}
		static ::System::UInt32* StaticGet_kMaxShadowedLightCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_NativeImpl_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2B14);
		}
		static ::System::UInt32* StaticGet_k_MaxShadowSlickCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_NativeImpl_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2B18);
		}
		static ::System::UInt32* StaticGet_kSkipUpdateFrames()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_NativeImpl_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2B1C);
		}
		static ::System::UInt32* StaticGet_kMaxStaticUpdatesPerFrame()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_NativeImpl_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2B20);
		}
		static ::System::Single* StaticGet_kLocalLightCastShadowDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_NativeImpl_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2B24);
		}
		static ::System::Single* StaticGet_kNoSkipDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_NativeImpl_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2B28);
		}
		static ::System::UInt32* StaticGet_kMaxDynamicUpdatesPerFrame()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_NativeImpl_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2B2C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_NATIVEIMPL_LOCALLIGHTSHADOWCACHECONFIGS__CCTOR_OFFSET))();
		}
	};
}
