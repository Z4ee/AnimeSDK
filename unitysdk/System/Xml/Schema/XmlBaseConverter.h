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

#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_ANYURITOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE50900)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_BASE64BINARYTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE509D0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGELISTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE49D50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1AE4DC40)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x1AE4DC90)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_3_OFFSET UNITYSDK_OFFSET(0x1AE4DCE0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_4_OFFSET UNITYSDK_OFFSET(0x1AE4DD30)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_5_OFFSET UNITYSDK_OFFSET(0x1AE4DD80)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_6_OFFSET UNITYSDK_OFFSET(0x1AE4DDD0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_7_OFFSET UNITYSDK_OFFSET(0x1AE4DDF0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1AE4DBF0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CREATEINVALIDCLRMAPPINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AE49DB0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE527C0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMEOFFSETTODATETIME_OFFSET UNITYSDK_OFFSET(0x1AE52EF0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE529C0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE51970)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE50A20)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DAYTIMEDURATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE519B0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOINT32_OFFSET UNITYSDK_OFFSET(0x1AE52F00)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOINT64_OFFSET UNITYSDK_OFFSET(0x1AE53150)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOUINT64_OFFSET UNITYSDK_OFFSET(0x1AE533A0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DURATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52580)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GDAYOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52A10)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GDAYTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52680)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GET_DEFAULTCLRTYPE_OFFSET UNITYSDK_OFFSET(0x1AE4E020)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1AE4DE10)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1AE4DE20)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GET_XMLTYPENAME_OFFSET UNITYSDK_OFFSET(0x1AE4DE30)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHDAYOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52AB0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHDAYTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52700)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52A60)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE526C0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARMONTHOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52B50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARMONTHTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52780)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEAROFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52B00)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52740)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOBYTE_OFFSET UNITYSDK_OFFSET(0x1AE535F0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOINT16_OFFSET UNITYSDK_OFFSET(0x1AE536C0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOSBYTE_OFFSET UNITYSDK_OFFSET(0x1AE53790)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOUINT16_OFFSET UNITYSDK_OFFSET(0x1AE53860)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT64TOINT32_OFFSET UNITYSDK_OFFSET(0x1AE53930)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT64TOUINT32_OFFSET UNITYSDK_OFFSET(0x1AE53A00)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_ISDERIVEDFROM_OFFSET UNITYSDK_OFFSET(0x1AE496B0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_QNAMETOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AE52BA0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_QNAMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE4DF10)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOBASE64BINARY_OFFSET UNITYSDK_OFFSET(0x1AE4E030)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATEOFFSET_OFFSET UNITYSDK_OFFSET(0x1AE4F530)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1AE4FEC0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATETIME_OFFSET UNITYSDK_OFFSET(0x1AE4EFB0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATE_OFFSET UNITYSDK_OFFSET(0x1AE4E180)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODAYTIMEDURATION_OFFSET UNITYSDK_OFFSET(0x1AE4F030)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODURATION_OFFSET UNITYSDK_OFFSET(0x1AE4F1E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGDAYOFFSET_OFFSET UNITYSDK_OFFSET(0x1AE4FF50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGDAY_OFFSET UNITYSDK_OFFSET(0x1AE4F2B0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHDAYOFFSET_OFFSET UNITYSDK_OFFSET(0x1AE50070)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHDAY_OFFSET UNITYSDK_OFFSET(0x1AE4F3B0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHOFFSET_OFFSET UNITYSDK_OFFSET(0x1AE4FFE0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTH_OFFSET UNITYSDK_OFFSET(0x1AE4F330)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEARMONTHOFFSET_OFFSET UNITYSDK_OFFSET(0x1AE50190)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEARMONTH_OFFSET UNITYSDK_OFFSET(0x1AE4F4B0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEAROFFSET_OFFSET UNITYSDK_OFFSET(0x1AE50100)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEAR_OFFSET UNITYSDK_OFFSET(0x1AE4F430)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOHEXBINARY_OFFSET UNITYSDK_OFFSET(0x1AE50220)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOQNAME_OFFSET UNITYSDK_OFFSET(0x1AE503D0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1AE507A0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOTIME_OFFSET UNITYSDK_OFFSET(0x1AE50720)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOYEARMONTHDURATION_OFFSET UNITYSDK_OFFSET(0x1AE50830)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TIMEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52DC0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52D80)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_1_OFFSET UNITYSDK_OFFSET(0x1AE4B850)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_2_OFFSET UNITYSDK_OFFSET(0x1AE4B6D0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_3_OFFSET UNITYSDK_OFFSET(0x1AE4B790)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_4_OFFSET UNITYSDK_OFFSET(0x1AE4CA20)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_5_OFFSET UNITYSDK_OFFSET(0x1AE4CAC0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1AE4B910)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1AE4CE20)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_2_OFFSET UNITYSDK_OFFSET(0x1AE4CED0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1AE4CD60)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x1AE4CB60)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_2_OFFSET UNITYSDK_OFFSET(0x1AE4BC10)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_3_OFFSET UNITYSDK_OFFSET(0x1AE4BA90)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_4_OFFSET UNITYSDK_OFFSET(0x1AE4BB50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_5_OFFSET UNITYSDK_OFFSET(0x1AE4CC20)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_6_OFFSET UNITYSDK_OFFSET(0x1AE4CCC0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1AE4B9D0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODECIMAL_1_OFFSET UNITYSDK_OFFSET(0x1AE4D030)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1AE4CF80)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_1_OFFSET UNITYSDK_OFFSET(0x1AE4BF10)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_2_OFFSET UNITYSDK_OFFSET(0x1AE4BD90)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_3_OFFSET UNITYSDK_OFFSET(0x1AE4BE50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_4_OFFSET UNITYSDK_OFFSET(0x1AE4D0E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_5_OFFSET UNITYSDK_OFFSET(0x1AE4D180)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1AE4BCD0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_1_OFFSET UNITYSDK_OFFSET(0x1AE4C150)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_2_OFFSET UNITYSDK_OFFSET(0x1AE4C090)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_3_OFFSET UNITYSDK_OFFSET(0x1AE4D220)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_4_OFFSET UNITYSDK_OFFSET(0x1AE4D2E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_5_OFFSET UNITYSDK_OFFSET(0x1AE4D380)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x1AE4BFD0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_1_OFFSET UNITYSDK_OFFSET(0x1AE4C390)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_2_OFFSET UNITYSDK_OFFSET(0x1AE4C2D0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_3_OFFSET UNITYSDK_OFFSET(0x1AE4D420)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_4_OFFSET UNITYSDK_OFFSET(0x1AE4D4E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_5_OFFSET UNITYSDK_OFFSET(0x1AE4D580)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x1AE4C210)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_1_OFFSET UNITYSDK_OFFSET(0x1AE4D6E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_2_OFFSET UNITYSDK_OFFSET(0x1AE4D780)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1AE4D620)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AE4D890)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1AE4D900)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1AE4D970)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1AE4D9E0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1AE4DA50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1AE4DAC0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1AE4DB30)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x1AE4DBA0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x1AE43DD0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE4D820)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_UNTYPEDATOMICTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1AE53B50)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_UNTYPEDATOMICTODATETIME_OFFSET UNITYSDK_OFFSET(0x1AE53AD0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER_YEARMONTHDURATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE52E10)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE53BE0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE45E30)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AE4C970)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AE4C9F0)
#define SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4C6A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlBaseConverter_TypeDefinitionIndex = 2211;

	class XmlBaseConverter : public ::System::Xml::Schema::XmlValueConverter
	{
	public:
		static ::System::Type** StaticGet_XPathNavigatorType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x155C0);
		}
		static ::System::Type** StaticGet_Int64Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x155C8);
		}
		static ::System::Type** StaticGet_SByteType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x155D0);
		}
		static ::System::Type** StaticGet_XmlQualifiedNameType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x155D8);
		}
		static ::System::Type** StaticGet_XmlAtomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x155E0);
		}
		static ::System::Type** StaticGet_TimeSpanType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x155E8);
		}
		static ::System::Type** StaticGet_IListType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x155F0);
		}
		static ::System::Type** StaticGet_Int16Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x155F8);
		}
		static ::System::Type** StaticGet_UInt64Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15600);
		}
		static ::System::Type** StaticGet_ICollectionType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15608);
		}
		static ::System::Type** StaticGet_XmlAtomicValueArrayType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15610);
		}
		static ::System::Type** StaticGet_StringType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15618);
		}
		static ::System::Type** StaticGet_XPathItemType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15620);
		}
		static ::System::Type** StaticGet_ObjectArrayType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15628);
		}
		static ::System::Type** StaticGet_UInt32Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15630);
		}
		static ::System::Type** StaticGet_UriType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15638);
		}
		static ::System::Type** StaticGet_DateTimeType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15640);
		}
		static ::System::Type** StaticGet_StringArrayType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15648);
		}
		static ::System::Type** StaticGet_DoubleType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15650);
		}
		static ::System::Type** StaticGet_DateTimeOffsetType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15658);
		}
		static ::System::Type** StaticGet_SingleType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15660);
		}
		static ::System::Type** StaticGet_Int32Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15668);
		}
		static ::System::Type** StaticGet_UInt16Type()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15670);
		}
		static ::System::Type** StaticGet_IEnumerableType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15678);
		}
		static ::System::Type** StaticGet_BooleanType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15680);
		}
		static ::System::Type** StaticGet_DecimalType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15688);
		}
		static ::System::Type** StaticGet_ByteType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15690);
		}
		static ::System::Type** StaticGet_ObjectType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x15698);
		}
		static ::System::Type** StaticGet_ByteArrayType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlBaseConverter_TypeDefinitionIndex)->GetStaticField(0x156A0);
		}
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x10
		::System::Type* clrTypeDefault; // 0x18
		::System::Xml::Schema::XmlTypeCode typeCode; // 0x20

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlTypeCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Xml::Schema::XmlBaseConverter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlBaseConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Xml::Schema::XmlBaseConverter* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlBaseConverter*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CTOR_3_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER__CCTOR_OFFSET))();
		}

		::System::Boolean ToBoolean(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Boolean ToBoolean_1(::System::Double a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_1_OFFSET))(this, a1);
		}

		::System::Boolean ToBoolean_2(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_2_OFFSET))(this, a1);
		}

		::System::Boolean ToBoolean_3(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_3_OFFSET))(this, a1);
		}

		::System::Boolean ToBoolean_4(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_4_OFFSET))(this, a1);
		}

		::System::Boolean ToBoolean_5(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOBOOLEAN_5_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime(::System::Boolean a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime_1(::System::DateTimeOffset a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_1_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime_2(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_2_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime_3(::System::Int32 a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_3_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime_4(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_4_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime_5(::System::String* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_5_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime_6(::System::Object* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIME_6_OFFSET))(this, a1);
		}

		::System::DateTimeOffset ToDateTimeOffset(::System::DateTime a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_OFFSET))(this, a1);
		}

		::System::DateTimeOffset ToDateTimeOffset_1(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_1_OFFSET))(this, a1);
		}

		::System::DateTimeOffset ToDateTimeOffset_2(::System::Object* a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODATETIMEOFFSET_2_OFFSET))(this, a1);
		}

		::System::Decimal ToDecimal(::System::String* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODECIMAL_OFFSET))(this, a1);
		}

		::System::Decimal ToDecimal_1(::System::Object* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODECIMAL_1_OFFSET))(this, a1);
		}

		::System::Double ToDouble(::System::Boolean a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_OFFSET))(this, a1);
		}

		::System::Double ToDouble_1(::System::DateTime a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_1_OFFSET))(this, a1);
		}

		::System::Double ToDouble_2(::System::Int32 a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_2_OFFSET))(this, a1);
		}

		::System::Double ToDouble_3(::System::Int64 a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_3_OFFSET))(this, a1);
		}

		::System::Double ToDouble_4(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_4_OFFSET))(this, a1);
		}

		::System::Double ToDouble_5(::System::Object* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TODOUBLE_5_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32(::System::Boolean a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32_1(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_1_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32_2(::System::Double a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_2_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32_3(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_3_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32_4(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_4_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32_5(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT32_5_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64(::System::Boolean a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64_1(::System::DateTime a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_1_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64_2(::System::Double a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_2_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64_3(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_3_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64_4(::System::String* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_4_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64_5(::System::Object* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOINT64_5_OFFSET))(this, a1);
		}

		::System::Single ToSingle(::System::Double a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Single ToSingle_1(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_1_OFFSET))(this, a1);
		}

		::System::Single ToSingle_2(::System::Object* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSINGLE_2_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToString_1(::System::DateTime a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::Decimal a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_3_OFFSET))(this, a1);
		}

		::System::String* ToString_4(::System::Double a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_4_OFFSET))(this, a1);
		}

		::System::String* ToString_5(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_5_OFFSET))(this, a1);
		}

		::System::String* ToString_6(::System::Int64 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_6_OFFSET))(this, a1);
		}

		::System::String* ToString_7(::System::Single a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_7_OFFSET))(this, a1);
		}

		::System::String* ToString_8(::System::Object* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_8_OFFSET))(this, a1, a2);
		}

		::System::String* ToString_9(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TOSTRING_9_OFFSET))(this, a1);
		}

		::System::Object* ChangeType(::System::Boolean a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_1(::System::DateTime a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::DateTime, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_1_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_2(::System::Decimal a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Decimal, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_2_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_3(::System::Double a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_3_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_4(::System::Int32 a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_4_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_5(::System::Int64 a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_5_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_6(::System::String* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeType_7(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGETYPE_7_OFFSET))(this, a1, a2);
		}

		::System::Xml::Schema::XmlSchemaType* get_SchemaType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GET_SCHEMATYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GET_TYPECODE_OFFSET))(this);
		}

		::System::String* get_XmlTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GET_XMLTYPENAME_OFFSET))(this);
		}

		::System::Type* get_DefaultClrType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GET_DEFAULTCLRTYPE_OFFSET))(this);
		}

		static ::System::Boolean IsDerivedFrom(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_ISDERIVEDFROM_OFFSET))(a1, a2);
		}

		::System::Exception* CreateInvalidClrMappingException(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CREATEINVALIDCLRMAPPINGEXCEPTION_OFFSET))(this, a1, a2);
		}

		static ::System::String* QNameToString(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::String*(*)(::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_QNAMETOSTRING_OFFSET))(a1);
		}

		::System::Object* ChangeListType(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_CHANGELISTTYPE_OFFSET))(this, a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* StringToBase64Binary(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOBASE64BINARY_OFFSET))(a1);
		}

		static ::System::DateTime StringToDate(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATE_OFFSET))(a1);
		}

		static ::System::DateTime StringToDateTime(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATETIME_OFFSET))(a1);
		}

		static ::System::TimeSpan StringToDayTimeDuration(::System::String* a1)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODAYTIMEDURATION_OFFSET))(a1);
		}

		static ::System::TimeSpan StringToDuration(::System::String* a1)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODURATION_OFFSET))(a1);
		}

		static ::System::DateTime StringToGDay(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGDAY_OFFSET))(a1);
		}

		static ::System::DateTime StringToGMonth(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTH_OFFSET))(a1);
		}

		static ::System::DateTime StringToGMonthDay(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHDAY_OFFSET))(a1);
		}

		static ::System::DateTime StringToGYear(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEAR_OFFSET))(a1);
		}

		static ::System::DateTime StringToGYearMonth(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEARMONTH_OFFSET))(a1);
		}

		static ::System::DateTimeOffset StringToDateOffset(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATEOFFSET_OFFSET))(a1);
		}

		static ::System::DateTimeOffset StringToDateTimeOffset(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTODATETIMEOFFSET_OFFSET))(a1);
		}

		static ::System::DateTimeOffset StringToGDayOffset(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGDAYOFFSET_OFFSET))(a1);
		}

		static ::System::DateTimeOffset StringToGMonthOffset(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHOFFSET_OFFSET))(a1);
		}

		static ::System::DateTimeOffset StringToGMonthDayOffset(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGMONTHDAYOFFSET_OFFSET))(a1);
		}

		static ::System::DateTimeOffset StringToGYearOffset(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEAROFFSET_OFFSET))(a1);
		}

		static ::System::DateTimeOffset StringToGYearMonthOffset(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOGYEARMONTHOFFSET_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* StringToHexBinary(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOHEXBINARY_OFFSET))(a1);
		}

		static ::System::Xml::XmlQualifiedName* StringToQName(::System::String* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::String*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOQNAME_OFFSET))(a1, a2);
		}

		static ::System::DateTime StringToTime(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOTIME_OFFSET))(a1);
		}

		static ::System::DateTimeOffset StringToTimeOffset(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOTIMEOFFSET_OFFSET))(a1);
		}

		static ::System::TimeSpan StringToYearMonthDuration(::System::String* a1)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_STRINGTOYEARMONTHDURATION_OFFSET))(a1);
		}

		static ::System::String* AnyUriToString(::System::Uri* a1)
		{
			return ((::System::String*(*)(::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_ANYURITOSTRING_OFFSET))(a1);
		}

		static ::System::String* Base64BinaryToString(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_BASE64BINARYTOSTRING_OFFSET))(a1);
		}

		static ::System::String* DateToString(::System::DateTime a1)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETOSTRING_OFFSET))(a1);
		}

		static ::System::String* DateTimeToString(::System::DateTime a1)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMETOSTRING_OFFSET))(a1);
		}

		static ::System::String* DayTimeDurationToString(::System::TimeSpan a1)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DAYTIMEDURATIONTOSTRING_OFFSET))(a1);
		}

		static ::System::String* DurationToString(::System::TimeSpan a1)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DURATIONTOSTRING_OFFSET))(a1);
		}

		static ::System::String* GDayToString(::System::DateTime a1)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GDAYTOSTRING_OFFSET))(a1);
		}

		static ::System::String* GMonthToString(::System::DateTime a1)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHTOSTRING_OFFSET))(a1);
		}

		static ::System::String* GMonthDayToString(::System::DateTime a1)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHDAYTOSTRING_OFFSET))(a1);
		}

		static ::System::String* GYearToString(::System::DateTime a1)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARTOSTRING_OFFSET))(a1);
		}

		static ::System::String* GYearMonthToString(::System::DateTime a1)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARMONTHTOSTRING_OFFSET))(a1);
		}

		static ::System::String* DateOffsetToString(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATEOFFSETTOSTRING_OFFSET))(a1);
		}

		static ::System::String* DateTimeOffsetToString(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMEOFFSETTOSTRING_OFFSET))(a1);
		}

		static ::System::String* GDayOffsetToString(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GDAYOFFSETTOSTRING_OFFSET))(a1);
		}

		static ::System::String* GMonthOffsetToString(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHOFFSETTOSTRING_OFFSET))(a1);
		}

		static ::System::String* GMonthDayOffsetToString(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GMONTHDAYOFFSETTOSTRING_OFFSET))(a1);
		}

		static ::System::String* GYearOffsetToString(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEAROFFSETTOSTRING_OFFSET))(a1);
		}

		static ::System::String* GYearMonthOffsetToString(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_GYEARMONTHOFFSETTOSTRING_OFFSET))(a1);
		}

		static ::System::String* QNameToString_1(::System::Xml::XmlQualifiedName* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::String*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_QNAMETOSTRING_1_OFFSET))(a1, a2);
		}

		static ::System::String* TimeToString(::System::DateTime a1)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TIMETOSTRING_OFFSET))(a1);
		}

		static ::System::String* TimeOffsetToString(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_TIMEOFFSETTOSTRING_OFFSET))(a1);
		}

		static ::System::String* YearMonthDurationToString(::System::TimeSpan a1)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_YEARMONTHDURATIONTOSTRING_OFFSET))(a1);
		}

		static ::System::DateTime DateTimeOffsetToDateTime(::System::DateTimeOffset a1)
		{
			return ((::System::DateTime(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DATETIMEOFFSETTODATETIME_OFFSET))(a1);
		}

		static ::System::Int32 DecimalToInt32(::System::Decimal a1)
		{
			return ((::System::Int32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOINT32_OFFSET))(a1);
		}

		static ::System::Int64 DecimalToInt64(::System::Decimal a1)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOINT64_OFFSET))(a1);
		}

		static ::System::UInt64 DecimalToUInt64(::System::Decimal a1)
		{
			return ((::System::UInt64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_DECIMALTOUINT64_OFFSET))(a1);
		}

		static ::System::Byte Int32ToByte(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOBYTE_OFFSET))(a1);
		}

		static ::System::Int16 Int32ToInt16(::System::Int32 a1)
		{
			return ((::System::Int16(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOINT16_OFFSET))(a1);
		}

		static ::System::SByte Int32ToSByte(::System::Int32 a1)
		{
			return ((::System::SByte(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOSBYTE_OFFSET))(a1);
		}

		static ::System::UInt16 Int32ToUInt16(::System::Int32 a1)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT32TOUINT16_OFFSET))(a1);
		}

		static ::System::Int32 Int64ToInt32(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT64TOINT32_OFFSET))(a1);
		}

		static ::System::UInt32 Int64ToUInt32(::System::Int64 a1)
		{
			return ((::System::UInt32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_INT64TOUINT32_OFFSET))(a1);
		}

		static ::System::DateTime UntypedAtomicToDateTime(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_UNTYPEDATOMICTODATETIME_OFFSET))(a1);
		}

		static ::System::DateTimeOffset UntypedAtomicToDateTimeOffset(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBASECONVERTER_UNTYPEDATOMICTODATETIMEOFFSET_OFFSET))(a1);
		}
	};
}
