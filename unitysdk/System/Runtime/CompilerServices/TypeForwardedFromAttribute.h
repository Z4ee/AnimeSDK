#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8C2990)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C2980)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TypeForwardedFromAttribute_TypeDefinitionIndex = 1396;

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
