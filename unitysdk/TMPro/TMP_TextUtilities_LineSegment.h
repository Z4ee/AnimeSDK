#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define TMPRO_TMP_TEXTUTILITIES_LINESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x25280)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextUtilities_LineSegment_TypeDefinitionIndex = 41054;

	struct alignas(4) TMP_TextUtilities_LineSegment
	{
		::UnityEngine::Vector3 Point1; // 0x10
		::UnityEngine::Vector3 Point2; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_LINESEGMENT__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
