#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttributeDescriptor.h"

namespace System { class String; }

#define UNITYENGINE_RUNTIMESVC_GETSHADERCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCD8830)
#define UNITYENGINE_RUNTIMESVC_GETSHADERNAME_OFFSET UNITYSDK_OFFSET(0x1DCD8890)
#define UNITYENGINE_RUNTIMESVC_GETSHADERVARIANTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCD8850)
#define UNITYENGINE_RUNTIMESVC_GETSHADERVERTEXATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DCD8880)
#define UNITYENGINE_RUNTIMESVC_GETVARIANTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCD8840)
#define UNITYENGINE_RUNTIMESVC_GETVARIANTKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1DCD8860)
#define UNITYENGINE_RUNTIMESVC_GETVARIANTPASSIDX_OFFSET UNITYSDK_OFFSET(0x1DCD8870)
#define UNITYENGINE_RUNTIMESVC_SETQUALITYLEVELS_OFFSET UNITYSDK_OFFSET(0x1DCD88A0)
#define UNITYENGINE_RUNTIMESVC_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DCD8820)

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimeSVC_TypeDefinitionIndex = 4381;

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

		static ::System::Int32 GetShaderVariantCount(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETSHADERVARIANTCOUNT_OFFSET))(a1);
		}

		static ::System::String* GetVariantKeywords(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETVARIANTKEYWORDS_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetVariantPassIdx(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETVARIANTPASSIDX_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>* GetShaderVertexAttributes(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETSHADERVERTEXATTRIBUTES_OFFSET))(a1);
		}

		static ::System::String* GetShaderName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_GETSHADERNAME_OFFSET))(a1);
		}

		static ::System::Void SetQualityLevels(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMESVC_SETQUALITYLEVELS_OFFSET))(a1);
		}
	};
}
