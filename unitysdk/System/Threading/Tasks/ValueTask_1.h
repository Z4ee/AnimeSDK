#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ValueTask_1_TypeDefinitionIndex = 7055;

	template <typename TResult>
	struct ValueTask_1
	{
		::System::Object* _obj; // 0x0
		TResult _result; // 0x0
		::System::Int16 _token; // 0x0
		::System::Boolean _continueOnCapturedContext; // 0x0
	};
}
