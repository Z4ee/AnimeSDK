#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SimpleTuple_2_TypeDefinitionIndex = 41632;

	template <typename T1, typename T2>
	struct SimpleTuple_2
	{
		T1 m_Item1; // 0x0
		T2 m_Item2; // 0x0
	};
}
