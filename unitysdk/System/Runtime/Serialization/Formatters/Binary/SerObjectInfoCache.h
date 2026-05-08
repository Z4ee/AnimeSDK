#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOCACHE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18BA9490)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA9480)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SerObjectInfoCache_TypeDefinitionIndex = 1222;

	class SerObjectInfoCache : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Type*>* memberTypes; // 0x10
		::Il2CppArray<::System::String*>* memberNames; // 0x18
		::Il2CppArray<::System::Reflection::MemberInfo*>* memberInfos; // 0x20
		::System::String* assemblyString; // 0x28
		::System::String* fullTypeName; // 0x30
		::System::Boolean hasTypeForwardedFrom; // 0x38

		::System::Void _ctor(::System::String* typeName, ::System::String* assemblyName, ::System::Boolean hasTypeForwardedFrom)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOCACHE__CTOR_OFFSET))(this, typeName, assemblyName, hasTypeForwardedFrom);
		}

		::System::Void _ctor_1(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOCACHE__CTOR_1_OFFSET))(this, type);
		}
	};
}
