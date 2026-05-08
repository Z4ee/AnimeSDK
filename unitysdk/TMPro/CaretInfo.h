#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/CaretPosition.h"

#define TMPRO_CARETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

namespace TMPro
{
	inline static constexpr unsigned int CaretInfo_TypeDefinitionIndex = 37602;

	struct alignas(4) CaretInfo
	{
		::System::Int32 index; // 0x10
		::TMPro::CaretPosition position; // 0x14

		::System::Void _ctor(::System::Int32 index, ::TMPro::CaretPosition position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::TMPro::CaretPosition))((::PBYTE)hIl2Cpp + TMPRO_CARETINFO__CTOR_OFFSET))(this, index, position);
		}
	};
}
