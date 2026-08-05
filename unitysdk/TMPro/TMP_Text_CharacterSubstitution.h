#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define TMPRO_TMP_TEXT_CHARACTERSUBSTITUTION__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Text_CharacterSubstitution_TypeDefinitionIndex = 39880;

	struct alignas(4) TMP_Text_CharacterSubstitution
	{
		::System::Int32 index; // 0x10
		::System::UInt32 unicode; // 0x14

		::System::Void _ctor(::System::Int32 index, ::System::UInt32 unicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_CHARACTERSUBSTITUTION__CTOR_OFFSET))(this, index, unicode);
		}
	};
}
