#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/SchemaDeclBase_Use.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1AE418D0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1AE418B0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUERAW_OFFSET UNITYSDK_OFFSET(0x1AE41990)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x1AE419B0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1AE41860)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE41850)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1AE40F70)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PRESENCE_OFFSET UNITYSDK_OFFSET(0x1AE41880)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1AE41980)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1AE418C0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x1AE419C0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1AE41870)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_PRESENCE_OFFSET UNITYSDK_OFFSET(0x1AE41890)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1AE418A0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE40EE0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE40E00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaDeclBase_TypeDefinitionIndex = 2160;

	class SchemaDeclBase : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchemaDatatype* datatype; // 0x10
		::System::Xml::XmlQualifiedName* name; // 0x18
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x20
		::System::String* prefix; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* values; // 0x30
		::System::Object* defaultValueTyped; // 0x38
		::System::String* defaultValueRaw; // 0x40
		::System::Xml::Schema::SchemaDeclBase_Use presence; // 0x48
		::System::Boolean isDeclaredInExternal; // 0x4C
		::System::Int64 maxLength; // 0x50
		::System::Int64 minLength; // 0x58

		::System::Void _ctor(::System::Xml::XmlQualifiedName* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void set_IsDeclaredInExternal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_ISDECLAREDINEXTERNAL_OFFSET))(this, a1);
		}

		::System::Xml::Schema::SchemaDeclBase_Use get_Presence()
		{
			return ((::System::Xml::Schema::SchemaDeclBase_Use(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PRESENCE_OFFSET))(this);
		}

		::System::Void set_Presence(::System::Xml::Schema::SchemaDeclBase_Use a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaDeclBase_Use))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_PRESENCE_OFFSET))(this, a1);
		}

		::System::Void set_SchemaType(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_SCHEMATYPE_OFFSET))(this, a1);
		}

		::System::Xml::Schema::XmlSchemaDatatype* get_Datatype()
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void set_Datatype(::System::Xml::Schema::XmlSchemaDatatype* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DATATYPE_OFFSET))(this, a1);
		}

		::System::Void AddValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_ADDVALUE_OFFSET))(this, a1);
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

		::System::Void set_DefaultValueTyped(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DEFAULTVALUETYPED_OFFSET))(this, a1);
		}
	};
}
