#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Shared_1_TypeDefinitionIndex = 893;

	template <typename T>
	class Shared_1 : public ::System::Object
	{
	public:
		T Value; // 0x0
	};
}
