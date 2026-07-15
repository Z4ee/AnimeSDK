#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO_ISCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1791ECD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1791ECB0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectMapInfo_TypeDefinitionIndex = 1174;

	class ObjectMapInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* memberNames; // 0x10
		::Il2CppArray<::System::Type*>* memberTypes; // 0x18
		::System::Int32 numMembers; // 0x20
		::System::Int32 objectId; // 0x24

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::Type*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean isCompatible(::System::Int32 a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO_ISCOMPATIBLE_OFFSET))(this, a1, a2, a3);
		}
	};
}
