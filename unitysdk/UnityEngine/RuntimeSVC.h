#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttributeDescriptor.h"

namespace System { class String; }

#define UNITYENGINE_RUNTIMESVC_GETSHADERCOUNT_OFFSET UNITYSDK_OFFSET(0x18A4BC90)
#define UNITYENGINE_RUNTIMESVC_GETSHADERNAME_OFFSET UNITYSDK_OFFSET(0x18A4BCF0)
#define UNITYENGINE_RUNTIMESVC_GETSHADERVARIANTCOUNT_OFFSET UNITYSDK_OFFSET(0x18A4BCB0)
#define UNITYENGINE_RUNTIMESVC_GETSHADERVERTEXATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18A4BCE0)
#define UNITYENGINE_RUNTIMESVC_GETVARIANTCOUNT_OFFSET UNITYSDK_OFFSET(0x18A4BCA0)
#define UNITYENGINE_RUNTIMESVC_GETVARIANTKEYWORDS_OFFSET UNITYSDK_OFFSET(0x18A4BCC0)
#define UNITYENGINE_RUNTIMESVC_GETVARIANTPASSIDX_OFFSET UNITYSDK_OFFSET(0x18A4BCD0)
#define UNITYENGINE_RUNTIMESVC_SETQUALITYLEVELS_OFFSET UNITYSDK_OFFSET(0x18A4BD00)
#define UNITYENGINE_RUNTIMESVC_UPDATE_OFFSET UNITYSDK_OFFSET(0x18A4BC80)

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimeSVC_TypeDefinitionIndex = 4190;

	class RuntimeSVC : public ::System::Object
	{
	public:
		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_UPDATE_OFFSET))();
		}

		static ::System::Int32 GetShaderCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETSHADERCOUNT_OFFSET))();
		}

		static ::System::Int32 GetVariantCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETVARIANTCOUNT_OFFSET))();
		}

		static ::System::Int32 GetShaderVariantCount(::System::String* shaderName)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETSHADERVARIANTCOUNT_OFFSET))(shaderName);
		}

		static ::System::String* GetVariantKeywords(::System::String* shaderName, ::System::Int32 variantIdxInShader)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETVARIANTKEYWORDS_OFFSET))(shaderName, variantIdxInShader);
		}

		static ::System::Int32 GetVariantPassIdx(::System::String* shaderName, ::System::Int32 variantIdxInShader)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETVARIANTPASSIDX_OFFSET))(shaderName, variantIdxInShader);
		}

		static ::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>* GetShaderVertexAttributes(::System::String* shaderName)
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETSHADERVERTEXATTRIBUTES_OFFSET))(shaderName);
		}

		static ::System::String* GetShaderName(::System::Int32 idx)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETSHADERNAME_OFFSET))(idx);
		}

		static ::System::Void SetQualityLevels(::Il2CppArray<::System::Int32>* qualityLevels)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_SETQUALITYLEVELS_OFFSET))(qualityLevels);
		}
	};
}
