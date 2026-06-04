#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/HorizontalWrapMode.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/TextFormattingTag.h"
#include "unitysdk/UnityEngine/VerticalWrapMode.h"

namespace UnityEngine { class Font; }

#define UNITYENGINE_UI_FONTDATA_GET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B396FD0)
#define UNITYENGINE_UI_FONTDATA_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B396FB0)
#define UNITYENGINE_UI_FONTDATA_GET_ALLOWHORIZONTALWRAP_OFFSET UNITYSDK_OFFSET(0x1B396F30)
#define UNITYENGINE_UI_FONTDATA_GET_BESTFIT_OFFSET UNITYSDK_OFFSET(0x1B396F10)
#define UNITYENGINE_UI_FONTDATA_GET_DEFAULTFONTDATA_OFFSET UNITYSDK_OFFSET(0x1B396E40)
#define UNITYENGINE_UI_FONTDATA_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1B396ED0)
#define UNITYENGINE_UI_FONTDATA_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1B396EF0)
#define UNITYENGINE_UI_FONTDATA_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1B396EB0)
#define UNITYENGINE_UI_FONTDATA_GET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1B397050)
#define UNITYENGINE_UI_FONTDATA_GET_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x1B397030)
#define UNITYENGINE_UI_FONTDATA_GET_JUSTIFY_OFFSET UNITYSDK_OFFSET(0x1B396FF0)
#define UNITYENGINE_UI_FONTDATA_GET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x1B397090)
#define UNITYENGINE_UI_FONTDATA_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B396F90)
#define UNITYENGINE_UI_FONTDATA_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1B396F70)
#define UNITYENGINE_UI_FONTDATA_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x1B396F50)
#define UNITYENGINE_UI_FONTDATA_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1B397010)
#define UNITYENGINE_UI_FONTDATA_GET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1B397070)
#define UNITYENGINE_UI_FONTDATA_SET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B396FE0)
#define UNITYENGINE_UI_FONTDATA_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B396FC0)
#define UNITYENGINE_UI_FONTDATA_SET_ALLOWHORIZONTALWRAP_OFFSET UNITYSDK_OFFSET(0x1B396F40)
#define UNITYENGINE_UI_FONTDATA_SET_BESTFIT_OFFSET UNITYSDK_OFFSET(0x1B396F20)
#define UNITYENGINE_UI_FONTDATA_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1B396EE0)
#define UNITYENGINE_UI_FONTDATA_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1B396F00)
#define UNITYENGINE_UI_FONTDATA_SET_FONT_OFFSET UNITYSDK_OFFSET(0x1B396EC0)
#define UNITYENGINE_UI_FONTDATA_SET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1B397060)
#define UNITYENGINE_UI_FONTDATA_SET_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x1B397040)
#define UNITYENGINE_UI_FONTDATA_SET_JUSTIFY_OFFSET UNITYSDK_OFFSET(0x1B397000)
#define UNITYENGINE_UI_FONTDATA_SET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x1B3970A0)
#define UNITYENGINE_UI_FONTDATA_SET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B396FA0)
#define UNITYENGINE_UI_FONTDATA_SET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1B396F80)
#define UNITYENGINE_UI_FONTDATA_SET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x1B396F60)
#define UNITYENGINE_UI_FONTDATA_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1B397020)
#define UNITYENGINE_UI_FONTDATA_SET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1B397080)
#define UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3970C0)
#define UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3970B0)
#define UNITYENGINE_UI_FONTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B396EA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int FontData_TypeDefinitionIndex = 5870;

	class FontData : public ::System::Object
	{
	public:
		::UnityEngine::Font* m_Font; // 0x10
		::System::Int32 m_FontSize; // 0x18
		::UnityEngine::FontStyle m_FontStyle; // 0x1C
		::System::Boolean m_BestFit; // 0x20
		::System::Boolean m_AllowHorizontalWrap; // 0x21
		::System::Int32 m_MinSize; // 0x24
		::System::Int32 m_MaxSize; // 0x28
		::System::Single m_MaxHeight; // 0x2C
		::UnityEngine::TextAnchor m_Alignment; // 0x30
		::System::Boolean m_AlignByGeometry; // 0x34
		::System::Boolean m_Justify; // 0x35
		::System::Boolean m_RichText; // 0x36
		::UnityEngine::TextFormattingTag m_InvalidTag; // 0x38
		::UnityEngine::HorizontalWrapMode m_HorizontalOverflow; // 0x3C
		::UnityEngine::VerticalWrapMode m_VerticalOverflow; // 0x40
		::System::Single m_LineSpacing; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::UI::FontData* get_defaultFontData()
		{
			return ((::UnityEngine::UI::FontData*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_DEFAULTFONTDATA_OFFSET))();
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_FONT_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_FONT_OFFSET))(this, a1);
		}

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_FONTSIZE_OFFSET))(this);
		}

		::System::Void set_fontSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_FONTSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::FontStyle get_fontStyle()
		{
			return ((::UnityEngine::FontStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_FONTSTYLE_OFFSET))(this);
		}

		::System::Void set_fontStyle(::UnityEngine::FontStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::FontStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_FONTSTYLE_OFFSET))(this, a1);
		}

		::System::Boolean get_bestFit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_BESTFIT_OFFSET))(this);
		}

		::System::Void set_bestFit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_BESTFIT_OFFSET))(this, a1);
		}

		::System::Boolean get_allowHorizontalWrap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_ALLOWHORIZONTALWRAP_OFFSET))(this);
		}

		::System::Void set_allowHorizontalWrap(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_ALLOWHORIZONTALWRAP_OFFSET))(this, a1);
		}

		::System::Int32 get_minSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_MINSIZE_OFFSET))(this);
		}

		::System::Void set_minSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_MINSIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_maxSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_MAXSIZE_OFFSET))(this);
		}

		::System::Void set_maxSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_MAXSIZE_OFFSET))(this, a1);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Void set_maxHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_MAXHEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::TextAnchor get_alignment()
		{
			return ((::UnityEngine::TextAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::TextAnchor a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_ALIGNMENT_OFFSET))(this, a1);
		}

		::System::Boolean get_alignByGeometry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_ALIGNBYGEOMETRY_OFFSET))(this);
		}

		::System::Void set_alignByGeometry(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_ALIGNBYGEOMETRY_OFFSET))(this, a1);
		}

		::System::Boolean get_justify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_JUSTIFY_OFFSET))(this);
		}

		::System::Void set_justify(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_JUSTIFY_OFFSET))(this, a1);
		}

		::System::Boolean get_richText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_RICHTEXT_OFFSET))(this);
		}

		::System::Void set_richText(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_RICHTEXT_OFFSET))(this, a1);
		}

		::UnityEngine::TextFormattingTag get_invalidTag()
		{
			return ((::UnityEngine::TextFormattingTag(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_INVALIDTAG_OFFSET))(this);
		}

		::System::Void set_invalidTag(::UnityEngine::TextFormattingTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormattingTag))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_INVALIDTAG_OFFSET))(this, a1);
		}

		::UnityEngine::HorizontalWrapMode get_horizontalOverflow()
		{
			return ((::UnityEngine::HorizontalWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_HORIZONTALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_horizontalOverflow(::UnityEngine::HorizontalWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::HorizontalWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_HORIZONTALOVERFLOW_OFFSET))(this, a1);
		}

		::UnityEngine::VerticalWrapMode get_verticalOverflow()
		{
			return ((::UnityEngine::VerticalWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_VERTICALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_verticalOverflow(::UnityEngine::VerticalWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VerticalWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_VERTICALOVERFLOW_OFFSET))(this, a1);
		}

		::System::Single get_lineSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_LINESPACING_OFFSET))(this);
		}

		::System::Void set_lineSpacing(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_LINESPACING_OFFSET))(this, a1);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
