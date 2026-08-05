#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXCOMMONSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA632D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXCOMMONSHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA62A90)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex = 5790;

	class RTXRenderer_RTXCommonShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__V_Inv()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2230);
		}
		static ::System::Int32* StaticGet__VP_Inv()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2234);
		}
		static ::System::Int32* StaticGet__Exposure()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2238);
		}
		static ::System::Int32* StaticGet__Procedural()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x223C);
		}
		static ::System::Int32* StaticGet__Skybox()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2240);
		}
		static ::System::Int32* StaticGet__P()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2244);
		}
		static ::System::Int32* StaticGet__VP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2248);
		}
		static ::System::Int32* StaticGet__VP_Inv_NoJitter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x224C);
		}
		static ::System::Int32* StaticGet__P_Inv()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2250);
		}
		static ::System::Int32* StaticGet__V()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2254);
		}
		static ::System::Int32* StaticGet__RaytracingAccelerationStructure()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2258);
		}
		static ::System::Int32* StaticGet__TLut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x225C);
		}
		static ::System::Int32* StaticGet__Rotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2260);
		}
		static ::System::Int32* StaticGet__Tint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2264);
		}
		static ::System::Int32* StaticGet__VP_NoJitter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2268);
		}
		static ::System::Int32* StaticGet__MainTex_HDR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x226C);
		}
		static ::System::Int32* StaticGet__P_NoJitter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXCommonShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2270);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXCOMMONSHADERIDS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXCOMMONSHADERIDS__CCTOR_OFFSET))();
		}
	};
}
