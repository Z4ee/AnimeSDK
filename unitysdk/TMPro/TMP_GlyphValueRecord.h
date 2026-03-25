#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define TMPRO_TMP_GLYPHVALUERECORD_GET_XADVANCE_OFFSET UNITYSDK_OFFSET(0xCCA0)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0xCC60)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_YADVANCE_OFFSET UNITYSDK_OFFSET(0xCCC0)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0xCC80)
#define TMPRO_TMP_GLYPHVALUERECORD_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x18920E40)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_XADVANCE_OFFSET UNITYSDK_OFFSET(0xCCB0)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0xCC70)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_YADVANCE_OFFSET UNITYSDK_OFFSET(0xCCD0)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0xCC90)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x152D780)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_2_OFFSET UNITYSDK_OFFSET(0x152D780)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x24C40)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphValueRecord_TypeDefinitionIndex = 34325;

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
