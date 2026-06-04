#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AE71230)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AE711A0)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AE710D0)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE71290)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE710C0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int TypeMember_TypeDefinitionIndex = 1983;

	class TypeMember : public ::System::Object
	{
	public:
		::System::String* member; // 0x10
		::System::Type* type; // 0x18

		::System::Void _ctor(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean Equals_1(::System::Xml::Serialization::TypeMember* a1, ::System::Xml::Serialization::TypeMember* a2)
		{
			return ((::System::Boolean(*)(::System::Xml::Serialization::TypeMember*, ::System::Xml::Serialization::TypeMember*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_1_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_TOSTRING_OFFSET))(this);
		}
	};
}
