#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0AA370)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0AA360)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TypeForwardedFromAttribute_TypeDefinitionIndex = 1397;

	class TypeForwardedFromAttribute : public ::System::Attribute
	{
	public:
		::System::String* assemblyFullName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* assemblyFullName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE__CTOR_1_OFFSET))(this, assemblyFullName);
		}
	};
}
