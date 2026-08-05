#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_SSGISHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48CB10)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_SSGISHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E48CB00)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SSGIPass_SSGIShaderIDs_TypeDefinitionIndex = 5823;

	class SSGIPass_SSGIShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__SSGIReprojectionWeightTemp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2950);
		}
		static ::System::Int32* StaticGet__SSGIHistorySceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2954);
		}
		static ::System::Int32* StaticGet__SSGISceneDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2958);
		}
		static ::System::Int32* StaticGet__SSGI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x295C);
		}
		static ::System::Int32* StaticGet__SSGIHistory()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2960);
		}
		static ::System::Int32* StaticGet__SSGIReprojectionWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2964);
		}
		static ::System::Int32* StaticGet__SSGIHistorySceneNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2968);
		}
		static ::System::Int32* StaticGet__SSGITemp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x296C);
		}
		static ::System::Int32* StaticGet__SSGIHistorySceneDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2970);
		}
		static ::System::Int32* StaticGet__SSGISceneColorTemp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2974);
		}
		static ::System::Int32* StaticGet__SSGISceneNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2978);
		}
		static ::System::Int32* StaticGet__SSGISceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SSGIPass_SSGIShaderIDs_TypeDefinitionIndex)->GetStaticField(0x297C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_SSGISHADERIDS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSGIPASS_SSGISHADERIDS__CCTOR_OFFSET))();
		}
	};
}
