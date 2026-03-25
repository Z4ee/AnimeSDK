#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO_ISCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x163D48C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x163D48A0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectMapInfo_TypeDefinitionIndex = 1171;

	class ObjectMapInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Type*>* memberTypes; // 0x10
		::Il2CppArray<::System::String*>* memberNames; // 0x18
		::System::Int32 numMembers; // 0x20
		::System::Int32 objectId; // 0x24

		::System::Void _ctor(::System::Int32 objectId, ::System::Int32 numMembers, ::Il2CppArray<::System::String*>* memberNames, ::Il2CppArray<::System::Type*>* memberTypes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO__CTOR_OFFSET))(this, objectId, numMembers, memberNames, memberTypes);
		}

		::System::Boolean isCompatible(::System::Int32 numMembers, ::Il2CppArray<::System::String*>* memberNames, ::Il2CppArray<::System::Type*>* memberTypes)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO_ISCOMPATIBLE_OFFSET))(this, numMembers, memberNames, memberTypes);
		}
	};
}
