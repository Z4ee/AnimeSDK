#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_GETQUADTAGMATERIAL_OFFSET UNITYSDK_OFFSET(0x19F5E880)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISGLYPHCHARACTER_OFFSET UNITYSDK_OFFSET(0x19F5E570)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISLINECURSORYRELIABLE_OFFSET UNITYSDK_OFFSET(0x19F5EF10)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISNONDEFAULTMATERIALQUAD_OFFSET UNITYSDK_OFFSET(0x19F5EE90)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISPREREORDERBUFFER_OFFSET UNITYSDK_OFFSET(0x19F5E520)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISQUADTAGPLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x19F5E6B0)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_SKIPDEGENQUADS_OFFSET UNITYSDK_OFFSET(0x19F5E5F0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextGeneratorUtils_TypeDefinitionIndex = 76802;

	class TextGeneratorUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsPreReorderBuffer(::System::Int32 totalVertCount, ::System::Int32 charInfoCount)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISPREREORDERBUFFER_OFFSET))(totalVertCount, charInfoCount);
		}

		static ::System::Boolean IsGlyphCharacter(::System::Single charWidth, ::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISGLYPHCHARACTER_OFFSET))(charWidth, ch);
		}

		static ::System::Int32 SkipDegenQuads(::UnityEngine::UI::VertexHelper* vh, ::System::Int32& meshVI, ::System::Int32 totalVertCount)
		{
			return ((::System::Int32(*)(::UnityEngine::UI::VertexHelper*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_SKIPDEGENQUADS_OFFSET))(vh, meshVI, totalVertCount);
		}

		static ::System::Boolean IsQuadTagPlaceholder(::System::String* txt, ::System::Int32 i, ::System::Int32 txtLen)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISQUADTAGPLACEHOLDER_OFFSET))(txt, i, txtLen);
		}

		static ::System::Int32 GetQuadTagMaterial(::System::String* txt, ::System::Int32 i, ::System::Int32 txtLen)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_GETQUADTAGMATERIAL_OFFSET))(txt, i, txtLen);
		}

		static ::System::Boolean IsNonDefaultMaterialQuad(::System::String* txt, ::System::Int32 i, ::System::Int32 txtLen)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISNONDEFAULTMATERIALQUAD_OFFSET))(txt, i, txtLen);
		}

		static ::System::Boolean IsLineCursorYReliable(::System::String* txt, ::System::Int32 ci, ::System::Int32 txtLen)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISLINECURSORYRELIABLE_OFFSET))(txt, ci, txtLen);
		}
	};
}
