#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization { class MemberHolder; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187A6A30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES___C__DISPLAYCLASS9_0__GETSERIALIZABLEMEMBERS_B__0_OFFSET UNITYSDK_OFFSET(0x187A7CE0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FormatterServices___c__DisplayClass9_0_TypeDefinitionIndex = 1089;

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
