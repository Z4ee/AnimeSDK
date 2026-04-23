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

#define SYSTEM_XML_XMLCONVERT_CREATEALLDATETIMEFORMATS_OFFSET UNITYSDK_OFFSET(0x1A03ED90)
#define SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A040200)
#define SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1A03ACA0)
#define SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A040030)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A040C40)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A040A20)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A040880)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1A040980)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDHIGHSURROGATECHAREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A040820)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDNAMEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A040CB0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDNAMECHAREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A03A760)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A0404D0)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1A040540)
#define SYSTEM_XML_XMLCONVERT_CREATEINVALIDSURROGATEPAIREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A040410)
#define SYSTEM_XML_XMLCONVERT_DECODENAME_OFFSET UNITYSDK_OFFSET(0x1A015870)
#define SYSTEM_XML_XMLCONVERT_DOUBLETOINT64BITS_OFFSET UNITYSDK_OFFSET(0x1A040020)
#define SYSTEM_XML_XMLCONVERT_ENCODELOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A009930)
#define SYSTEM_XML_XMLCONVERT_ENCODENAME_1_OFFSET UNITYSDK_OFFSET(0x1A039660)
#define SYSTEM_XML_XMLCONVERT_ENCODENAME_OFFSET UNITYSDK_OFFSET(0x1A00CCC0)
#define SYSTEM_XML_XMLCONVERT_FROMBINHEXSTRING_1_OFFSET UNITYSDK_OFFSET(0x1A03A530)
#define SYSTEM_XML_XMLCONVERT_FROMBINHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1A03A410)
#define SYSTEM_XML_XMLCONVERT_FROMHEX_OFFSET UNITYSDK_OFFSET(0x1A03A3F0)
#define SYSTEM_XML_XMLCONVERT_GET_ALLDATETIMEFORMATS_OFFSET UNITYSDK_OFFSET(0x1A03ECC0)
#define SYSTEM_XML_XMLCONVERT_ISNEGATIVEZERO_OFFSET UNITYSDK_OFFSET(0x1A03B790)
#define SYSTEM_XML_XMLCONVERT_SPLITSTRING_OFFSET UNITYSDK_OFFSET(0x1A03FFA0)
#define SYSTEM_XML_XMLCONVERT_STREQUAL_OFFSET UNITYSDK_OFFSET(0x1A03FD90)
#define SYSTEM_XML_XMLCONVERT_SWITCHTOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x1A03BDE0)
#define SYSTEM_XML_XMLCONVERT_SWITCHTOUTCTIME_OFFSET UNITYSDK_OFFSET(0x1A03BEA0)
#define SYSTEM_XML_XMLCONVERT_TOBINHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1A03A5F0)
#define SYSTEM_XML_XMLCONVERT_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1A017580)
#define SYSTEM_XML_XMLCONVERT_TOBYTE_OFFSET UNITYSDK_OFFSET(0x1A03D6B0)
#define SYSTEM_XML_XMLCONVERT_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1A03C440)
#define SYSTEM_XML_XMLCONVERT_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x1A03F2B0)
#define SYSTEM_XML_XMLCONVERT_TODATETIME_2_OFFSET UNITYSDK_OFFSET(0x1A03F330)
#define SYSTEM_XML_XMLCONVERT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1A03F1D0)
#define SYSTEM_XML_XMLCONVERT_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1A03C730)
#define SYSTEM_XML_XMLCONVERT_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1A03E680)
#define SYSTEM_XML_XMLCONVERT_TOGUID_OFFSET UNITYSDK_OFFSET(0x1A03F6F0)
#define SYSTEM_XML_XMLCONVERT_TOINT16_OFFSET UNITYSDK_OFFSET(0x1A03CF40)
#define SYSTEM_XML_XMLCONVERT_TOINT32_OFFSET UNITYSDK_OFFSET(0x1A03D1D0)
#define SYSTEM_XML_XMLCONVERT_TOINT64_OFFSET UNITYSDK_OFFSET(0x1A03D440)
#define SYSTEM_XML_XMLCONVERT_TOINTEGER_OFFSET UNITYSDK_OFFSET(0x1A03C9F0)
#define SYSTEM_XML_XMLCONVERT_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x1A03CCB0)
#define SYSTEM_XML_XMLCONVERT_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1A03E0B0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_10_OFFSET UNITYSDK_OFFSET(0x1A03B620)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_11_OFFSET UNITYSDK_OFFSET(0x1A03B810)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_12_OFFSET UNITYSDK_OFFSET(0x1A03B940)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_13_OFFSET UNITYSDK_OFFSET(0x1A03BA40)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_14_OFFSET UNITYSDK_OFFSET(0x1A03BFC0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_15_OFFSET UNITYSDK_OFFSET(0x1A03C000)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1A03B460)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1A03B4A0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1A03B4D0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1A03B500)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1A03B530)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1A03B560)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1A03B590)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x1A03B5C0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x1A03B5F0)
#define SYSTEM_XML_XMLCONVERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A03B440)
#define SYSTEM_XML_XMLCONVERT_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1A03D940)
#define SYSTEM_XML_XMLCONVERT_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1A03DBD0)
#define SYSTEM_XML_XMLCONVERT_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1A03DE40)
#define SYSTEM_XML_XMLCONVERT_TOURI_OFFSET UNITYSDK_OFFSET(0x1A02B300)
#define SYSTEM_XML_XMLCONVERT_TRIMSTRINGEND_OFFSET UNITYSDK_OFFSET(0x1A03FF00)
#define SYSTEM_XML_XMLCONVERT_TRIMSTRINGSTART_OFFSET UNITYSDK_OFFSET(0x1A03FE80)
#define SYSTEM_XML_XMLCONVERT_TRIMSTRING_OFFSET UNITYSDK_OFFSET(0x1A03C010)
#define SYSTEM_XML_XMLCONVERT_TRYTOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1A03C0B0)
#define SYSTEM_XML_XMLCONVERT_TRYTOBYTE_OFFSET UNITYSDK_OFFSET(0x1A03D6E0)
#define SYSTEM_XML_XMLCONVERT_TRYTOCHAR_OFFSET UNITYSDK_OFFSET(0x1A03C4E0)
#define SYSTEM_XML_XMLCONVERT_TRYTODECIMAL_OFFSET UNITYSDK_OFFSET(0x1A03C790)
#define SYSTEM_XML_XMLCONVERT_TRYTODOUBLE_OFFSET UNITYSDK_OFFSET(0x1A03E880)
#define SYSTEM_XML_XMLCONVERT_TRYTOGUID_OFFSET UNITYSDK_OFFSET(0x1A03F710)
#define SYSTEM_XML_XMLCONVERT_TRYTOINT16_OFFSET UNITYSDK_OFFSET(0x1A03CF70)
#define SYSTEM_XML_XMLCONVERT_TRYTOINT32_OFFSET UNITYSDK_OFFSET(0x1A03D200)
#define SYSTEM_XML_XMLCONVERT_TRYTOINT64_OFFSET UNITYSDK_OFFSET(0x1A03D470)
#define SYSTEM_XML_XMLCONVERT_TRYTOINTEGER_OFFSET UNITYSDK_OFFSET(0x1A03CA50)
#define SYSTEM_XML_XMLCONVERT_TRYTOSBYTE_OFFSET UNITYSDK_OFFSET(0x1A03CCE0)
#define SYSTEM_XML_XMLCONVERT_TRYTOSINGLE_OFFSET UNITYSDK_OFFSET(0x1A03E2A0)
#define SYSTEM_XML_XMLCONVERT_TRYTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1A03EC70)
#define SYSTEM_XML_XMLCONVERT_TRYTOUINT16_OFFSET UNITYSDK_OFFSET(0x1A03D970)
#define SYSTEM_XML_XMLCONVERT_TRYTOUINT32_OFFSET UNITYSDK_OFFSET(0x1A03DC00)
#define SYSTEM_XML_XMLCONVERT_TRYTOUINT64_OFFSET UNITYSDK_OFFSET(0x1A03DE70)
#define SYSTEM_XML_XMLCONVERT_TRYTOURI_OFFSET UNITYSDK_OFFSET(0x1A03F8A0)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNAME_OFFSET UNITYSDK_OFFSET(0x1A03A9F0)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNCNAME_OFFSET UNITYSDK_OFFSET(0x1A03AF70)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNMTOKEN_OFFSET UNITYSDK_OFFSET(0x1A03B1D0)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYNORMALIZEDSTRING_OFFSET UNITYSDK_OFFSET(0x1A03B390)
#define SYSTEM_XML_XMLCONVERT_TRYVERIFYTOKEN_OFFSET UNITYSDK_OFFSET(0x1A03B0B0)
#define SYSTEM_XML_XMLCONVERT_VERIFYNAME_OFFSET UNITYSDK_OFFSET(0x1A03A660)
#define SYSTEM_XML_XMLCONVERT_VERIFYNCNAME_1_OFFSET UNITYSDK_OFFSET(0x1A03AE70)
#define SYSTEM_XML_XMLCONVERT_VERIFYNCNAME_OFFSET UNITYSDK_OFFSET(0x1A02B2A0)
#define SYSTEM_XML_XMLCONVERT_VERIFYQNAME_OFFSET UNITYSDK_OFFSET(0x1A03ABC0)
#define SYSTEM_XML_XMLCONVERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A040E10)

