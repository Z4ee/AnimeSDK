#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/Xml/ExceptionType.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlDateTimeSerializationMode.h"

namespace System { class ArgumentException; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_XML_XMLCONVERT_CREATEALLDATETIMEFORMATS_OFFSET UNITYSDK_OFFSET(0x1B008A00)
#define SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1B00AB60)
#define SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1B00AD60)
#define SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_3_OFFSET UNITYSDK_OFFSET(0x1B00AFF0)
#define SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B00A480)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1B00B550)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B00A8C0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1B00B3C0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1B00B4B0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B00B360)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDNAMEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AFEE830)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDNAMECHAREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B001ED0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1B00B2F0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1B00A580)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B00B230)
#define SYSTEM_XML_XMLCONVERT_DECODENAME_OFFSET UNITYSDK_OFFSET(0x1B000DE0)
#define SYSTEM_XML_XMLCONVERT_DOUBLETOINT64BITS_OFFSET UNITYSDK_OFFSET(0x1B00A1B0)
#define SYSTEM_XML_XMLCONVERT_ENCODELOCALNAME_OFFSET UNITYSDK_OFFSET(0x1B000D80)
#define SYSTEM_XML_XMLCONVERT_ENCODENAME_1_OFFSET UNITYSDK_OFFSET(0x1AFFFE20)
#define SYSTEM_XML_XMLCONVERT_ENCODENAME_OFFSET UNITYSDK_OFFSET(0x1AFFFDC0)
#define SYSTEM_XML_XMLCONVERT_FROMBINHEXSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B001D80)
#define SYSTEM_XML_XMLCONVERT_FROMBINHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1B001C40)
#define SYSTEM_XML_XMLCONVERT_FROMHEX_OFFSET UNITYSDK_OFFSET(0x1B001C20)
#define SYSTEM_XML_XMLCONVERT_GET_ALLDATETIMEFORMATS_OFFSET UNITYSDK_OFFSET(0x1B008930)
#define SYSTEM_XML_XMLCONVERT_ISNEGATIVEZERO_OFFSET UNITYSDK_OFFSET(0x1B003520)
#define SYSTEM_XML_XMLCONVERT_SPLITSTRING_OFFSET UNITYSDK_OFFSET(0x1B00A130)
#define SYSTEM_XML_XMLCONVERT_STREQUAL_OFFSET UNITYSDK_OFFSET(0x1B009FE0)
#define SYSTEM_XML_XMLCONVERT_SWITCHTOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x1B003D00)
#define SYSTEM_XML_XMLCONVERT_SWITCHTOUTCTIME_OFFSET UNITYSDK_OFFSET(0x1B003DF0)
#define SYSTEM_XML_XMLCONVERT_TOBINHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1B001E60)
#define SYSTEM_XML_XMLCONVERT_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1B003F50)
#define SYSTEM_XML_XMLCONVERT_TOBYTE_OFFSET UNITYSDK_OFFSET(0x1B006670)
#define SYSTEM_XML_XMLCONVERT_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1B004640)
#define SYSTEM_XML_XMLCONVERT_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B009500)
#define SYSTEM_XML_XMLCONVERT_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x1B008FE0)
#define SYSTEM_XML_XMLCONVERT_TODATETIME_2_OFFSET UNITYSDK_OFFSET(0x1B009120)
#define SYSTEM_XML_XMLCONVERT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1B008E40)
#define SYSTEM_XML_XMLCONVERT_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1B004A00)
#define SYSTEM_XML_XMLCONVERT_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1AFFB330)
#define SYSTEM_XML_XMLCONVERT_TOGUID_OFFSET UNITYSDK_OFFSET(0x1B0095C0)
#define SYSTEM_XML_XMLCONVERT_TOINT16_OFFSET UNITYSDK_OFFSET(0x1B0058D0)
#define SYSTEM_XML_XMLCONVERT_TOINT32_OFFSET UNITYSDK_OFFSET(0x1B005D70)
#define SYSTEM_XML_XMLCONVERT_TOINT64_OFFSET UNITYSDK_OFFSET(0x1B0061F0)
#define SYSTEM_XML_XMLCONVERT_TOINTEGER_OFFSET UNITYSDK_OFFSET(0x1B004F20)
#define SYSTEM_XML_XMLCONVERT_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x1B005440)
#define SYSTEM_XML_XMLCONVERT_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1B007510)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_10_OFFSET UNITYSDK_OFFSET(0x1B003260)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_11_OFFSET UNITYSDK_OFFSET(0x1B003320)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_12_OFFSET UNITYSDK_OFFSET(0x1B0035A0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_13_OFFSET UNITYSDK_OFFSET(0x1B003770)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_14_OFFSET UNITYSDK_OFFSET(0x1B003870)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_15_OFFSET UNITYSDK_OFFSET(0x1B003940)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_16_OFFSET UNITYSDK_OFFSET(0x1B003ED0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_17_OFFSET UNITYSDK_OFFSET(0x1B003F10)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B002BC0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1B002C40)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1B002D20)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1B002DE0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1B002EA0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1B002F60)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1B003020)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x1B0030E0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x1B0031A0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B002B80)
#define SYSTEM_XML_XMLCONVERT_TOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1B008700)
#define SYSTEM_XML_XMLCONVERT_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1B006770)
#define SYSTEM_XML_XMLCONVERT_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1B006C10)
#define SYSTEM_XML_XMLCONVERT_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1B007090)
#define SYSTEM_XML_XMLCONVERT_TOURI_OFFSET UNITYSDK_OFFSET(0x1B009780)
#define SYSTEM_XML_XMLCONVERT_TOXPATHDOUBLE_OFFSET UNITYSDK_OFFSET(0x1B0082A0)
#define SYSTEM_XML_XMLCONVERT_TRIMSTRING_OFFSET UNITYSDK_OFFSET(0x1B0041B0)
#define SYSTEM_XML_XMLCONVERT_TRYTOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1B004250)
#define SYSTEM_XML_XMLCONVERT_TRYTOBYTE_OFFSET UNITYSDK_OFFSET(0x1AFFBD40)
#define SYSTEM_XML_XMLCONVERT_TRYTOCHAR_OFFSET UNITYSDK_OFFSET(0x1B004730)
#define SYSTEM_XML_XMLCONVERT_TRYTODECIMAL_OFFSET UNITYSDK_OFFSET(0x1B004B70)
#define SYSTEM_XML_XMLCONVERT_TRYTODOUBLE_OFFSET UNITYSDK_OFFSET(0x1B007D50)
#define SYSTEM_XML_XMLCONVERT_TRYTOGUID_OFFSET UNITYSDK_OFFSET(0x1B0095E0)
#define SYSTEM_XML_XMLCONVERT_TRYTOINT16_OFFSET UNITYSDK_OFFSET(0x1B0059D0)
#define SYSTEM_XML_XMLCONVERT_TRYTOINT32_OFFSET UNITYSDK_OFFSET(0x1B005E70)
#define SYSTEM_XML_XMLCONVERT_TRYTOINT64_OFFSET UNITYSDK_OFFSET(0x1B0062F0)
#define SYSTEM_XML_XMLCONVERT_TRYTOINTEGER_OFFSET UNITYSDK_OFFSET(0x1B005090)
#define SYSTEM_XML_XMLCONVERT_TRYTOSBYTE_OFFSET UNITYSDK_OFFSET(0x1B005540)
#define SYSTEM_XML_XMLCONVERT_TRYTOSINGLE_OFFSET UNITYSDK_OFFSET(0x1B007810)
#define SYSTEM_XML_XMLCONVERT_TRYTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1B0088E0)
#define SYSTEM_XML_XMLCONVERT_TRYTOUINT16_OFFSET UNITYSDK_OFFSET(0x1B006870)
#define SYSTEM_XML_XMLCONVERT_TRYTOUINT32_OFFSET UNITYSDK_OFFSET(0x1B006D10)
#define SYSTEM_XML_XMLCONVERT_TRYTOUINT64_OFFSET UNITYSDK_OFFSET(0x1B007190)
#define SYSTEM_XML_XMLCONVERT_TRYTOURI_OFFSET UNITYSDK_OFFSET(0x1B009A80)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNAME_OFFSET UNITYSDK_OFFSET(0x1B002180)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNCNAME_OFFSET UNITYSDK_OFFSET(0x1B002500)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNMTOKEN_OFFSET UNITYSDK_OFFSET(0x1B0028C0)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNORMALIZEDSTRING_OFFSET UNITYSDK_OFFSET(0x1B002AD0)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYTOKEN_OFFSET UNITYSDK_OFFSET(0x1B002770)
#define SYSTEM_XML_XMLCONVERT_VERIFYCHARDATA_OFFSET UNITYSDK_OFFSET(0x1B00A1C0)
#define SYSTEM_XML_XMLCONVERT_VERIFYNAME_OFFSET UNITYSDK_OFFSET(0x1AFEEA00)
#define SYSTEM_XML_XMLCONVERT_VERIFYNCNAME_1_OFFSET UNITYSDK_OFFSET(0x1B002400)
#define SYSTEM_XML_XMLCONVERT_VERIFYNCNAME_OFFSET UNITYSDK_OFFSET(0x1B0023A0)
#define SYSTEM_XML_XMLCONVERT_VERIFYTOKEN_OFFSET UNITYSDK_OFFSET(0x1B002610)
#define SYSTEM_XML_XMLCONVERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B00B5D0)
#define SYSTEM_XML_XMLCONVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00B5C0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlConvert_TypeDefinitionIndex = 1813;

