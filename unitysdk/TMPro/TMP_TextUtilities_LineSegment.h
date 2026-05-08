#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define TMPRO_TMP_TEXTUTILITIES_LINESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x317F00)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextUtilities_LineSegment_TypeDefinitionIndex = 37604;

	struct alignas(4) TMP_TextUtilities_LineSegment
	{
		::UnityEngine::Vector3 Point1; // 0x10
		::UnityEngine::Vector3 Point2; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_LINESEGMENT__CTOR_OFFSET))(this, p1, p2);
		}
	};
}
