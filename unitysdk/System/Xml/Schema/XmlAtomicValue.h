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

#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GETPREFIXFROMQNAME_OFFSET UNITYSDK_OFFSET(0x1B063CC0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x1B063E50)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1B05E9C0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDATETIME_OFFSET UNITYSDK_OFFSET(0x1B05EE20)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1B05F540)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASINT_OFFSET UNITYSDK_OFFSET(0x1B05F8D0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASLONG_OFFSET UNITYSDK_OFFSET(0x1B05FCD0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1B063DB0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0658F0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x1B063DA0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1B063D90)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B065DC0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_VALUEAS_OFFSET UNITYSDK_OFFSET(0x1B062460)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B060820)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B060DA0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B061070)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B061330)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B061610)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1B0638C0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1B060AA0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1B0621C0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B060470)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAtomicValue_TypeDefinitionIndex = 2180;

	class XmlAtomicValue : public ::System::Xml::XPath::XPathItem
	{
	public:
		::System::Xml::Schema::XmlSchemaType* xmlType; // 0x10
		::System::Object* objVal; // 0x18
		::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName* nsPrefix; // 0x20
		::System::Xml::Schema::XmlAtomicValue_Union unionVal; // 0x28
		::System::TypeCode clrType; // 0x30

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaType* a1, ::System::DateTime a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Xml::Schema::XmlSchemaType* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Xml::Schema::XmlSchemaType* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::Xml::Schema::XmlSchemaType* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::System::Xml::Schema::XmlSchemaType* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_5_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_6(::System::Xml::Schema::XmlSchemaType* a1, ::System::String* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::String*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_7(::System::Xml::Schema::XmlSchemaType* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_7_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_8(::System::Xml::Schema::XmlSchemaType* a1, ::System::Object* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaType* get_XmlType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_XMLTYPE_OFFSET))(this);
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

		::System::Object* ValueAs(::System::Type* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_VALUEAS_OFFSET))(this, a1, a2);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_TOSTRING_OFFSET))(this);
		}

		::System::String* GetPrefixFromQName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GETPREFIXFROMQNAME_OFFSET))(this, a1);
		}
	};
}
