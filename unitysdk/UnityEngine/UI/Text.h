#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/HorizontalWrapMode.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/VerticalWrapMode.h"

namespace System { class String; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class FontData; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0x1C1A47F0)
#define UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1C1A5640)
#define UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1C1A5680)
#define UNITYENGINE_UI_TEXT_FONTTEXTURECHANGED_OFFSET UNITYSDK_OFFSET(0x1C1A3420)
#define UNITYENGINE_UI_TEXT_GETGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C1A4870)
#define UNITYENGINE_UI_TEXT_GETTEXTANCHORPIVOT_OFFSET UNITYSDK_OFFSET(0x1C1A4BD0)
#define UNITYENGINE_UI_TEXT_GET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1C1A3BC0)
#define UNITYENGINE_UI_TEXT_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1C1A3B10)
#define UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATORFORLAYOUT_OFFSET UNITYSDK_OFFSET(0x1C1A2D80)
#define UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0x1C1A2CD0)
#define UNITYENGINE_UI_TEXT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C1A5F30)
#define UNITYENGINE_UI_TEXT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1C1A5AF0)
#define UNITYENGINE_UI_TEXT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1C1A3C60)
#define UNITYENGINE_UI_TEXT_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1C1A3F30)
#define UNITYENGINE_UI_TEXT_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1C1A3400)
#define UNITYENGINE_UI_TEXT_GET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1C1A3D10)
#define UNITYENGINE_UI_TEXT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C1A5F40)
#define UNITYENGINE_UI_TEXT_GET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x1C1A3E70)
#define UNITYENGINE_UI_TEXT_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C1A2E20)
#define UNITYENGINE_UI_TEXT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C1A5B00)
#define UNITYENGINE_UI_TEXT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1C1A56C0)
#define UNITYENGINE_UI_TEXT_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1C1A3FE0)
#define UNITYENGINE_UI_TEXT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C1A5B10)
#define UNITYENGINE_UI_TEXT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1C1A56D0)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x1C1A3900)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x1C1A3A60)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTMINSIZE_OFFSET UNITYSDK_OFFSET(0x1C1A39B0)
#define UNITYENGINE_UI_TEXT_GET_SUPPORTRICHTEXT_OFFSET UNITYSDK_OFFSET(0x1C1A3850)
#define UNITYENGINE_UI_TEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C1A3740)
#define UNITYENGINE_UI_TEXT_GET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1C1A3DC0)
#define UNITYENGINE_UI_TEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C1A45B0)
#define UNITYENGINE_UI_TEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C1A4520)
#define UNITYENGINE_UI_TEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C1A4480)
#define UNITYENGINE_UI_TEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1C1A4C30)
#define UNITYENGINE_UI_TEXT_ONPROCESSVERTEX_OFFSET UNITYSDK_OFFSET(0x1C1A2BF0)
#define UNITYENGINE_UI_TEXT_SET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1C1A3BE0)
#define UNITYENGINE_UI_TEXT_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1C1A3B30)
#define UNITYENGINE_UI_TEXT_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1C1A3C80)
#define UNITYENGINE_UI_TEXT_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1C1A3F50)
#define UNITYENGINE_UI_TEXT_SET_FONT_OFFSET UNITYSDK_OFFSET(0x1C1A3630)
#define UNITYENGINE_UI_TEXT_SET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1C1A3D30)
#define UNITYENGINE_UI_TEXT_SET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x1C1A3E90)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x1C1A3920)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x1C1A3A80)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTMINSIZE_OFFSET UNITYSDK_OFFSET(0x1C1A39D0)
#define UNITYENGINE_UI_TEXT_SET_SUPPORTRICHTEXT_OFFSET UNITYSDK_OFFSET(0x1C1A3870)
#define UNITYENGINE_UI_TEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C1A3750)
#define UNITYENGINE_UI_TEXT_SET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1C1A3DE0)
#define UNITYENGINE_UI_TEXT_TEXTHIDE_OFFSET UNITYSDK_OFFSET(0x1C1A2BB0)
#define UNITYENGINE_UI_TEXT_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1C1A4640)
#define UNITYENGINE_UI_TEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1A5F50)
#define UNITYENGINE_UI_TEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A2C50)
#define UNITYENGINE_UI_TEXT___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C1A5F60)
#define UNITYENGINE_UI_TEXT___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C1A5FC0)
#define UNITYENGINE_UI_TEXT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C1A5FD0)
#define UNITYENGINE_UI_TEXT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C1A5FE0)
#define UNITYENGINE_UI_TEXT___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1C1A5FF0)
#define UNITYENGINE_UI_TEXT___BASE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1C1A6000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Text_TypeDefinitionIndex = 8464;

	class Text : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_DefaultText()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Text_TypeDefinitionIndex)->GetStaticField(0x4ACC0);
		}
		::System::Single m_FontTextureMinSize; // 0xF8
		::UnityEngine::UI::FontData* m_FontData; // 0x100
		::System::String* m_Text; // 0x108
		::UnityEngine::TextGenerator* m_TextCache; // 0x110
		::UnityEngine::TextGenerator* m_TextCacheForLayout; // 0x118
		::System::Boolean m_DisableFontTextureRebuiltCallback; // 0x120
		::UnityEngine::Vector2 uv3; // 0x124
		::System::Boolean isReadUv3; // 0x12C
		::Il2CppArray<::UnityEngine::UIVertex>* m_TempVerts; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT__CCTOR_OFFSET))();
		}

		::System::Boolean TextHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_TEXTHIDE_OFFSET))(this);
		}

		::System::Void OnProcessVertex(::UnityEngine::UIVertex& vertex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIVertex&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONPROCESSVERTEX_OFFSET))(this, vertex);
		}

		::UnityEngine::TextGenerator* get_cachedTextGenerator()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATOR_OFFSET))(this);
		}

		::UnityEngine::TextGenerator* get_cachedTextGeneratorForLayout()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATORFORLAYOUT_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void FontTextureChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_FONTTEXTURECHANGED_OFFSET))(this);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONT_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONT_OFFSET))(this, value);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_TEXT_OFFSET))(this, value);
		}

		::System::Boolean get_supportRichText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_SUPPORTRICHTEXT_OFFSET))(this);
		}

		::System::Void set_supportRichText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_SUPPORTRICHTEXT_OFFSET))(this, value);
		}

		::System::Boolean get_resizeTextForBestFit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTFORBESTFIT_OFFSET))(this);
		}

		::System::Void set_resizeTextForBestFit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTFORBESTFIT_OFFSET))(this, value);
		}

		::System::Int32 get_resizeTextMinSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTMINSIZE_OFFSET))(this);
		}

		::System::Void set_resizeTextMinSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTMINSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_resizeTextMaxSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTMAXSIZE_OFFSET))(this);
		}

		::System::Void set_resizeTextMaxSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTMAXSIZE_OFFSET))(this, value);
		}

		::UnityEngine::TextAnchor get_alignment()
		{
			return ((::UnityEngine::TextAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::TextAnchor value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Boolean get_alignByGeometry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ALIGNBYGEOMETRY_OFFSET))(this);
		}

		::System::Void set_alignByGeometry(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ALIGNBYGEOMETRY_OFFSET))(this, value);
		}

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONTSIZE_OFFSET))(this);
		}

		::System::Void set_fontSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONTSIZE_OFFSET))(this, value);
		}

		::UnityEngine::HorizontalWrapMode get_horizontalOverflow()
		{
			return ((::UnityEngine::HorizontalWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_HORIZONTALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_horizontalOverflow(::UnityEngine::HorizontalWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::HorizontalWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_HORIZONTALOVERFLOW_OFFSET))(this, value);
		}

		::UnityEngine::VerticalWrapMode get_verticalOverflow()
		{
			return ((::UnityEngine::VerticalWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_VERTICALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_verticalOverflow(::UnityEngine::VerticalWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VerticalWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_VERTICALOVERFLOW_OFFSET))(this, value);
		}

		::System::Single get_lineSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_LINESPACING_OFFSET))(this);
		}

		::System::Void set_lineSpacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_LINESPACING_OFFSET))(this, value);
		}

		::UnityEngine::FontStyle get_fontStyle()
		{
			return ((::UnityEngine::FontStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONTSTYLE_OFFSET))(this);
		}

		::System::Void set_fontStyle(::UnityEngine::FontStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::FontStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONTSTYLE_OFFSET))(this, value);
		}

		::System::Single get_pixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void AssignDefaultFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONT_OFFSET))(this);
		}

		::UnityEngine::TextGenerationSettings GetGenerationSettings(::UnityEngine::Vector2 extents)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETGENERATIONSETTINGS_OFFSET))(this, extents);
		}

		static ::UnityEngine::Vector2 GetTextAnchorPivot(::UnityEngine::TextAnchor anchor)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETTEXTANCHORPIVOT_OFFSET))(anchor);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT___BASE_UPDATEGEOMETRY_OFFSET))(this);
		}
	};
}
