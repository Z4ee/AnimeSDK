#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int Lazy_1_Boxed_TypeDefinitionIndex = 160;

	template <typename T>
	class Lazy_1_Boxed : public ::System::Object
	{
	public:
		T m_value; // 0x0
	};
}
