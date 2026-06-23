#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_LOCALLIGHTSHADOWCACHECONFIGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A2CC0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PunctualLightShadowCasterPass_LocalLightShadowCacheConfigs_TypeDefinitionIndex = 5812;

	class PunctualLightShadowCasterPass_LocalLightShadowCacheConfigs : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_kSkipUpdateFrames()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2210);
		}
		static ::System::UInt32* StaticGet_kMaxDynamicUpdatesPerFrame()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2214);
		}
		static ::System::Single* StaticGet_kNoSkipDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2218);
		}
		static ::System::UInt32* StaticGet_kMaxShadowedLightCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x221C);
		}
		static ::System::Single* StaticGet_kDynamicUpdateDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2220);
		}
		static ::System::UInt32* StaticGet_k_MaxShadowSlickCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2224);
		}
		static ::System::Single* StaticGet_kLocalLightCastShadowDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x2228);
		}
		static ::System::UInt32* StaticGet_kMaxStaticUpdatesPerFrame()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PunctualLightShadowCasterPass_LocalLightShadowCacheConfigs_TypeDefinitionIndex)->GetStaticField(0x222C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PUNCTUALLIGHTSHADOWCASTERPASS_LOCALLIGHTSHADOWCACHECONFIGS__CCTOR_OFFSET))();
		}
	};
}
