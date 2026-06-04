#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_TEXTCORE_FACEINFO_GET_ASCENTLINE_OFFSET UNITYSDK_OFFSET(0x2D29E40)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_BASELINE_OFFSET UNITYSDK_OFFSET(0x2D32440)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_CAPLINE_OFFSET UNITYSDK_OFFSET(0x3846C90)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_DESCENTLINE_OFFSET UNITYSDK_OFFSET(0x3846CB0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x3846C80)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_MEANLINE_OFFSET UNITYSDK_OFFSET(0x3846CA0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_POINTSIZE_OFFSET UNITYSDK_OFFSET(0x63E0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x3846C70)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_STRIKETHROUGHOFFSET_OFFSET UNITYSDK_OFFSET(0x3899040)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x388FD70)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x3899010)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x388FD80)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x388FD60)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_TABWIDTH_OFFSET UNITYSDK_OFFSET(0x3899070)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x2D2A550)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x3899030)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_ASCENTLINE_OFFSET UNITYSDK_OFFSET(0xC260)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_BASELINE_OFFSET UNITYSDK_OFFSET(0x3898FC0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_CAPLINE_OFFSET UNITYSDK_OFFSET(0x3898FB0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_DESCENTLINE_OFFSET UNITYSDK_OFFSET(0x3898FD0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_FAMILYNAME_OFFSET UNITYSDK_OFFSET(0x95B0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x387BF50)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_MEANLINE_OFFSET UNITYSDK_OFFSET(0x3879F90)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_POINTSIZE_OFFSET UNITYSDK_OFFSET(0xC4C0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x3872DE0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHOFFSET_OFFSET UNITYSDK_OFFSET(0x3899050)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHTHICKNESS_OFFSET UNITYSDK_OFFSET(0x3899060)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_STYLENAME_OFFSET UNITYSDK_OFFSET(0xB7C0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x3899000)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x3899020)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x3898FE0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x3898FF0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_TABWIDTH_OFFSET UNITYSDK_OFFSET(0x3899080)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINEOFFSET_OFFSET UNITYSDK_OFFSET(0xBEF0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0xBF00)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int FaceInfo_TypeDefinitionIndex = 5815;

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

		::System::Void set_familyName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_FAMILYNAME_OFFSET))(this, a1);
		}

		::System::Void set_styleName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_STYLENAME_OFFSET))(this, a1);
		}

		::System::Int32 get_pointSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_POINTSIZE_OFFSET))(this);
		}

		::System::Void set_pointSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_POINTSIZE_OFFSET))(this, a1);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_scale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SCALE_OFFSET))(this, a1);
		}

		::System::Single get_lineHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_LINEHEIGHT_OFFSET))(this);
		}

		::System::Void set_lineHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_LINEHEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_ascentLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_ASCENTLINE_OFFSET))(this);
		}

		::System::Void set_ascentLine(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_ASCENTLINE_OFFSET))(this, a1);
		}

		::System::Single get_capLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_CAPLINE_OFFSET))(this);
		}

		::System::Void set_capLine(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_CAPLINE_OFFSET))(this, a1);
		}

		::System::Single get_meanLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_MEANLINE_OFFSET))(this);
		}

		::System::Void set_meanLine(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_MEANLINE_OFFSET))(this, a1);
		}

		::System::Single get_baseline()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_BASELINE_OFFSET))(this);
		}

		::System::Void set_baseline(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_BASELINE_OFFSET))(this, a1);
		}

		::System::Single get_descentLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_DESCENTLINE_OFFSET))(this);
		}

		::System::Void set_descentLine(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_DESCENTLINE_OFFSET))(this, a1);
		}

		::System::Single get_superscriptOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTOFFSET_OFFSET))(this);
		}

		::System::Void set_superscriptOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_superscriptSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTSIZE_OFFSET))(this);
		}

		::System::Void set_superscriptSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTSIZE_OFFSET))(this, a1);
		}

		::System::Single get_subscriptOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTOFFSET_OFFSET))(this);
		}

		::System::Void set_subscriptOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_subscriptSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTSIZE_OFFSET))(this);
		}

		::System::Void set_subscriptSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTSIZE_OFFSET))(this, a1);
		}

		::System::Single get_underlineOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINEOFFSET_OFFSET))(this);
		}

		::System::Void set_underlineOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINEOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_underlineThickness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINETHICKNESS_OFFSET))(this);
		}

		::System::Void set_underlineThickness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINETHICKNESS_OFFSET))(this, a1);
		}

		::System::Single get_strikethroughOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_STRIKETHROUGHOFFSET_OFFSET))(this);
		}

		::System::Void set_strikethroughOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHOFFSET_OFFSET))(this, a1);
		}

		::System::Void set_strikethroughThickness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHTHICKNESS_OFFSET))(this, a1);
		}

		::System::Single get_tabWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_TABWIDTH_OFFSET))(this);
		}

		::System::Void set_tabWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_TABWIDTH_OFFSET))(this, a1);
		}
	};
}