	class XmlConvert : public ::System::Object
	{
	public:
		static ::System::Xml::XmlCharType* StaticGet_xmlCharType()
		{
			return (::System::Xml::XmlCharType*)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0x1BF0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_allDateTimeFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0x1BF8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_c_EncodeCharPattern()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0x1C00);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_crt()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0x1C08);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_WhitespaceChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0x1C10);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_c_DecodeCharPattern()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0x1C18);
		}
		static ::System::Int32* StaticGet_c_EncodedCharLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0xE10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT__CCTOR_OFFSET))();
		}

		static ::System::String* EncodeName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_ENCODENAME_OFFSET))(name);
		}

		static ::System::String* EncodeLocalName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_ENCODELOCALNAME_OFFSET))(name);
		}

		static ::System::String* DecodeName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_DECODENAME_OFFSET))(name);
		}

		static ::System::String* EncodeName_1(::System::String* name, ::System::Boolean first, ::System::Boolean local)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_ENCODENAME_1_OFFSET))(name, first, local);
		}

		static ::System::Int32 FromHex(::System::Char digit)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_FROMHEX_OFFSET))(digit);
		}

		static ::Il2CppArray<::System::Byte>* FromBinHexString(::System::String* s)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_FROMBINHEXSTRING_OFFSET))(s);
		}

		static ::Il2CppArray<::System::Byte>* FromBinHexString_1(::System::String* s, ::System::Boolean allowOddCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_FROMBINHEXSTRING_1_OFFSET))(s, allowOddCount);
		}

		static ::System::String* ToBinHexString(::Il2CppArray<::System::Byte>* inArray)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOBINHEXSTRING_OFFSET))(inArray);
		}

		static ::System::String* VerifyName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_VERIFYNAME_OFFSET))(name);
		}

		static ::System::Exception* TryVerifyName(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYVERIFYNAME_OFFSET))(name);
		}

		static ::System::String* VerifyNCName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_VERIFYNCNAME_OFFSET))(name);
		}

		static ::System::String* VerifyNCName_1(::System::String* name, ::System::Xml::ExceptionType exceptionType)
		{
			return ((::System::String*(*)(::System::String*, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_VERIFYNCNAME_1_OFFSET))(name, exceptionType);
		}

		static ::System::Exception* TryVerifyNCName(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYVERIFYNCNAME_OFFSET))(name);
		}

		static ::System::String* VerifyTOKEN(::System::String* token)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_VERIFYTOKEN_OFFSET))(token);
		}

		static ::System::Exception* TryVerifyTOKEN(::System::String* token)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYVERIFYTOKEN_OFFSET))(token);
		}

		static ::System::Exception* TryVerifyNMTOKEN(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYVERIFYNMTOKEN_OFFSET))(name);
		}

		static ::System::Exception* TryVerifyNormalizedString(::System::String* str)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYVERIFYNORMALIZEDSTRING_OFFSET))(str);
		}

		static ::System::String* ToString(::System::Boolean value)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_OFFSET))(value);
		}

		static ::System::String* ToString_1(::System::Char value)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_1_OFFSET))(value);
		}

		static ::System::String* ToString_2(::System::Decimal value)
		{
			return ((::System::String*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_2_OFFSET))(value);
		}

		static ::System::String* ToString_3(::System::SByte value)
		{
			return ((::System::String*(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_3_OFFSET))(value);
		}

		static ::System::String* ToString_4(::System::Int16 value)
		{
			return ((::System::String*(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_4_OFFSET))(value);
		}

		static ::System::String* ToString_5(::System::Int32 value)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_5_OFFSET))(value);
		}

		static ::System::String* ToString_6(::System::Int64 value)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_6_OFFSET))(value);
		}

		static ::System::String* ToString_7(::System::Byte value)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_7_OFFSET))(value);
		}

		static ::System::String* ToString_8(::System::UInt16 value)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_8_OFFSET))(value);
		}

		static ::System::String* ToString_9(::System::UInt32 value)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_9_OFFSET))(value);
		}

		static ::System::String* ToString_10(::System::UInt64 value)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_10_OFFSET))(value);
		}

		static ::System::String* ToString_11(::System::Single value)
		{
			return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_11_OFFSET))(value);
		}

		static ::System::String* ToString_12(::System::Double value)
		{
			return ((::System::String*(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_12_OFFSET))(value);
		}

		static ::System::String* ToString_13(::System::TimeSpan value)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_13_OFFSET))(value);
		}

		static ::System::String* ToString_14(::System::DateTime value, ::System::String* format)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_14_OFFSET))(value, format);
		}

		static ::System::String* ToString_15(::System::DateTime value, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::Xml::XmlDateTimeSerializationMode))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_15_OFFSET))(value, dateTimeOption);
		}

		static ::System::String* ToString_16(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_16_OFFSET))(value);
		}

		static ::System::String* ToString_17(::System::Guid value)
		{
			return ((::System::String*(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_17_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOBOOLEAN_OFFSET))(s);
		}

		static ::System::Exception* TryToBoolean(::System::String* s, ::System::Boolean& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOBOOLEAN_OFFSET))(s, result);
		}

		static ::System::Char ToChar(::System::String* s)
		{
			return ((::System::Char(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOCHAR_OFFSET))(s);
		}

		static ::System::Exception* TryToChar(::System::String* s, ::System::Char& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Char&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOCHAR_OFFSET))(s, result);
		}

		static ::System::Decimal ToDecimal(::System::String* s)
		{
			return ((::System::Decimal(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODECIMAL_OFFSET))(s);
		}

		static ::System::Exception* TryToDecimal(::System::String* s, ::System::Decimal& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTODECIMAL_OFFSET))(s, result);
		}

		static ::System::Decimal ToInteger(::System::String* s)
		{
			return ((::System::Decimal(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOINTEGER_OFFSET))(s);
		}

		static ::System::Exception* TryToInteger(::System::String* s, ::System::Decimal& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOINTEGER_OFFSET))(s, result);
		}

		static ::System::SByte ToSByte(::System::String* s)
		{
			return ((::System::SByte(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSBYTE_OFFSET))(s);
		}

		static ::System::Exception* TryToSByte(::System::String* s, ::System::SByte& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::SByte&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOSBYTE_OFFSET))(s, result);
		}

		static ::System::Int16 ToInt16(::System::String* s)
		{
			return ((::System::Int16(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOINT16_OFFSET))(s);
		}

		static ::System::Exception* TryToInt16(::System::String* s, ::System::Int16& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOINT16_OFFSET))(s, result);
		}

		static ::System::Int32 ToInt32(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOINT32_OFFSET))(s);
		}

		static ::System::Exception* TryToInt32(::System::String* s, ::System::Int32& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOINT32_OFFSET))(s, result);
		}

		static ::System::Int64 ToInt64(::System::String* s)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOINT64_OFFSET))(s);
		}

		static ::System::Exception* TryToInt64(::System::String* s, ::System::Int64& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOINT64_OFFSET))(s, result);
		}

		static ::System::Byte ToByte(::System::String* s)
		{
			return ((::System::Byte(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOBYTE_OFFSET))(s);
		}

		static ::System::Exception* TryToByte(::System::String* s, ::System::Byte& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Byte&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOBYTE_OFFSET))(s, result);
		}

		static ::System::UInt16 ToUInt16(::System::String* s)
		{
			return ((::System::UInt16(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOUINT16_OFFSET))(s);
		}

		static ::System::Exception* TryToUInt16(::System::String* s, ::System::UInt16& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::UInt16&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOUINT16_OFFSET))(s, result);
		}

		static ::System::UInt32 ToUInt32(::System::String* s)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOUINT32_OFFSET))(s);
		}

		static ::System::Exception* TryToUInt32(::System::String* s, ::System::UInt32& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOUINT32_OFFSET))(s, result);
		}

		static ::System::UInt64 ToUInt64(::System::String* s)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOUINT64_OFFSET))(s);
		}

		static ::System::Exception* TryToUInt64(::System::String* s, ::System::UInt64& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOUINT64_OFFSET))(s, result);
		}

		static ::System::Single ToSingle(::System::String* s)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSINGLE_OFFSET))(s);
		}

		static ::System::Exception* TryToSingle(::System::String* s, ::System::Single& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOSINGLE_OFFSET))(s, result);
		}

		static ::System::Double ToDouble(::System::String* s)
		{
			return ((::System::Double(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODOUBLE_OFFSET))(s);
		}

		static ::System::Exception* TryToDouble(::System::String* s, ::System::Double& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Double&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTODOUBLE_OFFSET))(s, result);
		}

		static ::System::Double ToXPathDouble(::System::Object* o)
		{
			return ((::System::Double(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOXPATHDOUBLE_OFFSET))(o);
		}

		static ::System::TimeSpan ToTimeSpan(::System::String* s)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOTIMESPAN_OFFSET))(s);
		}

		static ::System::Exception* TryToTimeSpan(::System::String* s, ::System::TimeSpan& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOTIMESPAN_OFFSET))(s, result);
		}

		static ::Il2CppArray<::System::String*>* get_AllDateTimeFormats()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_GET_ALLDATETIMEFORMATS_OFFSET))();
		}

		static ::System::Void CreateAllDateTimeFormats()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEALLDATETIMEFORMATS_OFFSET))();
		}

		static ::System::DateTime ToDateTime(::System::String* s)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODATETIME_OFFSET))(s);
		}

		static ::System::DateTime ToDateTime_1(::System::String* s, ::Il2CppArray<::System::String*>* formats)
		{
			return ((::System::DateTime(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODATETIME_1_OFFSET))(s, formats);
		}

		static ::System::DateTime ToDateTime_2(::System::String* s, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::Xml::XmlDateTimeSerializationMode))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODATETIME_2_OFFSET))(s, dateTimeOption);
		}

		static ::System::DateTimeOffset ToDateTimeOffset(::System::String* s)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TODATETIMEOFFSET_OFFSET))(s);
		}

		static ::System::Guid ToGuid(::System::String* s)
		{
			return ((::System::Guid(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOGUID_OFFSET))(s);
		}

		static ::System::Exception* TryToGuid(::System::String* s, ::System::Guid& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOGUID_OFFSET))(s, result);
		}

		static ::System::DateTime SwitchToLocalTime(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_SWITCHTOLOCALTIME_OFFSET))(value);
		}

		static ::System::DateTime SwitchToUtcTime(::System::DateTime value)
		{
			return ((::System::DateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_SWITCHTOUTCTIME_OFFSET))(value);
		}

		static ::System::Uri* ToUri(::System::String* s)
		{
			return ((::System::Uri*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOURI_OFFSET))(s);
		}

		static ::System::Exception* TryToUri(::System::String* s, ::System::Uri*& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRYTOURI_OFFSET))(s, result);
		}

		static ::System::Boolean StrEqual(::Il2CppArray<::System::Char>* chars, ::System::Int32 strPos1, ::System::Int32 strLen1, ::System::String* str2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_STREQUAL_OFFSET))(chars, strPos1, strLen1, str2);
		}

		static ::System::String* TrimString(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRIMSTRING_OFFSET))(value);
		}

		static ::Il2CppArray<::System::String*>* SplitString(::System::String* value)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_SPLITSTRING_OFFSET))(value);
		}

		static ::System::Boolean IsNegativeZero(::System::Double value)
		{
			return ((::System::Boolean(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_ISNEGATIVEZERO_OFFSET))(value);
		}

		static ::System::Int64 DoubleToInt64Bits(::System::Double value)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_DOUBLETOINT64BITS_OFFSET))(value);
		}

		static ::System::Void VerifyCharData(::System::String* data, ::System::Xml::ExceptionType invCharExceptionType, ::System::Xml::ExceptionType invSurrogateExceptionType)
		{
			return ((::System::Void(*)(::System::String*, ::System::Xml::ExceptionType, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_VERIFYCHARDATA_OFFSET))(data, invCharExceptionType, invSurrogateExceptionType);
		}

		static ::System::Exception* CreateException(::System::String* res, ::System::Xml::ExceptionType exceptionType, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_OFFSET))(res, exceptionType, lineNo, linePos);
		}

		static ::System::Exception* CreateException_1(::System::String* res, ::System::String* arg, ::System::Xml::ExceptionType exceptionType, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::String*, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_1_OFFSET))(res, arg, exceptionType, lineNo, linePos);
		}

		static ::System::Exception* CreateException_2(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Xml::ExceptionType exceptionType)
		{
			return ((::System::Exception*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_2_OFFSET))(res, args, exceptionType);
		}

		static ::System::Exception* CreateException_3(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Xml::ExceptionType exceptionType, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Exception*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_3_OFFSET))(res, args, exceptionType, lineNo, linePos);
		}

		static ::System::Exception* CreateInvalidSurrogatePairException(::System::Char low, ::System::Char hi)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_OFFSET))(low, hi);
		}

		static ::System::Exception* CreateInvalidSurrogatePairException_1(::System::Char low, ::System::Char hi, ::System::Xml::ExceptionType exceptionType)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Char, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_1_OFFSET))(low, hi, exceptionType);
		}

		static ::System::Exception* CreateInvalidSurrogatePairException_2(::System::Char low, ::System::Char hi, ::System::Xml::ExceptionType exceptionType, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Char, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_2_OFFSET))(low, hi, exceptionType, lineNo, linePos);
		}

		static ::System::Exception* CreateInvalidHighSurrogateCharException(::System::Char hi)
		{
			return ((::System::Exception*(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_OFFSET))(hi);
		}

		static ::System::Exception* CreateInvalidHighSurrogateCharException_1(::System::Char hi, ::System::Xml::ExceptionType exceptionType)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_1_OFFSET))(hi, exceptionType);
		}

		static ::System::Exception* CreateInvalidHighSurrogateCharException_2(::System::Char hi, ::System::Xml::ExceptionType exceptionType, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_2_OFFSET))(hi, exceptionType, lineNo, linePos);
		}

		static ::System::Exception* CreateInvalidCharException(::System::String* data, ::System::Int32 invCharPos, ::System::Xml::ExceptionType exceptionType)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_OFFSET))(data, invCharPos, exceptionType);
		}

		static ::System::Exception* CreateInvalidCharException_1(::System::Char invChar, ::System::Char nextChar, ::System::Xml::ExceptionType exceptionType)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Char, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_1_OFFSET))(invChar, nextChar, exceptionType);
		}

		static ::System::Exception* CreateInvalidNameCharException(::System::String* name, ::System::Int32 index, ::System::Xml::ExceptionType exceptionType)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDNAMECHAREXCEPTION_OFFSET))(name, index, exceptionType);
		}

		static ::System::ArgumentException* CreateInvalidNameArgumentException(::System::String* name, ::System::String* argumentName)
		{
			return ((::System::ArgumentException*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDNAMEARGUMENTEXCEPTION_OFFSET))(name, argumentName);
		}
	};
}
