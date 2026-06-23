#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/Schema/XmlValueConverter.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_ANYURITOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D63D0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_BASE64BINARYTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D63F0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGELISTTYPE_OFFSET UNITYSDK_OFFSET(0x1D2D5280)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1D2D49E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x1D2D4A30)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_3_OFFSET UNITYSDK_OFFSET(0x1D2D4AA0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_4_OFFSET UNITYSDK_OFFSET(0x1D2D4AF0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_5_OFFSET UNITYSDK_OFFSET(0x1D2D4B60)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_6_OFFSET UNITYSDK_OFFSET(0x1D2D4BD0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_7_OFFSET UNITYSDK_OFFSET(0x1D2D4BF0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1D2D4970)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CREATEINVALIDCLRMAPPINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D2D4E40)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6820)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMEOFFSETTODATETIME_OFFSET UNITYSDK_OFFSET(0x1D2D6DA0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6870)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D64A0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6460)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DAYTIMEDURATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D64E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOINT32_OFFSET UNITYSDK_OFFSET(0x1D2D6E50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOINT64_OFFSET UNITYSDK_OFFSET(0x1D2D7120)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOUINT64_OFFSET UNITYSDK_OFFSET(0x1D2D73F0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DURATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D65E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GDAYOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D68C0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GDAYTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D66E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GET_XMLTYPENAME_OFFSET UNITYSDK_OFFSET(0x1D2D4C10)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHDAYOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6960)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHDAYTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6760)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6910)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6720)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARMONTHOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6A00)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARMONTHTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D67E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEAROFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D69B0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D67A0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOBYTE_OFFSET UNITYSDK_OFFSET(0x1D2D76C0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOINT16_OFFSET UNITYSDK_OFFSET(0x1D2D7790)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOSBYTE_OFFSET UNITYSDK_OFFSET(0x1D2D7860)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOUINT16_OFFSET UNITYSDK_OFFSET(0x1D2D7930)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT64TOINT32_OFFSET UNITYSDK_OFFSET(0x1D2D7A00)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT64TOUINT32_OFFSET UNITYSDK_OFFSET(0x1D2D7AD0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_ISDERIVEDFROM_OFFSET UNITYSDK_OFFSET(0x1D2D4DF0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_QNAMETOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D2D6A50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_QNAMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D4CE0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOBASE64BINARY_OFFSET UNITYSDK_OFFSET(0x1D2D52E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D2D5910)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D2D59A0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATETIME_OFFSET UNITYSDK_OFFSET(0x1D2D5470)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATE_OFFSET UNITYSDK_OFFSET(0x1D2D53F0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODAYTIMEDURATION_OFFSET UNITYSDK_OFFSET(0x1D2D54F0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODURATION_OFFSET UNITYSDK_OFFSET(0x1D2D55C0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGDAYOFFSET_OFFSET UNITYSDK_OFFSET(0x1D2D5A30)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGDAY_OFFSET UNITYSDK_OFFSET(0x1D2D5690)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHDAYOFFSET_OFFSET UNITYSDK_OFFSET(0x1D2D5B50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHDAY_OFFSET UNITYSDK_OFFSET(0x1D2D5790)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHOFFSET_OFFSET UNITYSDK_OFFSET(0x1D2D5AC0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTH_OFFSET UNITYSDK_OFFSET(0x1D2D5710)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEARMONTHOFFSET_OFFSET UNITYSDK_OFFSET(0x1D2D5C70)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEARMONTH_OFFSET UNITYSDK_OFFSET(0x1D2D5890)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEAROFFSET_OFFSET UNITYSDK_OFFSET(0x1D2D5BE0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEAR_OFFSET UNITYSDK_OFFSET(0x1D2D5810)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOHEXBINARY_OFFSET UNITYSDK_OFFSET(0x1D2D5D00)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOQNAME_OFFSET UNITYSDK_OFFSET(0x1D2D5EB0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D2D6270)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOTIME_OFFSET UNITYSDK_OFFSET(0x1D2D61F0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOYEARMONTHDURATION_OFFSET UNITYSDK_OFFSET(0x1D2D6300)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TIMEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6C70)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6C30)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_1_OFFSET UNITYSDK_OFFSET(0x1D2D2520)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_2_OFFSET UNITYSDK_OFFSET(0x1D2D2610)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_3_OFFSET UNITYSDK_OFFSET(0x1D2D26F0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_4_OFFSET UNITYSDK_OFFSET(0x1D2D27D0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_5_OFFSET UNITYSDK_OFFSET(0x1D2D28A0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1D2D2440)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1D2D2FE0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_2_OFFSET UNITYSDK_OFFSET(0x1D2D30B0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D2D2EF0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x1D2D2A50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_2_OFFSET UNITYSDK_OFFSET(0x1D2D2B30)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_3_OFFSET UNITYSDK_OFFSET(0x1D2D2BF0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_4_OFFSET UNITYSDK_OFFSET(0x1D2D2CD0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_5_OFFSET UNITYSDK_OFFSET(0x1D2D2DB0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_6_OFFSET UNITYSDK_OFFSET(0x1D2D2E50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1D2D2970)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODECIMAL_1_OFFSET UNITYSDK_OFFSET(0x1D2D3250)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1D2D3180)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_1_OFFSET UNITYSDK_OFFSET(0x1D2D3400)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_2_OFFSET UNITYSDK_OFFSET(0x1D2D34C0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_3_OFFSET UNITYSDK_OFFSET(0x1D2D35A0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_4_OFFSET UNITYSDK_OFFSET(0x1D2D3680)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_5_OFFSET UNITYSDK_OFFSET(0x1D2D3720)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1D2D3320)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_1_OFFSET UNITYSDK_OFFSET(0x1D2D38A0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_2_OFFSET UNITYSDK_OFFSET(0x1D2D3980)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_3_OFFSET UNITYSDK_OFFSET(0x1D2D3A70)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_4_OFFSET UNITYSDK_OFFSET(0x1D2D3B50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_5_OFFSET UNITYSDK_OFFSET(0x1D2D3C20)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x1D2D37C0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_1_OFFSET UNITYSDK_OFFSET(0x1D2D3DD0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_2_OFFSET UNITYSDK_OFFSET(0x1D2D3EB0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_3_OFFSET UNITYSDK_OFFSET(0x1D2D3FA0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_4_OFFSET UNITYSDK_OFFSET(0x1D2D4080)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_5_OFFSET UNITYSDK_OFFSET(0x1D2D4150)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x1D2D3CF0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_1_OFFSET UNITYSDK_OFFSET(0x1D2D4310)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_2_OFFSET UNITYSDK_OFFSET(0x1D2D43E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1D2D4220)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D2D4540)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1D2D45B0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1D2D4640)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1D2D46D0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1D2D4740)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1D2D47D0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1D2D4860)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x1D2D4900)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x1D2D4950)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D44B0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_UNTYPEDATOMICTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D2D7C20)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_UNTYPEDATOMICTODATETIME_OFFSET UNITYSDK_OFFSET(0x1D2D7BA0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_YEARMONTHDURATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2D6CC0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2D7CB0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2D2320)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D2D2360)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D2D2410)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D21C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlBaseConverter_TypeDefinitionIndex = 2207;

	class XmlBaseConverter : public ::System::Xml::Schema::XmlValueConverter
	{
	public:
		static ::System::Type** StaticGet_StringArrayType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1920);
		}
		static ::System::Type** StaticGet_UriType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1928);
		}
		static ::System::Type** StaticGet_DoubleType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1930);
		}
		static ::System::Type** StaticGet_TimeSpanType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1938);
		}
		static ::System::Type** StaticGet_Int64Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1940);
		}
		static ::System::Type** StaticGet_IEnumerableType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1948);
		}
		static ::System::Type** StaticGet_IListType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1950);
		}
		static ::System::Type** StaticGet_Int32Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1958);
		}
		static ::System::Type** StaticGet_DecimalType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1960);
		}
		static ::System::Type** StaticGet_XmlAtomicValueArrayType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1968);
		}
		static ::System::Type** StaticGet_XmlQualifiedNameType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1970);
		}
		static ::System::Type** StaticGet_ByteArrayType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1978);
		}
		static ::System::Type** StaticGet_UInt16Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1980);
		}
		static ::System::Type** StaticGet_ByteType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1988);
		}
		static ::System::Type** StaticGet_XmlAtomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1990);
		}
		static ::System::Type** StaticGet_Int16Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1998);
		}
		static ::System::Type** StaticGet_XPathNavigatorType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19A0);
		}
		static ::System::Type** StaticGet_ObjectArrayType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19A8);
		}
		static ::System::Type** StaticGet_XPathItemType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19B0);
		}
		static ::System::Type** StaticGet_ICollectionType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19B8);
		}
		static ::System::Type** StaticGet_SByteType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19C0);
		}
		static ::System::Type** StaticGet_StringType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19C8);
		}
		static ::System::Type** StaticGet_DateTimeType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19D0);
		}
		static ::System::Type** StaticGet_UInt64Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19D8);
		}
		static ::System::Type** StaticGet_UInt32Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19E0);
		}
		static ::System::Type** StaticGet_SingleType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19E8);
		}
		static ::System::Type** StaticGet_BooleanType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19F0);
		}
		static ::System::Type** StaticGet_ObjectType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x19F8);
		}
		static ::System::Type** StaticGet_DateTimeOffsetType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x1A00);
		}
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x10
		::System::Type* clrTypeDefault; // 0x18
		::System::Xml::Schema::XmlTypeCode typeCode; // 0x20

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_OFFSET))(this, schemaType);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlTypeCode typeCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_1_OFFSET))(this, typeCode);
		}

		::System::Void _ctor_2(::System::Xml::Schema::XmlBaseConverter* converterAtomic)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlBaseConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_2_OFFSET))(this, converterAtomic);
		}

		::System::Void _ctor_3(::System::Xml::Schema::XmlBaseConverter* converterAtomic, ::System::Type* clrTypeDefault)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlBaseConverter*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_3_OFFSET))(this, converterAtomic, clrTypeDefault);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CCTOR_OFFSET))();
		}

		::System::Boolean ToBoolean(::System::DateTime value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_OFFSET))(this, value);
		}

		::System::Boolean ToBoolean_1(::System::Double value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_1_OFFSET))(this, value);
		}

		::System::Boolean ToBoolean_2(::System::Int32 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_2_OFFSET))(this, value);
		}

		::System::Boolean ToBoolean_3(::System::Int64 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_3_OFFSET))(this, value);
		}

		::System::Boolean ToBoolean_4(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_4_OFFSET))(this, value);
		}

		::System::Boolean ToBoolean_5(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_5_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime(::System::Boolean value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime_1(::System::DateTimeOffset value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_1_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime_2(::System::Double value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_2_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime_3(::System::Int32 value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_3_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime_4(::System::Int64 value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_4_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime_5(::System::String* value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_5_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime_6(::System::Object* value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_6_OFFSET))(this, value);
		}

		::System::DateTimeOffset ToDateTimeOffset(::System::DateTime value)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_OFFSET))(this, value);
		}

		::System::DateTimeOffset ToDateTimeOffset_1(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_1_OFFSET))(this, value);
		}

		::System::DateTimeOffset ToDateTimeOffset_2(::System::Object* value)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_2_OFFSET))(this, value);
		}

		::System::Decimal ToDecimal(::System::String* value)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODECIMAL_OFFSET))(this, value);
		}

		::System::Decimal ToDecimal_1(::System::Object* value)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODECIMAL_1_OFFSET))(this, value);
		}

		::System::Double ToDouble(::System::Boolean value)
		{
			return ((::System::Double(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_OFFSET))(this, value);
		}

		::System::Double ToDouble_1(::System::DateTime value)
		{
			return ((::System::Double(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_1_OFFSET))(this, value);
		}

		::System::Double ToDouble_2(::System::Int32 value)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_2_OFFSET))(this, value);
		}

		::System::Double ToDouble_3(::System::Int64 value)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_3_OFFSET))(this, value);
		}

		::System::Double ToDouble_4(::System::String* value)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_4_OFFSET))(this, value);
		}

		::System::Double ToDouble_5(::System::Object* value)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_5_OFFSET))(this, value);
		}

		::System::Int32 ToInt32(::System::Boolean value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_OFFSET))(this, value);
		}

		::System::Int32 ToInt32_1(::System::DateTime value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_1_OFFSET))(this, value);
		}

		::System::Int32 ToInt32_2(::System::Double value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_2_OFFSET))(this, value);
		}

		::System::Int32 ToInt32_3(::System::Int64 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_3_OFFSET))(this, value);
		}

		::System::Int32 ToInt32_4(::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_4_OFFSET))(this, value);
		}

		::System::Int32 ToInt32_5(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_5_OFFSET))(this, value);
		}

		::System::Int64 ToInt64(::System::Boolean value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_OFFSET))(this, value);
		}

		::System::Int64 ToInt64_1(::System::DateTime value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_1_OFFSET))(this, value);
		}

		::System::Int64 ToInt64_2(::System::Double value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_2_OFFSET))(this, value);
		}

		::System::Int64 ToInt64_3(::System::Int32 value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_3_OFFSET))(this, value);
		}

		::System::Int64 ToInt64_4(::System::String* value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_4_OFFSET))(this, value);
		}

		::System::Int64 ToInt64_5(::System::Object* value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_5_OFFSET))(this, value);
		}

		::System::Single ToSingle(::System::Double value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_OFFSET))(this, value);
		}

		::System::Single ToSingle_1(::System::String* value)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_1_OFFSET))(this, value);
		}

		::System::Single ToSingle_2(::System::Object* value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_2_OFFSET))(this, value);
		}

		::System::String* ToString(::System::Boolean value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_OFFSET))(this, value);
		}

		::System::String* ToString_1(::System::DateTime value)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_1_OFFSET))(this, value);
		}

		::System::String* ToString_2(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_2_OFFSET))(this, value);
		}

		::System::String* ToString_3(::System::Decimal value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_3_OFFSET))(this, value);
		}

		::System::String* ToString_4(::System::Double value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_4_OFFSET))(this, value);
		}

		::System::String* ToString_5(::System::Int32 value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_5_OFFSET))(this, value);
		}

		::System::String* ToString_6(::System::Int64 value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_6_OFFSET))(this, value);
		}

		::System::String* ToString_7(::System::Single value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_7_OFFSET))(this, value);
		}

		::System::String* ToString_8(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_8_OFFSET))(this, value, nsResolver);
		}

		::System::String* ToString_9(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_9_OFFSET))(this, value);
		}

		::System::Object* ChangeType(::System::Boolean value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_1(::System::DateTime value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::DateTime, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_1_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_2(::System::Decimal value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Decimal, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_2_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_3(::System::Double value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_3_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_4(::System::Int32 value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_4_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_5(::System::Int64 value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_5_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_6(::System::String* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_6_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeType_7(::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_7_OFFSET))(this, value, destinationType);
		}

		::System::String* get_XmlTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GET_XMLTYPENAME_OFFSET))(this);
		}

		static ::System::Boolean IsDerivedFrom(::System::Type* derivedType, ::System::Type* baseType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_ISDERIVEDFROM_OFFSET))(derivedType, baseType);
		}

		::System::Exception* CreateInvalidClrMappingException(::System::Type* sourceType, ::System::Type* destinationType)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CREATEINVALIDCLRMAPPINGEXCEPTION_OFFSET))(this, sourceType, destinationType);
		}

		static ::System::String* QNameToString(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::String*(*)(::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_QNAMETOSTRING_OFFSET))(name);
		}

		::System::Object* ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGELISTTYPE_OFFSET))(this, value, destinationType, nsResolver);
		}

		static ::Il2CppArray<::System::Byte>* StringToBase64Binary(::System::String* value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOBASE64BINARY_OFFSET))(value);
		}

		static ::System::DateTime StringToDate(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATE_OFFSET))(value);
		}

		static ::System::DateTime StringToDateTime(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATETIME_OFFSET))(value);
		}

		static ::System::TimeSpan StringToDayTimeDuration(::System::String* value)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODAYTIMEDURATION_OFFSET))(value);
		}

		static ::System::TimeSpan StringToDuration(::System::String* value)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODURATION_OFFSET))(value);
		}

		static ::System::DateTime StringToGDay(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGDAY_OFFSET))(value);
		}

		static ::System::DateTime StringToGMonth(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTH_OFFSET))(value);
		}

		static ::System::DateTime StringToGMonthDay(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHDAY_OFFSET))(value);
		}

		static ::System::DateTime StringToGYear(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEAR_OFFSET))(value);
		}

		static ::System::DateTime StringToGYearMonth(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEARMONTH_OFFSET))(value);
		}

		static ::System::DateTimeOffset StringToDateOffset(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATEOFFSET_OFFSET))(value);
		}

		static ::System::DateTimeOffset StringToDateTimeOffset(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATETIMEOFFSET_OFFSET))(value);
		}

		static ::System::DateTimeOffset StringToGDayOffset(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGDAYOFFSET_OFFSET))(value);
		}

		static ::System::DateTimeOffset StringToGMonthOffset(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHOFFSET_OFFSET))(value);
		}

		static ::System::DateTimeOffset StringToGMonthDayOffset(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHDAYOFFSET_OFFSET))(value);
		}

		static ::System::DateTimeOffset StringToGYearOffset(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEAROFFSET_OFFSET))(value);
		}

		static ::System::DateTimeOffset StringToGYearMonthOffset(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEARMONTHOFFSET_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* StringToHexBinary(::System::String* value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOHEXBINARY_OFFSET))(value);
		}

		static ::System::Xml::XmlQualifiedName* StringToQName(::System::String* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::String*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOQNAME_OFFSET))(value, nsResolver);
		}

		static ::System::DateTime StringToTime(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOTIME_OFFSET))(value);
		}

		static ::System::DateTimeOffset StringToTimeOffset(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOTIMEOFFSET_OFFSET))(value);
		}

		static ::System::TimeSpan StringToYearMonthDuration(::System::String* value)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOYEARMONTHDURATION_OFFSET))(value);
		}

		static ::System::String* AnyUriToString(::System::Uri* value)
		{
			return ((::System::String*(*)(::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_ANYURITOSTRING_OFFSET))(value);
		}

		static ::System::String* Base64BinaryToString(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_BASE64BINARYTOSTRING_OFFSET))(value);
		}

		static ::System::String* DateToString(::System::DateTime value)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETOSTRING_OFFSET))(value);
		}

		static ::System::String* DateTimeToString(::System::DateTime value)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMETOSTRING_OFFSET))(value);
		}

		static ::System::String* DayTimeDurationToString(::System::TimeSpan value)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DAYTIMEDURATIONTOSTRING_OFFSET))(value);
		}

		static ::System::String* DurationToString(::System::TimeSpan value)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DURATIONTOSTRING_OFFSET))(value);
		}

		static ::System::String* GDayToString(::System::DateTime value)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GDAYTOSTRING_OFFSET))(value);
		}

		static ::System::String* GMonthToString(::System::DateTime value)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHTOSTRING_OFFSET))(value);
		}

		static ::System::String* GMonthDayToString(::System::DateTime value)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHDAYTOSTRING_OFFSET))(value);
		}

		static ::System::String* GYearToString(::System::DateTime value)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARTOSTRING_OFFSET))(value);
		}

		static ::System::String* GYearMonthToString(::System::DateTime value)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARMONTHTOSTRING_OFFSET))(value);
		}

		static ::System::String* DateOffsetToString(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATEOFFSETTOSTRING_OFFSET))(value);
		}

		static ::System::String* DateTimeOffsetToString(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMEOFFSETTOSTRING_OFFSET))(value);
		}

		static ::System::String* GDayOffsetToString(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GDAYOFFSETTOSTRING_OFFSET))(value);
		}

		static ::System::String* GMonthOffsetToString(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHOFFSETTOSTRING_OFFSET))(value);
		}

		static ::System::String* GMonthDayOffsetToString(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHDAYOFFSETTOSTRING_OFFSET))(value);
		}

		static ::System::String* GYearOffsetToString(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEAROFFSETTOSTRING_OFFSET))(value);
		}

		static ::System::String* GYearMonthOffsetToString(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARMONTHOFFSETTOSTRING_OFFSET))(value);
		}

		static ::System::String* QNameToString_1(::System::Xml::XmlQualifiedName* qname, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::String*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_QNAMETOSTRING_1_OFFSET))(qname, nsResolver);
		}

		static ::System::String* TimeToString(::System::DateTime value)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TIMETOSTRING_OFFSET))(value);
		}

		static ::System::String* TimeOffsetToString(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TIMEOFFSETTOSTRING_OFFSET))(value);
		}

		static ::System::String* YearMonthDurationToString(::System::TimeSpan value)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_YEARMONTHDURATIONTOSTRING_OFFSET))(value);
		}

		static ::System::DateTime DateTimeOffsetToDateTime(::System::DateTimeOffset value)
		{
			return ((::System::DateTime(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMEOFFSETTODATETIME_OFFSET))(value);
		}

		static ::System::Int32 DecimalToInt32(::System::Decimal value)
		{
			return ((::System::Int32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOINT32_OFFSET))(value);
		}

		static ::System::Int64 DecimalToInt64(::System::Decimal value)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOINT64_OFFSET))(value);
		}

		static ::System::UInt64 DecimalToUInt64(::System::Decimal value)
		{
			return ((::System::UInt64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOUINT64_OFFSET))(value);
		}

		static ::System::Byte Int32ToByte(::System::Int32 value)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOBYTE_OFFSET))(value);
		}

		static ::System::Int16 Int32ToInt16(::System::Int32 value)
		{
			return ((::System::Int16(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOINT16_OFFSET))(value);
		}

		static ::System::SByte Int32ToSByte(::System::Int32 value)
		{
			return ((::System::SByte(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOSBYTE_OFFSET))(value);
		}

		static ::System::UInt16 Int32ToUInt16(::System::Int32 value)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOUINT16_OFFSET))(value);
		}

		static ::System::Int32 Int64ToInt32(::System::Int64 value)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT64TOINT32_OFFSET))(value);
		}

		static ::System::UInt32 Int64ToUInt32(::System::Int64 value)
		{
			return ((::System::UInt32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT64TOUINT32_OFFSET))(value);
		}

		static ::System::DateTime UntypedAtomicToDateTime(::System::String* value)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_UNTYPEDATOMICTODATETIME_OFFSET))(value);
		}

		static ::System::DateTimeOffset UntypedAtomicToDateTimeOffset(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_UNTYPEDATOMICTODATETIMEOFFSET_OFFSET))(value);
		}
	};
}
