#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int Pinnable_1_TypeDefinitionIndex = 4955;

	template <typename T>
	class Pinnable_1 : public ::System::Object
	{
	public:
		T Data; // 0x0
	};
}
