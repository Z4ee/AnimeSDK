#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_TEXTCORE_FACEINFO_GET_ASCENTLINE_OFFSET UNITYSDK_OFFSET(0x4900A0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_BASELINE_OFFSET UNITYSDK_OFFSET(0x490100)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_CAPLINE_OFFSET UNITYSDK_OFFSET(0x4900C0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_DESCENTLINE_OFFSET UNITYSDK_OFFSET(0x490120)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x79AF70)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_MEANLINE_OFFSET UNITYSDK_OFFSET(0x4900E0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_POINTSIZE_OFFSET UNITYSDK_OFFSET(0x2C1260)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x9F06F0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_STRIKETHROUGHOFFSET_OFFSET UNITYSDK_OFFSET(0x79FB60)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x6C8E30)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x92A810)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x490140)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x926F20)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_TABWIDTH_OFFSET UNITYSDK_OFFSET(0x703FE0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x92A830)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0xA76540)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_ASCENTLINE_OFFSET UNITYSDK_OFFSET(0x4900B0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_BASELINE_OFFSET UNITYSDK_OFFSET(0x490110)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_CAPLINE_OFFSET UNITYSDK_OFFSET(0x4900D0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_DESCENTLINE_OFFSET UNITYSDK_OFFSET(0x490130)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_FAMILYNAME_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x9EB8F0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_MEANLINE_OFFSET UNITYSDK_OFFSET(0x4900F0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_POINTSIZE_OFFSET UNITYSDK_OFFSET(0x2C1270)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xA2E460)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHOFFSET_OFFSET UNITYSDK_OFFSET(0xA50D00)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHTHICKNESS_OFFSET UNITYSDK_OFFSET(0xA50D20)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_STYLENAME_OFFSET UNITYSDK_OFFSET(0x446DB0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x7F4DA0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x92A820)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x490150)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0xA76530)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_TABWIDTH_OFFSET UNITYSDK_OFFSET(0xA76550)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x91FC20)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x91FC30)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int FaceInfo_TypeDefinitionIndex = 32492;

	struct alignas(8) FaceInfo
	{
		::System::Int32 m_FaceIndex; // 0x10
		::System::String* m_FamilyName; // 0x18
		::System::String* m_StyleName; // 0x20
		::System::Int32 m_PointSize; // 0x28
		::System::Single m_Scale; // 0x2C
		::System::Single m_LineHeight; // 0x30
		::System::Single m_AscentLine; // 0x34
		::System::Single m_CapLine; // 0x38
		::System::Single m_MeanLine; // 0x3C
		::System::Single m_Baseline; // 0x40
		::System::Single m_DescentLine; // 0x44
		::System::Single m_SuperscriptOffset; // 0x48
		::System::Single m_SuperscriptSize; // 0x4C
		::System::Single m_SubscriptOffset; // 0x50
		::System::Single m_SubscriptSize; // 0x54
		::System::Single m_UnderlineOffset; // 0x58
		::System::Single m_UnderlineThickness; // 0x5C
		::System::Single m_StrikethroughOffset; // 0x60
		::System::Single m_StrikethroughThickness; // 0x64
		::System::Single m_TabWidth; // 0x68

		::System::Void set_familyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_FAMILYNAME_OFFSET))(this, value);
		}

		::System::Void set_styleName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_STYLENAME_OFFSET))(this, value);
		}

		::System::Int32 get_pointSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_POINTSIZE_OFFSET))(this);
		}

		::System::Void set_pointSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_POINTSIZE_OFFSET))(this, value);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_scale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SCALE_OFFSET))(this, value);
		}

		::System::Single get_lineHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_LINEHEIGHT_OFFSET))(this);
		}

		::System::Void set_lineHeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_LINEHEIGHT_OFFSET))(this, value);
		}

		::System::Single get_ascentLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_ASCENTLINE_OFFSET))(this);
		}

		::System::Void set_ascentLine(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_ASCENTLINE_OFFSET))(this, value);
		}

		::System::Single get_capLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_CAPLINE_OFFSET))(this);
		}

		::System::Void set_capLine(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_CAPLINE_OFFSET))(this, value);
		}

		::System::Single get_meanLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_MEANLINE_OFFSET))(this);
		}

		::System::Void set_meanLine(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_MEANLINE_OFFSET))(this, value);
		}

		::System::Single get_baseline()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_BASELINE_OFFSET))(this);
		}

		::System::Void set_baseline(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_BASELINE_OFFSET))(this, value);
		}

		::System::Single get_descentLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_DESCENTLINE_OFFSET))(this);
		}

		::System::Void set_descentLine(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_DESCENTLINE_OFFSET))(this, value);
		}

		::System::Single get_superscriptOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTOFFSET_OFFSET))(this);
		}

		::System::Void set_superscriptOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTOFFSET_OFFSET))(this, value);
		}

		::System::Single get_superscriptSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTSIZE_OFFSET))(this);
		}

		::System::Void set_superscriptSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTSIZE_OFFSET))(this, value);
		}

		::System::Single get_subscriptOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTOFFSET_OFFSET))(this);
		}

		::System::Void set_subscriptOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTOFFSET_OFFSET))(this, value);
		}

		::System::Single get_subscriptSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTSIZE_OFFSET))(this);
		}

		::System::Void set_subscriptSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTSIZE_OFFSET))(this, value);
		}

		::System::Single get_underlineOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINEOFFSET_OFFSET))(this);
		}

		::System::Void set_underlineOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINEOFFSET_OFFSET))(this, value);
		}

		::System::Single get_underlineThickness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINETHICKNESS_OFFSET))(this);
		}

		::System::Void set_underlineThickness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINETHICKNESS_OFFSET))(this, value);
		}

		::System::Single get_strikethroughOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_STRIKETHROUGHOFFSET_OFFSET))(this);
		}

		::System::Void set_strikethroughOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHOFFSET_OFFSET))(this, value);
		}

		::System::Void set_strikethroughThickness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHTHICKNESS_OFFSET))(this, value);
		}

		::System::Single get_tabWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_TABWIDTH_OFFSET))(this);
		}

		::System::Void set_tabWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_TABWIDTH_OFFSET))(this, value);
		}
	};
}
