#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization { class MemberHolder; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19460820)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES___C__DISPLAYCLASS9_0__GETSERIALIZABLEMEMBERS_B__0_OFFSET UNITYSDK_OFFSET(0x19462140)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FormatterServices___c__DisplayClass9_0_TypeDefinitionIndex = 1098;

	class FormatterServices___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* _GetSerializableMembers_b__0(::System::Runtime::Serialization::MemberHolder* a1)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Runtime::Serialization::MemberHolder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES___C__DISPLAYCLASS9_0__GETSERIALIZABLEMEMBERS_B__0_OFFSET))(this, a1);
		}
	};
}
