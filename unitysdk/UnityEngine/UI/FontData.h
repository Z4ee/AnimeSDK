#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/HorizontalWrapMode.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/VerticalWrapMode.h"

namespace UnityEngine { class Font; }

#define UNITYENGINE_UI_FONTDATA_GET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1C154BC0)
#define UNITYENGINE_UI_FONTDATA_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1C154BA0)
#define UNITYENGINE_UI_FONTDATA_GET_BESTFIT_OFFSET UNITYSDK_OFFSET(0x1C154B40)
#define UNITYENGINE_UI_FONTDATA_GET_DEFAULTFONTDATA_OFFSET UNITYSDK_OFFSET(0x1C154A20)
#define UNITYENGINE_UI_FONTDATA_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1C154B00)
#define UNITYENGINE_UI_FONTDATA_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1C154B20)
#define UNITYENGINE_UI_FONTDATA_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1C154AE0)
#define UNITYENGINE_UI_FONTDATA_GET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1C154C00)
#define UNITYENGINE_UI_FONTDATA_GET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x1C154C40)
#define UNITYENGINE_UI_FONTDATA_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1C154B80)
#define UNITYENGINE_UI_FONTDATA_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x1C154B60)
#define UNITYENGINE_UI_FONTDATA_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1C154BE0)
#define UNITYENGINE_UI_FONTDATA_GET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1C154C20)
#define UNITYENGINE_UI_FONTDATA_SET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1C154BD0)
#define UNITYENGINE_UI_FONTDATA_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1C154BB0)
#define UNITYENGINE_UI_FONTDATA_SET_BESTFIT_OFFSET UNITYSDK_OFFSET(0x1C154B50)
#define UNITYENGINE_UI_FONTDATA_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1C154B10)
#define UNITYENGINE_UI_FONTDATA_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1C154B30)
#define UNITYENGINE_UI_FONTDATA_SET_FONT_OFFSET UNITYSDK_OFFSET(0x1C154AF0)
#define UNITYENGINE_UI_FONTDATA_SET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1C154C10)
#define UNITYENGINE_UI_FONTDATA_SET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x1C154C50)
#define UNITYENGINE_UI_FONTDATA_SET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1C154B90)
#define UNITYENGINE_UI_FONTDATA_SET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x1C154B70)
#define UNITYENGINE_UI_FONTDATA_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1C154BF0)
#define UNITYENGINE_UI_FONTDATA_SET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1C154C30)
#define UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C154CA0)
#define UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C154C60)
#define UNITYENGINE_UI_FONTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C154AD0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int FontData_TypeDefinitionIndex = 8360;

	class FontData : public ::System::Object
	{
	public:
		::UnityEngine::Font* m_Font; // 0x10
		::System::Int32 m_FontSize; // 0x18
		::UnityEngine::FontStyle m_FontStyle; // 0x1C
		::System::Boolean m_BestFit; // 0x20
		::System::Int32 m_MinSize; // 0x24
		::System::Int32 m_MaxSize; // 0x28
		::UnityEngine::TextAnchor m_Alignment; // 0x2C
		::System::Boolean m_AlignByGeometry; // 0x30
		::System::Boolean m_RichText; // 0x31
		::UnityEngine::HorizontalWrapMode m_HorizontalOverflow; // 0x34
		::UnityEngine::VerticalWrapMode m_VerticalOverflow; // 0x38
		::System::Single m_LineSpacing; // 0x3C

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

		::System::Boolean get_richText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_RICHTEXT_OFFSET))(this);
		}

		::System::Void set_richText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_RICHTEXT_OFFSET))(this, value);
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
