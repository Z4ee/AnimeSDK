#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x185C2370)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0x185C22E0)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x185C2210)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x185C23D0)
#define SYSTEM_XML_SERIALIZATION_TYPEMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x185C2200)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int TypeMember_TypeDefinitionIndex = 1982;

	class TypeMember : public ::System::Object
	{
	public:
		::System::String* member; // 0x10
		::System::Type* type; // 0x18

		::System::Void _ctor(::System::Type* type, ::System::String* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER__CTOR_OFFSET))(this, type, member);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Boolean Equals_1(::System::Xml::Serialization::TypeMember* tm1, ::System::Xml::Serialization::TypeMember* tm2)
		{
			return ((::System::Boolean(*)(::System::Xml::Serialization::TypeMember*, ::System::Xml::Serialization::TypeMember*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_EQUALS_1_OFFSET))(tm1, tm2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_TYPEMEMBER_TOSTRING_OFFSET))(this);
		}
	};
}
