#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define TMPRO_TMP_GLYPHVALUERECORD_GET_XADVANCE_OFFSET UNITYSDK_OFFSET(0x3D1D70)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0x324CC0)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_YADVANCE_OFFSET UNITYSDK_OFFSET(0x478130)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0x44EB60)
#define TMPRO_TMP_GLYPHVALUERECORD_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E5E89A0)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_XADVANCE_OFFSET UNITYSDK_OFFSET(0x5A2BD0)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0x324A50)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_YADVANCE_OFFSET UNITYSDK_OFFSET(0x53D7C0)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0x5A2BC0)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x31EB80)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_2_OFFSET UNITYSDK_OFFSET(0x31EB80)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x5E7E90)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphValueRecord_TypeDefinitionIndex = 39813;

	struct alignas(4) TMP_GlyphValueRecord
	{
		::System::Single m_XPlacement; // 0x10
		::System::Single m_YPlacement; // 0x14
		::System::Single m_XAdvance; // 0x18
		::System::Single m_YAdvance; // 0x1C

		::System::Void _ctor(::System::Single xPlacement, ::System::Single yPlacement, ::System::Single xAdvance, ::System::Single yAdvance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD__CTOR_OFFSET))(this, xPlacement, yPlacement, xAdvance, yAdvance);
		}

		/*
		::System::Void _ctor_1(::TMPro::GlyphValueRecord_Legacy valueRecord)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::GlyphValueRecord_Legacy))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD__CTOR_1_OFFSET))(this, valueRecord);
		}
		*/

		/*
		::System::Void _ctor_2(::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD__CTOR_2_OFFSET))(this, valueRecord);
		}
		*/

		::System::Single get_xPlacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET))(this);
		}

		::System::Void set_xPlacement(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_XPLACEMENT_OFFSET))(this, value);
		}

		::System::Single get_yPlacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET))(this);
		}

		::System::Void set_yPlacement(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_YPLACEMENT_OFFSET))(this, value);
		}

		::System::Single get_xAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_XADVANCE_OFFSET))(this);
		}

		::System::Void set_xAdvance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_XADVANCE_OFFSET))(this, value);
		}

		::System::Single get_yAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_YADVANCE_OFFSET))(this);
		}

		::System::Void set_yAdvance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_YADVANCE_OFFSET))(this, value);
		}

		static ::TMPro::TMP_GlyphValueRecord op_Addition(::TMPro::TMP_GlyphValueRecord a, ::TMPro::TMP_GlyphValueRecord b)
		{
			return ((::TMPro::TMP_GlyphValueRecord(*)(::TMPro::TMP_GlyphValueRecord, ::TMPro::TMP_GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_OP_ADDITION_OFFSET))(a, b);
		}
	};
}
