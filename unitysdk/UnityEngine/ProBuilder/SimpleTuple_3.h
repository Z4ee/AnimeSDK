#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SimpleTuple_3_TypeDefinitionIndex = 41633;

	template <typename T1, typename T2, typename T3>
	struct SimpleTuple_3
	{
		T1 m_Item1; // 0x0
		T2 m_Item2; // 0x0
		T3 m_Item3; // 0x0
	};
}