namespace System::Xml
{
	inline static constexpr unsigned int XmlConvert_TypeDefinitionIndex = 1932;

	class XmlConvert : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_c_EncodeCharPattern()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0xCD80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_allDateTimeFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0xCD88);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_WhitespaceChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0xCD90);
		}
		static ::System::Xml::XmlCharType* StaticGet_xmlCharType()
		{
			return (::System::Xml::XmlCharType*)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0xCD98);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_c_DecodeCharPattern()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0xCDA0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_crt()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0xCDA8);
		}
		static ::System::Int32* StaticGet_c_EncodedCharLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XmlConvert_TypeDefinitionIndex)->GetStaticField(0x4F70);
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

		static ::System::String* VerifyQName(::System::String* name, ::System::Xml::ExceptionType exceptionType)
		{
			return ((::System::String*(*)(::System::String*, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_VERIFYQNAME_OFFSET))(name, exceptionType);
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

		static ::System::String* ToString_1(::System::Decimal value)
		{
			return ((::System::String*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_1_OFFSET))(value);
		}

		static ::System::String* ToString_2(::System::SByte value)
		{
			return ((::System::String*(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_2_OFFSET))(value);
		}

		static ::System::String* ToString_3(::System::Int16 value)
		{
			return ((::System::String*(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_3_OFFSET))(value);
		}

		static ::System::String* ToString_4(::System::Int32 value)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_4_OFFSET))(value);
		}

		static ::System::String* ToString_5(::System::Int64 value)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_5_OFFSET))(value);
		}

		static ::System::String* ToString_6(::System::Byte value)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_6_OFFSET))(value);
		}

		static ::System::String* ToString_7(::System::UInt16 value)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_7_OFFSET))(value);
		}

		static ::System::String* ToString_8(::System::UInt32 value)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_8_OFFSET))(value);
		}

		static ::System::String* ToString_9(::System::UInt64 value)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_9_OFFSET))(value);
		}

		static ::System::String* ToString_10(::System::Single value)
		{
			return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_10_OFFSET))(value);
		}

		static ::System::String* ToString_11(::System::Double value)
		{
			return ((::System::String*(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_11_OFFSET))(value);
		}

		static ::System::String* ToString_12(::System::TimeSpan value)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_12_OFFSET))(value);
		}

		static ::System::String* ToString_13(::System::DateTime value, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::Xml::XmlDateTimeSerializationMode))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_13_OFFSET))(value, dateTimeOption);
		}

		static ::System::String* ToString_14(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_14_OFFSET))(value);
		}

		static ::System::String* ToString_15(::System::Guid value)
		{
			return ((::System::String*(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TOSTRING_15_OFFSET))(value);
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

		static ::System::String* TrimStringStart(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRIMSTRINGSTART_OFFSET))(value);
		}

		static ::System::String* TrimStringEnd(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_TRIMSTRINGEND_OFFSET))(value);
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

		static ::System::Exception* CreateException(::System::String* res, ::System::String* arg, ::System::Xml::ExceptionType exceptionType, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::String*, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_OFFSET))(res, arg, exceptionType, lineNo, linePos);
		}

		static ::System::Exception* CreateException_1(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Xml::ExceptionType exceptionType)
		{
			return ((::System::Exception*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::ExceptionType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_1_OFFSET))(res, args, exceptionType);
		}

		static ::System::Exception* CreateException_2(::System::String* res, ::Il2CppArray<::System::String*>* args, ::System::Xml::ExceptionType exceptionType, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Exception*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::ExceptionType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEEXCEPTION_2_OFFSET))(res, args, exceptionType, lineNo, linePos);
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

		static ::System::Exception* CreateInvalidCharException(::System::Char invChar, ::System::Char nextChar)
		{
			return ((::System::Exception*(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONVERT_CREATEINVALIDCHAREXCEPTION_OFFSET))(invChar, nextChar);
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
