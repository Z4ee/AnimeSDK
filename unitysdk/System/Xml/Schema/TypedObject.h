#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Schema { class TypedObject_DecimalStruct; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A761060)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_DVALUE_OFFSET UNITYSDK_OFFSET(0x1A760F20)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_ISDECIMAL_OFFSET UNITYSDK_OFFSET(0x1A760F00)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_LISTDVALUEEQUALS_OFFSET UNITYSDK_OFFSET(0x1A76B800)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_SETDECIMAL_OFFSET UNITYSDK_OFFSET(0x1A760AB0)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A76B7F0)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76B5E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int TypedObject_TypeDefinitionIndex = 1957;

	class TypedObject : public ::System::Object
	{
	public:
		::System::Xml::Schema::TypedObject_DecimalStruct* dstruct; // 0x10
		::System::Object* ovalue; // 0x18
		::System::Xml::Schema::XmlSchemaDatatype* xsdtype; // 0x20
		::System::String* svalue; // 0x28
		::System::Int32 dim; // 0x30
		::System::Boolean isList; // 0x34

		::System::Void _ctor(::System::Object* obj, ::System::String* svalue, ::System::Xml::Schema::XmlSchemaDatatype* xsdtype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT__CTOR_OFFSET))(this, obj, svalue, xsdtype);
		}

		::System::Boolean get_IsDecimal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_ISDECIMAL_OFFSET))(this);
		}

		::Il2CppArray<::System::Decimal>* get_Dvalue()
		{
			return ((::Il2CppArray<::System::Decimal>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_DVALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_TOSTRING_OFFSET))(this);
		}

		::System::Void SetDecimal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_SETDECIMAL_OFFSET))(this);
		}

		::System::Boolean ListDValueEquals(::System::Xml::Schema::TypedObject* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::TypedObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_LISTDVALUEEQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals(::System::Xml::Schema::TypedObject* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::TypedObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_EQUALS_OFFSET))(this, other);
		}
	};
}
