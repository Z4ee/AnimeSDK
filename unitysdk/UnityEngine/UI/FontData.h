#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/HorizontalWrapMode.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/TextFormattingTag.h"
#include "unitysdk/UnityEngine/VerticalWrapMode.h"

namespace UnityEngine { class Font; }

#define UNITYENGINE_UI_FONTDATA_GET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1A54B4B0)
#define UNITYENGINE_UI_FONTDATA_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A54B490)
#define UNITYENGINE_UI_FONTDATA_GET_ALLOWHORIZONTALWRAP_OFFSET UNITYSDK_OFFSET(0x1A54B410)
#define UNITYENGINE_UI_FONTDATA_GET_BESTFIT_OFFSET UNITYSDK_OFFSET(0x1A54B3F0)
#define UNITYENGINE_UI_FONTDATA_GET_DEFAULTFONTDATA_OFFSET UNITYSDK_OFFSET(0x1A54B320)
#define UNITYENGINE_UI_FONTDATA_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1A54B3B0)
#define UNITYENGINE_UI_FONTDATA_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1A54B3D0)
#define UNITYENGINE_UI_FONTDATA_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1A54B390)
#define UNITYENGINE_UI_FONTDATA_GET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A54B530)
#define UNITYENGINE_UI_FONTDATA_GET_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x1A54B510)
#define UNITYENGINE_UI_FONTDATA_GET_JUSTIFY_OFFSET UNITYSDK_OFFSET(0x1A54B4D0)
#define UNITYENGINE_UI_FONTDATA_GET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x1A54B570)
#define UNITYENGINE_UI_FONTDATA_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A54B470)
#define UNITYENGINE_UI_FONTDATA_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1A54B450)
#define UNITYENGINE_UI_FONTDATA_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x1A54B430)
#define UNITYENGINE_UI_FONTDATA_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1A54B4F0)
#define UNITYENGINE_UI_FONTDATA_GET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A54B550)
#define UNITYENGINE_UI_FONTDATA_SET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1A54B4C0)
#define UNITYENGINE_UI_FONTDATA_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A54B4A0)
#define UNITYENGINE_UI_FONTDATA_SET_ALLOWHORIZONTALWRAP_OFFSET UNITYSDK_OFFSET(0x1A54B420)
#define UNITYENGINE_UI_FONTDATA_SET_BESTFIT_OFFSET UNITYSDK_OFFSET(0x1A54B400)
#define UNITYENGINE_UI_FONTDATA_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1A54B3C0)
#define UNITYENGINE_UI_FONTDATA_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1A54B3E0)
#define UNITYENGINE_UI_FONTDATA_SET_FONT_OFFSET UNITYSDK_OFFSET(0x1A54B3A0)
#define UNITYENGINE_UI_FONTDATA_SET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A54B540)
#define UNITYENGINE_UI_FONTDATA_SET_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x1A54B520)
#define UNITYENGINE_UI_FONTDATA_SET_JUSTIFY_OFFSET UNITYSDK_OFFSET(0x1A54B4E0)
#define UNITYENGINE_UI_FONTDATA_SET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x1A54B580)
#define UNITYENGINE_UI_FONTDATA_SET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A54B480)
#define UNITYENGINE_UI_FONTDATA_SET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1A54B460)
#define UNITYENGINE_UI_FONTDATA_SET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x1A54B440)
#define UNITYENGINE_UI_FONTDATA_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1A54B500)
#define UNITYENGINE_UI_FONTDATA_SET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A54B560)
#define UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A54B5A0)
#define UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A54B590)
#define UNITYENGINE_UI_FONTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A54B380)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int FontData_TypeDefinitionIndex = 5593;

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

		::System::Void set_font(::UnityEngine::Font* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_FONT_OFFSET))(this, value);
		}

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_FONTSIZE_OFFSET))(this);
		}

		::System::Void set_fontSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_FONTSIZE_OFFSET))(this, value);
		}

		::UnityEngine::FontStyle get_fontStyle()
		{
			return ((::UnityEngine::FontStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_FONTSTYLE_OFFSET))(this);
		}

		::System::Void set_fontStyle(::UnityEngine::FontStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::FontStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_FONTSTYLE_OFFSET))(this, value);
		}

		::System::Boolean get_bestFit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_BESTFIT_OFFSET))(this);
		}

		::System::Void set_bestFit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_BESTFIT_OFFSET))(this, value);
		}

		::System::Boolean get_allowHorizontalWrap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_ALLOWHORIZONTALWRAP_OFFSET))(this);
		}

		::System::Void set_allowHorizontalWrap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_ALLOWHORIZONTALWRAP_OFFSET))(this, value);
		}

		::System::Int32 get_minSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_MINSIZE_OFFSET))(this);
		}

		::System::Void set_minSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_MINSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_maxSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_MAXSIZE_OFFSET))(this);
		}

		::System::Void set_maxSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_MAXSIZE_OFFSET))(this, value);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Void set_maxHeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_MAXHEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::TextAnchor get_alignment()
		{
			return ((::UnityEngine::TextAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::TextAnchor value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Boolean get_alignByGeometry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_ALIGNBYGEOMETRY_OFFSET))(this);
		}

		::System::Void set_alignByGeometry(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_ALIGNBYGEOMETRY_OFFSET))(this, value);
		}

		::System::Boolean get_justify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_JUSTIFY_OFFSET))(this);
		}

		::System::Void set_justify(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_JUSTIFY_OFFSET))(this, value);
		}

		::System::Boolean get_richText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_RICHTEXT_OFFSET))(this);
		}

		::System::Void set_richText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_RICHTEXT_OFFSET))(this, value);
		}

		::UnityEngine::TextFormattingTag get_invalidTag()
		{
			return ((::UnityEngine::TextFormattingTag(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_INVALIDTAG_OFFSET))(this);
		}

		::System::Void set_invalidTag(::UnityEngine::TextFormattingTag value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormattingTag))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_INVALIDTAG_OFFSET))(this, value);
		}

		::UnityEngine::HorizontalWrapMode get_horizontalOverflow()
		{
			return ((::UnityEngine::HorizontalWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_HORIZONTALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_horizontalOverflow(::UnityEngine::HorizontalWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::HorizontalWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_HORIZONTALOVERFLOW_OFFSET))(this, value);
		}

		::UnityEngine::VerticalWrapMode get_verticalOverflow()
		{
			return ((::UnityEngine::VerticalWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_VERTICALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_verticalOverflow(::UnityEngine::VerticalWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VerticalWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_VERTICALOVERFLOW_OFFSET))(this, value);
		}

		::System::Single get_lineSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_LINESPACING_OFFSET))(this);
		}

		::System::Void set_lineSpacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_LINESPACING_OFFSET))(this, value);
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
