#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALKEYWORDINDEX_OFFSET UNITYSDK_OFFSET(0x1B2D11C0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1B2D1260)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETKEYWORDINDEX_OFFSET UNITYSDK_OFFSET(0x1B2D11D0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETSHADERKEYWORDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2D11F0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETSHADERKEYWORDNAMES_OFFSET UNITYSDK_OFFSET(0x1B2D11E0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_ISVALID_OFFSET UNITYSDK_OFFSET(0x388B4E0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x388B4C0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD__CTOR_OFFSET UNITYSDK_OFFSET(0x388B4A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderKeyword_TypeDefinitionIndex = 4872;

	struct alignas(4) ShaderKeyword
	{
		::System::Int32 m_KeywordIndex; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::Shader* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 GetGlobalKeywordIndex(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALKEYWORDINDEX_OFFSET))(a1);
		}

		static ::System::Int32 GetKeywordIndex(::UnityEngine::Shader* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETKEYWORDINDEX_OFFSET))(a1, a2);
		}

		static ::System::Void GetShaderKeywordNames(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETSHADERKEYWORDNAMES_OFFSET))(a1);
		}

		static ::System::Int32 GetShaderKeywordCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETSHADERKEYWORDCOUNT_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GET_INDEX_OFFSET))(this);
		}

		static ::System::Void GetGlobalShaderKeywords(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALSHADERKEYWORDS_OFFSET))(a1);
		}
	};
}
