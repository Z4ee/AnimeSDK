#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_TYPEDEPENDENCYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18770330)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TypeDependencyAttribute_TypeDefinitionIndex = 1383;

	class TypeDependencyAttribute : public ::System::Attribute
	{
	public:
		::System::String* typeName; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TYPEDEPENDENCYATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
