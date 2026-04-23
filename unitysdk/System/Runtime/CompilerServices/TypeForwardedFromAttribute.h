#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE_GET_ASSEMBLYFULLNAME_OFFSET UNITYSDK_OFFSET(0x179BF7C0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x179BF750)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TypeForwardedFromAttribute_TypeDefinitionIndex = 1366;

	class TypeForwardedFromAttribute : public ::System::Attribute
	{
	public:
		::System::String* assemblyFullName; // 0x10

		::System::Void _ctor(::System::String* assemblyFullName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE__CTOR_OFFSET))(this, assemblyFullName);
		}

		::System::String* get_AssemblyFullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE_GET_ASSEMBLYFULLNAME_OFFSET))(this);
		}
	};
}
