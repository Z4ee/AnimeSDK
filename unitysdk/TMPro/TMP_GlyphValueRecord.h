#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define TMPRO_TMP_GLYPHVALUERECORD_GET_XADVANCE_OFFSET UNITYSDK_OFFSET(0xB5A200)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0x213E0)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_YADVANCE_OFFSET UNITYSDK_OFFSET(0xB5A7F0)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0x784700)
#define TMPRO_TMP_GLYPHVALUERECORD_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x18B41910)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_XADVANCE_OFFSET UNITYSDK_OFFSET(0x3A546B0)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0x21240)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_YADVANCE_OFFSET UNITYSDK_OFFSET(0x3A546C0)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0x3A545E0)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x148D0)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_2_OFFSET UNITYSDK_OFFSET(0x148D0)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x82E380)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphValueRecord_TypeDefinitionIndex = 43397;

	struct alignas(4) TMP_GlyphValueRecord
	{
		::System::Single m_XPlacement; // 0x10
		::System::Single m_YPlacement; // 0x14
		::System::Single m_XAdvance; // 0x18
		::System::Single m_YAdvance; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		/*
		::System::Void _ctor_1(::TMPro::GlyphValueRecord_Legacy a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::GlyphValueRecord_Legacy))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD__CTOR_1_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void _ctor_2(::UnityEngine::TextCore::LowLevel::GlyphValueRecord a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD__CTOR_2_OFFSET))(this, a1);
		}
		*/

		::System::Single get_xPlacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET))(this);
		}

		::System::Void set_xPlacement(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_XPLACEMENT_OFFSET))(this, a1);
		}

		::System::Single get_yPlacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET))(this);
		}

		::System::Void set_yPlacement(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_YPLACEMENT_OFFSET))(this, a1);
		}

		::System::Single get_xAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_XADVANCE_OFFSET))(this);
		}

		::System::Void set_xAdvance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_XADVANCE_OFFSET))(this, a1);
		}

		::System::Single get_yAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_YADVANCE_OFFSET))(this);
		}

		::System::Void set_yAdvance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_YADVANCE_OFFSET))(this, a1);
		}

		static ::TMPro::TMP_GlyphValueRecord op_Addition(::TMPro::TMP_GlyphValueRecord a1, ::TMPro::TMP_GlyphValueRecord a2)
		{
			return ((::TMPro::TMP_GlyphValueRecord(*)(::TMPro::TMP_GlyphValueRecord, ::TMPro::TMP_GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_OP_ADDITION_OFFSET))(a1, a2);
		}
	};
}
