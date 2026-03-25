#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/SchemaDeclBase_Use.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x185931C0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x185931A0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUERAW_OFFSET UNITYSDK_OFFSET(0x18593230)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x18593250)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x18593150)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18593140)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x18592880)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PRESENCE_OFFSET UNITYSDK_OFFSET(0x18593170)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x18593220)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x185931B0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x18593260)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x18593160)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_PRESENCE_OFFSET UNITYSDK_OFFSET(0x18593180)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x18593190)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185927F0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18592700)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaDeclBase_TypeDefinitionIndex = 2159;

	class SchemaDeclBase : public ::System::Object
	{
	public:
		::System::String* defaultValueRaw; // 0x10
		::System::Object* defaultValueTyped; // 0x18
		::System::String* prefix; // 0x20
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x28
		::System::Xml::XmlQualifiedName* name; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* values; // 0x38
		::System::Xml::Schema::XmlSchemaDatatype* datatype; // 0x40
		::System::Int64 minLength; // 0x48
		::System::Boolean isDeclaredInExternal; // 0x50
		::System::Xml::Schema::SchemaDeclBase_Use presence; // 0x54
		::System::Int64 maxLength; // 0x58

		::System::Void _ctor(::System::Xml::XmlQualifiedName* name, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_OFFSET))(this, name, prefix);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_1_OFFSET))(this);
		}

		::System::Xml::XmlQualifiedName* get_Name()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PREFIX_OFFSET))(this);
		}

		::System::Boolean get_IsDeclaredInExternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_ISDECLAREDINEXTERNAL_OFFSET))(this);
		}

		::System::Void set_IsDeclaredInExternal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_ISDECLAREDINEXTERNAL_OFFSET))(this, value);
		}

		::System::Xml::Schema::SchemaDeclBase_Use get_Presence()
		{
			return ((::System::Xml::Schema::SchemaDeclBase_Use(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PRESENCE_OFFSET))(this);
		}

		::System::Void set_Presence(::System::Xml::Schema::SchemaDeclBase_Use value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaDeclBase_Use))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_PRESENCE_OFFSET))(this, value);
		}

		::System::Void set_SchemaType(::System::Xml::Schema::XmlSchemaType* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_SCHEMATYPE_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaDatatype* get_Datatype()
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void set_Datatype(::System::Xml::Schema::XmlSchemaDatatype* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DATATYPE_OFFSET))(this, value);
		}

		::System::Void AddValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_ADDVALUE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_Values()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_VALUES_OFFSET))(this);
		}

		::System::String* get_DefaultValueRaw()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUERAW_OFFSET))(this);
		}

		::System::Object* get_DefaultValueTyped()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUETYPED_OFFSET))(this);
		}

		::System::Void set_DefaultValueTyped(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DEFAULTVALUETYPED_OFFSET))(this, value);
		}
	};
}
