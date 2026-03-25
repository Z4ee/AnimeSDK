#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/XmlListConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGELISTTYPE_OFFSET UNITYSDK_OFFSET(0x185B5180)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET UNITYSDK_OFFSET(0x185B1830)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET UNITYSDK_OFFSET(0x185B3840)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x185B3900)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x185B3A00)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_3_OFFSET UNITYSDK_OFFSET(0x185B3B10)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_4_OFFSET UNITYSDK_OFFSET(0x185B3C10)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_5_OFFSET UNITYSDK_OFFSET(0x185B3D10)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_6_OFFSET UNITYSDK_OFFSET(0x185B3E10)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_7_OFFSET UNITYSDK_OFFSET(0x185B45E0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x185B3750)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x185B53B0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_1_OFFSET UNITYSDK_OFFSET(0x185B1650)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x185B15D0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x185B1CB0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x185B1BC0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x185B19A0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x185B18D0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_1_OFFSET UNITYSDK_OFFSET(0x185B1FC0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x185B1EF0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_1_OFFSET UNITYSDK_OFFSET(0x185B2270)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x185B21F0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_1_OFFSET UNITYSDK_OFFSET(0x185B2500)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x185B2460)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_1_OFFSET UNITYSDK_OFFSET(0x185B27A0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x185B2700)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_1_OFFSET UNITYSDK_OFFSET(0x185B2A20)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x185B29A0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x185B2C70)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x185B2CB0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x185B2D00)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x185B2D70)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x185B2DD0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x185B2E40)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x185B2EB0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x185B2F10)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x185B2C10)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x185B5470)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185B1570)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x185B14C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlUntypedConverter_TypeDefinitionIndex = 2217;

	class XmlUntypedConverter : public ::System::Xml::Schema::XmlListConverter
	{
	public:
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_Untyped()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlUntypedConverter_TypeDefinitionIndex)->GetStaticField(0x79C0);
		}
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_UntypedList()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlUntypedConverter_TypeDefinitionIndex)->GetStaticField(0x79C8);
		}
		::System::Boolean allowListToList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlUntypedConverter* atomicConverter, ::System::Boolean allowListToList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlUntypedConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CTOR_1_OFFSET))(this, atomicConverter, allowListToList);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CCTOR_OFFSET))();
		}

		::System::Boolean ToBoolean(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_OFFSET))(this, value);
		}

		::System::Boolean ToBoolean_1(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_1_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime(::System::String* value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime_1(::System::Object* value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_1_OFFSET))(this, value);
		}

		::System::DateTimeOffset ToDateTimeOffset(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_OFFSET))(this, value);
		}

		::System::DateTimeOffset ToDateTimeOffset_1(::System::Object* value)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_1_OFFSET))(this, value);
		}

		::System::Decimal ToDecimal(::System::String* value)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_OFFSET))(this, value);
		}

		::System::Decimal ToDecimal_1(::System::Object* value)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_1_OFFSET))(this, value);
		}

		::System::Double ToDouble(::System::String* value)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_OFFSET))(this, value);
		}

		::System::Double ToDouble_1(::System::Object* value)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_1_OFFSET))(this, value);
		}

		::System::Int32 ToInt32(::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_OFFSET))(this, value);
		}

		::System::Int32 ToInt32_1(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_1_OFFSET))(this, value);
		}

		::System::Int64 ToInt64(::System::String* value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_OFFSET))(this, value);
		}

		::System::Int64 ToInt64_1(::System::Object* value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_1_OFFSET))(this, value);
		}

		::System::Single ToSingle(::System::String* value)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_OFFSET))(this, value);
		}

		::System::Single ToSingle_1(::System::Object* value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_1_OFFSET))(this, value);
		}

		::System::String* ToString(::System::Boolean value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(this, value);
		}

		::System::String* ToString_1(::System::DateTime value)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_1_OFFSET))(this, value);
		}

		::System::String* ToString_2(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_2_OFFSET))(this, value);
		}

		::System::String* ToString_3(::System::Decimal value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_3_OFFSET))(this, value);
		}

		::System::String* ToString_4(::System::Double value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_4_OFFSET))(this, value);
		}

		::System::String* ToString_5(::System::Int32 value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_5_OFFSET))(this, value);
		}

		::System::String* ToString_6(::System::Int64 value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_6_OFFSET))(this, value);
		}

		::System::String* ToString_7(::System::Single value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_7_OFFSET))(this, value);
		}

		::System::String* ToString_8(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_8_OFFSET))(this, value, nsResolver);
		}

		::System::Object* ChangeType(::System::Boolean value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_1(::System::DateTime value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::DateTime, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_1_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_2(::System::Decimal value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Decimal, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_2_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_3(::System::Double value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_3_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_4(::System::Int32 value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_4_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_5(::System::Int64 value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_5_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_6(::System::String* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_6_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeType_7(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_7_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGELISTTYPE_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Boolean SupportsType(::System::Type* clrType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_SUPPORTSTYPE_OFFSET))(this, clrType);
		}
	};
}
