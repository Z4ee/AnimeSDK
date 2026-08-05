#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/TextGeneratorUtils_GlyphBoundsContext.h"
#include "unitysdk/UnityEngine/UI/Extension/TextGeneratorUtils_GlyphBoundsResult.h"
#include "unitysdk/UnityEngine/UI/Extension/TextGeneratorUtils_ZeroWidthCharKind.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_CLASSIFYZEROWIDTH_OFFSET UNITYSDK_OFFSET(0x1CB98F50)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_COMPUTEGLYPHBOUNDS_OFFSET UNITYSDK_OFFSET(0x1CB97CD0)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_EXTRACTVALIDQUADBOUNDS_OFFSET UNITYSDK_OFFSET(0x1CB98980)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_GETQUADTAGMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CB97610)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISGLYPHCHARACTER_OFFSET UNITYSDK_OFFSET(0x1CB97230)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISLINECURSORYRELIABLE_OFFSET UNITYSDK_OFFSET(0x1CB99030)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISNONDEFAULTMATERIALQUAD_OFFSET UNITYSDK_OFFSET(0x1CB97C00)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISNONSPACINGMARK_OFFSET UNITYSDK_OFFSET(0x1CB97330)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISPREREORDERBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB971E0)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISQUADTAGPLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x1CB97440)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_RESOLVEVERTEXINDEX_OFFSET UNITYSDK_OFFSET(0x1CB985C0)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_SKIPDEGENGLYPHVERTS_OFFSET UNITYSDK_OFFSET(0x1CB986C0)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_SKIPDEGENQUADS_OFFSET UNITYSDK_OFFSET(0x1CB97380)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB990D0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextGeneratorUtils_TypeDefinitionIndex = 83739;

	class TextGeneratorUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::TextGeneratorUtils_GlyphBoundsResult>** StaticGet_s_extractedBounds()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::TextGeneratorUtils_GlyphBoundsResult>**)Il2CppClass::FromTypeDefinitionIndex(TextGeneratorUtils_TypeDefinitionIndex)->GetStaticField(0x47A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS__CCTOR_OFFSET))();
		}

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

		static ::UnityEngine::UI::Extension::TextGeneratorUtils_GlyphBoundsResult ComputeGlyphBounds(::UnityEngine::UI::Extension::TextGeneratorUtils_GlyphBoundsContext& ctx, ::System::Int32 glyphVertIdx, ::System::Boolean isIcon, ::UnityEngine::Vector2 cursorPos, ::System::Single originX, ::System::Single advanceX)
		{
			return ((::UnityEngine::UI::Extension::TextGeneratorUtils_GlyphBoundsResult(*)(::UnityEngine::UI::Extension::TextGeneratorUtils_GlyphBoundsContext&, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_COMPUTEGLYPHBOUNDS_OFFSET))(ctx, glyphVertIdx, isIcon, cursorPos, originX, advanceX);
		}

		static ::System::Int32 ResolveVertexIndex(::System::Boolean isPreReorder, ::System::Boolean isIcon, ::System::String* txt, ::System::Int32 charIdx, ::System::Int32 txtLen, ::System::Int32 vertexCursor, ::System::Boolean& isDeferredIcon)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_RESOLVEVERTEXINDEX_OFFSET))(isPreReorder, isIcon, txt, charIdx, txtLen, vertexCursor, isDeferredIcon);
		}

		static ::System::Int32 SkipDegenGlyphVerts(::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* genVerts, ::System::Int32 vertexCursor)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_SKIPDEGENGLYPHVERTS_OFFSET))(genVerts, vertexCursor);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::TextGeneratorUtils_GlyphBoundsResult>* ExtractValidQuadBounds(::UnityEngine::UI::Extension::TextGeneratorUtils_GlyphBoundsContext& ctx)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::TextGeneratorUtils_GlyphBoundsResult>*(*)(::UnityEngine::UI::Extension::TextGeneratorUtils_GlyphBoundsContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_EXTRACTVALIDQUADBOUNDS_OFFSET))(ctx);
		}

		static ::System::Boolean IsNonSpacingMark(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISNONSPACINGMARK_OFFSET))(ch);
		}

		static ::UnityEngine::UI::Extension::TextGeneratorUtils_ZeroWidthCharKind ClassifyZeroWidth(::System::Char ch)
		{
			return ((::UnityEngine::UI::Extension::TextGeneratorUtils_ZeroWidthCharKind(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_CLASSIFYZEROWIDTH_OFFSET))(ch);
		}

		static ::System::Boolean IsLineCursorYReliable(::System::String* txt, ::System::Int32 ci, ::System::Int32 txtLen)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_ISLINECURSORYRELIABLE_OFFSET))(txt, ci, txtLen);
		}
	};
}
