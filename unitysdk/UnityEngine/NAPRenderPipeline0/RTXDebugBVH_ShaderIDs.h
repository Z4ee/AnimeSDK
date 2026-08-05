#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXDEBUGBVH_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F349AC0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXDebugBVH_ShaderIDs_TypeDefinitionIndex = 5808;

	class RTXDebugBVH_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__RTXDebugBVHResult()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXDebugBVH_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2D80);
		}
		static ::System::Int32* StaticGet__RTXDebugBVHMaxDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXDebugBVH_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2D84);
		}
		static ::System::Int32* StaticGet__RTXDebugBVHMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXDebugBVH_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2D88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXDEBUGBVH_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
