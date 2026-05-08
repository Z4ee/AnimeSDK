#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/TMP_Offset.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class Object; }

#define TMPRO_HIGHLIGHTSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9DF520)
#define TMPRO_HIGHLIGHTSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9DF4B0)
#define TMPRO_HIGHLIGHTSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9DF440)
#define TMPRO_HIGHLIGHTSTATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C50CE80)
#define TMPRO_HIGHLIGHTSTATE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C50CF10)
#define TMPRO_HIGHLIGHTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x37DE40)

namespace TMPro
{
	inline static constexpr unsigned int HighlightState_TypeDefinitionIndex = 37478;

	struct alignas(4) HighlightState
	{
		::UnityEngine::Color32 color; // 0x10
		::TMPro::TMP_Offset padding; // 0x14

		::System::Void _ctor(::UnityEngine::Color32 color, ::TMPro::TMP_Offset padding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32, ::TMPro::TMP_Offset))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE__CTOR_OFFSET))(this, color, padding);
		}

		static ::System::Boolean op_Equality(::TMPro::HighlightState lhs, ::TMPro::HighlightState rhs)
		{
			return ((::System::Boolean(*)(::TMPro::HighlightState, ::TMPro::HighlightState))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::TMPro::HighlightState lhs, ::TMPro::HighlightState rhs)
		{
			return ((::System::Boolean(*)(::TMPro::HighlightState, ::TMPro::HighlightState))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::TMPro::HighlightState other)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::HighlightState))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_EQUALS_1_OFFSET))(this, other);
		}
	};
}
