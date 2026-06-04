#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/TMP_Offset.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class Object; }

#define TMPRO_HIGHLIGHTSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x387A630)
#define TMPRO_HIGHLIGHTSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x387A5C0)
#define TMPRO_HIGHLIGHTSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x387A4D0)
#define TMPRO_HIGHLIGHTSTATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B198600)
#define TMPRO_HIGHLIGHTSTATE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B1986A0)
#define TMPRO_HIGHLIGHTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x2D2CE40)

namespace TMPro
{
	inline static constexpr unsigned int HighlightState_TypeDefinitionIndex = 40926;

	struct alignas(4) HighlightState
	{
		::UnityEngine::Color32 color; // 0x10
		::TMPro::TMP_Offset padding; // 0x14

		::System::Void _ctor(::UnityEngine::Color32 a1, ::TMPro::TMP_Offset a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32, ::TMPro::TMP_Offset))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean op_Equality(::TMPro::HighlightState a1, ::TMPro::HighlightState a2)
		{
			return ((::System::Boolean(*)(::TMPro::HighlightState, ::TMPro::HighlightState))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::TMPro::HighlightState a1, ::TMPro::HighlightState a2)
		{
			return ((::System::Boolean(*)(::TMPro::HighlightState, ::TMPro::HighlightState))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::TMPro::HighlightState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::HighlightState))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
