#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

namespace System::Reflection
{
	inline static constexpr unsigned int InterfaceMapping_TypeDefinitionIndex = 562;

	struct alignas(8) InterfaceMapping
	{
		::System::Type* TargetType; // 0x10
		::System::Type* InterfaceType; // 0x18
		::Il2CppArray<::System::Reflection::MethodInfo*>* TargetMethods; // 0x20
		::Il2CppArray<::System::Reflection::MethodInfo*>* InterfaceMethods; // 0x28
	};
}
