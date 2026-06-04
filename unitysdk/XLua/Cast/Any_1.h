#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua::Cast
{
	inline static constexpr unsigned int Any_1_TypeDefinitionIndex = 47065;

	template <typename T>
	class Any_1 : public ::System::Object
	{
	public:
		T mTarget; // 0x0
	};
}
