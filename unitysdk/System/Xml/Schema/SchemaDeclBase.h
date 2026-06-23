#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/SchemaDeclBase_Use.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1D46A900)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_CHECKENUMERATION_OFFSET UNITYSDK_OFFSET(0x1D472DB0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x1D472E80)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUERAW_OFFSET UNITYSDK_OFFSET(0x1D472D90)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1D4697F0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D472D20)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D472CB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaDeclBase_TypeDefinitionIndex = 2082;

	class SchemaDeclBase : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchemaDatatype* datatype; // 0x10
		::System::String* prefix; // 0x18
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x20
		::System::Xml::XmlQualifiedName* name; // 0x28
		::System::String* defaultValueRaw; // 0x30
		::System::Object* defaultValueTyped; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* values; // 0x40
		::System::Int64 maxLength; // 0x48
		::System::Int64 minLength; // 0x50
		::System::Boolean isDeclaredInExternal; // 0x58
		::System::Xml::Schema::SchemaDeclBase_Use presence; // 0x5C

		::System::Void _ctor(::System::Xml::XmlQualifiedName* name, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_OFFSET))(this, name, prefix);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_1_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PREFIX_OFFSET))(this);
		}

		::System::Void AddValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_ADDVALUE_OFFSET))(this, value);
		}

		::System::String* get_DefaultValueRaw()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUERAW_OFFSET))(this);
		}

		::System::Boolean CheckEnumeration(::System::Object* pVal)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_CHECKENUMERATION_OFFSET))(this, pVal);
		}

		::System::Boolean CheckValue(::System::Object* pVal)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_CHECKVALUE_OFFSET))(this, pVal);
		}
	};
}
