#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_ASSEMBLYSTRING_OFFSET UNITYSDK_OFFSET(0x1BE1B160)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_FULLTYPENAME_OFFSET UNITYSDK_OFFSET(0x1BE1B150)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_HASTYPEFORWARDEDFROM_OFFSET UNITYSDK_OFFSET(0x1BE1B170)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE08D40)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int TypeInformation_TypeDefinitionIndex = 1186;

	class TypeInformation : public ::System::Object
	{
	public:
		::System::String* fullTypeName; // 0x10
		::System::String* assemblyString; // 0x18
		::System::Boolean hasTypeForwardedFrom; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_FullTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_FULLTYPENAME_OFFSET))(this);
		}

		::System::String* get_AssemblyString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_ASSEMBLYSTRING_OFFSET))(this);
		}

		::System::Boolean get_HasTypeForwardedFrom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION_GET_HASTYPEFORWARDEDFROM_OFFSET))(this);
		}
	};
}
