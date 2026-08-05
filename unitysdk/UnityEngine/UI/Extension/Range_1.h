#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { template <typename T> class Range_1; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int Range_1_TypeDefinitionIndex = 52249;

	template <typename T>
	class Range_1 : public ::System::Object
	{
	public:
		T Start; // 0x0
		T End; // 0x0
	};
}
