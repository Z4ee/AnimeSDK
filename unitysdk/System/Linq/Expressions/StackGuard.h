#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_TRYENTERONCURRENTSTACK_OFFSET UNITYSDK_OFFSET(0x1DF4EB40)
#define SYSTEM_LINQ_EXPRESSIONS_STACKGUARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4EB70)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int StackGuard_TypeDefinitionIndex = 3272;

	class StackGuard : public ::System::Object
	{
	public:
		::System::Int32 _executionStackCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_STACKGUARD__CTOR_OFFSET))(this);
		}

		::System::Boolean TryEnterOnCurrentStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_TRYENTERONCURRENTSTACK_OFFSET))(this);
		}
	};
}
