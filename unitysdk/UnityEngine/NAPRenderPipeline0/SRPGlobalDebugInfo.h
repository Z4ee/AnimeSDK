#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALDEBUGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B496070)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SRPGlobalDebugInfo_TypeDefinitionIndex = 6024;

	class SRPGlobalDebugInfo : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_visaibleFakeSpotLightFogCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A30);
		}
		static ::System::Int32* StaticGet_visiableLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A34);
		}
		static ::System::Int32* StaticGet_visiableCharacterNapLightDataCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A38);
		}
		static ::System::Int32* StaticGet_visiableSpotShadowCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A3C);
		}
		static ::System::Int32* StaticGet_visiablePointLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A40);
		}
		static ::System::Int32* StaticGet_visiableSpecularSceneLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A44);
		}
		static ::System::Int32* StaticGet_visiableFakePointLightFogCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A48);
		}
		static ::System::Int32* StaticGet_visiableReflectionProbeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A4C);
		}
		static ::System::Int32* StaticGet_visiableNapLightDataCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A50);
		}
		static ::System::Int32* StaticGet_visiableSpotLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A54);
		}
		static ::System::Int32* StaticGet_visiablePointShadowCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A58);
		}
		static ::System::Int32* StaticGet_visiableDiffuseOnlySceneLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A5C);
		}
		static ::System::Int32* StaticGet_visiableSceneNapLightDataCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALDEBUGINFO__CTOR_OFFSET))(this);
		}
	};
}
