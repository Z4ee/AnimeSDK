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

#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGELISTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE643D0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET UNITYSDK_OFFSET(0x1AE60A70)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET UNITYSDK_OFFSET(0x1AE62A80)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1AE62B40)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x1AE62C40)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_3_OFFSET UNITYSDK_OFFSET(0x1AE62D60)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_4_OFFSET UNITYSDK_OFFSET(0x1AE62E60)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_5_OFFSET UNITYSDK_OFFSET(0x1AE62F60)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_6_OFFSET UNITYSDK_OFFSET(0x1AE63060)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_7_OFFSET UNITYSDK_OFFSET(0x1AE63830)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1AE62990)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x1AE64600)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_1_OFFSET UNITYSDK_OFFSET(0x1AE60890)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1AE60810)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1AE60EF0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1AE60E00)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x1AE60BE0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1AE60B10)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_1_OFFSET UNITYSDK_OFFSET(0x1AE61200)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1AE61130)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_1_OFFSET UNITYSDK_OFFSET(0x1AE614B0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1AE61430)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_1_OFFSET UNITYSDK_OFFSET(0x1AE61740)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x1AE616A0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_1_OFFSET UNITYSDK_OFFSET(0x1AE619E0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x1AE61940)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_1_OFFSET UNITYSDK_OFFSET(0x1AE61C60)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1AE61BE0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AE61EB0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1AE61EF0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1AE61F40)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1AE61FB0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1AE62010)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1AE62080)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1AE620F0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x1AE62150)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE61E50)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE646C0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE607B0)
#define SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE60700)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlUntypedConverter_TypeDefinitionIndex = 2218;

	class XmlUntypedConverter : public ::System::Xml::Schema::XmlListConverter
	{
	public:
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_UntypedList()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlUntypedConverter_TypeDefinitionIndex)->GetStaticField(0x14750);
		}
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_Untyped()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlUntypedConverter_TypeDefinitionIndex)->GetStaticField(0x14758);
		}
		::System::Boolean allowListToList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlUntypedConverter* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlUntypedConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER__CCTOR_OFFSET))();
		}

		::System::Boolean ToBoolean(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Boolean ToBoolean_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOBOOLEAN_1_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime(::System::String* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime_1(::System::Object* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIME_1_OFFSET))(this, a1);
		}

		::System::DateTimeOffset ToDateTimeOffset(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_OFFSET))(this, a1);
		}

		::System::DateTimeOffset ToDateTimeOffset_1(::System::Object* a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODATETIMEOFFSET_1_OFFSET))(this, a1);
		}

		::System::Decimal ToDecimal(::System::String* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_OFFSET))(this, a1);
		}

		::System::Decimal ToDecimal_1(::System::Object* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODECIMAL_1_OFFSET))(this, a1);
		}

		::System::Double ToDouble(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_OFFSET))(this, a1);
		}

		::System::Double ToDouble_1(::System::Object* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TODOUBLE_1_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32_1(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT32_1_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64(::System::String* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64_1(::System::Object* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOINT64_1_OFFSET))(this, a1);
		}

		::System::Single ToSingle(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Single ToSingle_1(::System::Object* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSINGLE_1_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToString_1(::System::DateTime a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::Decimal a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_3_OFFSET))(this, a1);
		}

		::System::String* ToString_4(::System::Double a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_4_OFFSET))(this, a1);
		}

		::System::String* ToString_5(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_5_OFFSET))(this, a1);
		}

		::System::String* ToString_6(::System::Int64 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_6_OFFSET))(this, a1);
		}

		::System::String* ToString_7(::System::Single a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_7_OFFSET))(this, a1);
		}

		::System::String* ToString_8(::System::Object* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_TOSTRING_8_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType(::System::Boolean a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_1(::System::DateTime a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::DateTime, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_1_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_2(::System::Decimal a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Decimal, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_2_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_3(::System::Double a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_3_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_4(::System::Int32 a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_4_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_5(::System::Int64 a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_5_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_6(::System::String* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeType_7(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPE_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeTypeWildcardDestination(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeTypeWildcardSource(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeListType(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_CHANGELISTTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SupportsType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNTYPEDCONVERTER_SUPPORTSTYPE_OFFSET))(this, a1);
		}
	};
}
