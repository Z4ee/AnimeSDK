#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALKEYWORDINDEX_OFFSET UNITYSDK_OFFSET(0x1B4DD620)
#define UNITYENGINE_RENDERING_SHADERKEYWORD__CTOR_OFFSET UNITYSDK_OFFSET(0x96F440)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderKeyword_TypeDefinitionIndex = 6247;

	struct alignas(4) ShaderKeyword
	{
		::System::Int32 m_KeywordIndex; // 0x10

		::System::Void _ctor(::System::String* keywordName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD__CTOR_OFFSET))(this, keywordName);
		}

		static ::System::Int32 GetGlobalKeywordIndex(::System::String* keyword)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALKEYWORDINDEX_OFFSET))(keyword);
		}
	};
}
