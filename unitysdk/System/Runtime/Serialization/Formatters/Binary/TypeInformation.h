#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x193E0C90)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int TypeInformation_TypeDefinitionIndex = 1223;

	class TypeInformation : public ::System::Object
	{
	public:
		::System::String* assemblyString; // 0x10
		::System::String* fullTypeName; // 0x18
		::System::Boolean hasTypeForwardedFrom; // 0x20

		::System::Void _ctor(::System::String* fullTypeName, ::System::String* assemblyString, ::System::Boolean hasTypeForwardedFrom)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_TYPEINFORMATION__CTOR_OFFSET))(this, fullTypeName, assemblyString, hasTypeForwardedFrom);
		}
	};
}
