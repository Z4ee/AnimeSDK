#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/Xml/Schema/XmlAtomicValue_Union.h"
#include "unitysdk/System/Xml/XPath/XPathItem.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlAtomicValue_NamespacePrefixForQName; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GETPREFIXFROMQNAME_OFFSET UNITYSDK_OFFSET(0x1BAC9610)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x1BAC9AB0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1BAC9DF0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDATETIME_OFFSET UNITYSDK_OFFSET(0x1BAC9F50)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1BACA170)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASINT_OFFSET UNITYSDK_OFFSET(0x1BACA3B0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASLONG_OFFSET UNITYSDK_OFFSET(0x1BACA510)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1BAC9A70)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BACA8C0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1BAC9A60)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BACAA70)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_VALUEAS_OFFSET UNITYSDK_OFFSET(0x1BACA680)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BAC9010)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BAC9090)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BAC9120)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BAC91A0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1BAC9220)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1BAC92D0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1BAC96D0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1BAC9780)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1BACABC0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC8F90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAtomicValue_TypeDefinitionIndex = 2111;

	class XmlAtomicValue : public ::System::Xml::XPath::XPathItem
	{
	public:
		::System::Xml::Schema::XmlSchemaType* xmlType; // 0x10
		::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName* nsPrefix; // 0x18
		::System::Object* objVal; // 0x20
		::System::TypeCode clrType; // 0x28
		::System::Xml::Schema::XmlAtomicValue_Union unionVal; // 0x30

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_1_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_2(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_2_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_3(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_3_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_4(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_4_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_5(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_5_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_6(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::String* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::String*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_6_OFFSET))(this, xmlType, value, nsResolver);
		}

		::System::Void _ctor_7(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_7_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_8(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_8_OFFSET))(this, xmlType, value, nsResolver);
		}

		::System::Void _ctor_9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_9_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Object* get_TypedValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_TYPEDVALUE_OFFSET))(this);
		}

		::System::Boolean get_ValueAsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASBOOLEAN_OFFSET))(this);
		}

		::System::DateTime get_ValueAsDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDATETIME_OFFSET))(this);
		}

		::System::Double get_ValueAsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDOUBLE_OFFSET))(this);
		}

		::System::Int32 get_ValueAsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASINT_OFFSET))(this);
		}

		::System::Int64 get_ValueAsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASLONG_OFFSET))(this);
		}

		::System::Object* ValueAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_VALUEAS_OFFSET))(this, type, nsResolver);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_TOSTRING_OFFSET))(this);
		}

		::System::String* GetPrefixFromQName(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GETPREFIXFROMQNAME_OFFSET))(this, value);
		}
	};
}
