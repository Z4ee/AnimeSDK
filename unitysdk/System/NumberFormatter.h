#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Text { class StringBuilder; }
namespace System::Threading { class Thread; }

#define SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_1_OFFSET UNITYSDK_OFFSET(0x17989950)
#define SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_OFFSET UNITYSDK_OFFSET(0x17989620)
#define SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_1_OFFSET UNITYSDK_OFFSET(0x1798C770)
#define SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_OFFSET UNITYSDK_OFFSET(0x1798DB10)
#define SYSTEM_NUMBERFORMATTER_APPENDDIGITS_1_OFFSET UNITYSDK_OFFSET(0x1798E920)
#define SYSTEM_NUMBERFORMATTER_APPENDDIGITS_OFFSET UNITYSDK_OFFSET(0x1798C790)
#define SYSTEM_NUMBERFORMATTER_APPENDEXPONENT_OFFSET UNITYSDK_OFFSET(0x1798CD30)
#define SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRINGWITHGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1798C4A0)
#define SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_1_OFFSET UNITYSDK_OFFSET(0x1798CA80)
#define SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_OFFSET UNITYSDK_OFFSET(0x1798DA90)
#define SYSTEM_NUMBERFORMATTER_APPENDNONNEGATIVENUMBER_OFFSET UNITYSDK_OFFSET(0x1798D9D0)
#define SYSTEM_NUMBERFORMATTER_APPENDONEDIGIT_OFFSET UNITYSDK_OFFSET(0x1798CC80)
#define SYSTEM_NUMBERFORMATTER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x179891F0)
#define SYSTEM_NUMBERFORMATTER_APPEND_2_OFFSET UNITYSDK_OFFSET(0x17989310)
#define SYSTEM_NUMBERFORMATTER_APPEND_OFFSET UNITYSDK_OFFSET(0x17989170)
#define SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_1_OFFSET UNITYSDK_OFFSET(0x179899E0)
#define SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x17988EC0)
#define SYSTEM_NUMBERFORMATTER_DECHEXLEN_1_OFFSET UNITYSDK_OFFSET(0x17988520)
#define SYSTEM_NUMBERFORMATTER_DECHEXLEN_OFFSET UNITYSDK_OFFSET(0x179884C0)
#define SYSTEM_NUMBERFORMATTER_DIVIDE10_OFFSET UNITYSDK_OFFSET(0x1798D9C0)
#define SYSTEM_NUMBERFORMATTER_FASTDECHEXLEN_OFFSET UNITYSDK_OFFSET(0x17988490)
#define SYSTEM_NUMBERFORMATTER_FASTTODECHEX_OFFSET UNITYSDK_OFFSET(0x17987E40)
#define SYSTEM_NUMBERFORMATTER_FORMATCURRENCY_OFFSET UNITYSDK_OFFSET(0x1798A8C0)
#define SYSTEM_NUMBERFORMATTER_FORMATCUSTOM_OFFSET UNITYSDK_OFFSET(0x1798BE70)
#define SYSTEM_NUMBERFORMATTER_FORMATDECIMAL_OFFSET UNITYSDK_OFFSET(0x1798B380)
#define SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_1_OFFSET UNITYSDK_OFFSET(0x1798CB90)
#define SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_OFFSET UNITYSDK_OFFSET(0x1798B420)
#define SYSTEM_NUMBERFORMATTER_FORMATFIXEDPOINT_OFFSET UNITYSDK_OFFSET(0x1798B460)
#define SYSTEM_NUMBERFORMATTER_FORMATGENERAL_OFFSET UNITYSDK_OFFSET(0x1798B5A0)
#define SYSTEM_NUMBERFORMATTER_FORMATHEXADECIMAL_OFFSET UNITYSDK_OFFSET(0x1798BD40)
#define SYSTEM_NUMBERFORMATTER_FORMATNUMBER_OFFSET UNITYSDK_OFFSET(0x1798B780)
#define SYSTEM_NUMBERFORMATTER_FORMATPERCENT_OFFSET UNITYSDK_OFFSET(0x1798BAE0)
#define SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_1_OFFSET UNITYSDK_OFFSET(0x1798A250)
#define SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_OFFSET UNITYSDK_OFFSET(0x1798A660)
#define SYSTEM_NUMBERFORMATTER_GETCLONE_OFFSET UNITYSDK_OFFSET(0x1798CAD0)
#define SYSTEM_NUMBERFORMATTER_GETFORMATTERTABLES_OFFSET UNITYSDK_OFFSET(0x17987C90)
#define SYSTEM_NUMBERFORMATTER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x17989A30)
#define SYSTEM_NUMBERFORMATTER_GETNUMBERFORMATINSTANCE_OFFSET UNITYSDK_OFFSET(0x17989420)
#define SYSTEM_NUMBERFORMATTER_GETTENPOWEROF_OFFSET UNITYSDK_OFFSET(0x17987D40)
#define SYSTEM_NUMBERFORMATTER_GET_DECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x17989450)
#define SYSTEM_NUMBERFORMATTER_GET_INTEGERDIGITS_OFFSET UNITYSDK_OFFSET(0x17989440)
#define SYSTEM_NUMBERFORMATTER_GET_ISFLOATINGSOURCE_OFFSET UNITYSDK_OFFSET(0x17989460)
#define SYSTEM_NUMBERFORMATTER_GET_ISZEROINTEGER_OFFSET UNITYSDK_OFFSET(0x17989480)
#define SYSTEM_NUMBERFORMATTER_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x17989470)
#define SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_1_OFFSET UNITYSDK_OFFSET(0x17987F30)
#define SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_2_OFFSET UNITYSDK_OFFSET(0x17988140)
#define SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_OFFSET UNITYSDK_OFFSET(0x17987D50)
#define SYSTEM_NUMBERFORMATTER_INITHEX_OFFSET UNITYSDK_OFFSET(0x17988A50)
#define SYSTEM_NUMBERFORMATTER_INITIALFLOATINGPRECISION_OFFSET UNITYSDK_OFFSET(0x179887B0)
#define SYSTEM_NUMBERFORMATTER_INIT_1_OFFSET UNITYSDK_OFFSET(0x17988A90)
#define SYSTEM_NUMBERFORMATTER_INIT_2_OFFSET UNITYSDK_OFFSET(0x17988B10)
#define SYSTEM_NUMBERFORMATTER_INIT_3_OFFSET UNITYSDK_OFFSET(0x17988B80)
#define SYSTEM_NUMBERFORMATTER_INIT_4_OFFSET UNITYSDK_OFFSET(0x17988C00)
#define SYSTEM_NUMBERFORMATTER_INIT_5_OFFSET UNITYSDK_OFFSET(0x17988C80)
#define SYSTEM_NUMBERFORMATTER_INIT_6_OFFSET UNITYSDK_OFFSET(0x17989010)
#define SYSTEM_NUMBERFORMATTER_INIT_OFFSET UNITYSDK_OFFSET(0x17988900)
#define SYSTEM_NUMBERFORMATTER_INTEGERTOSTRING_OFFSET UNITYSDK_OFFSET(0x17989E30)
#define SYSTEM_NUMBERFORMATTER_ISZEROONLY_OFFSET UNITYSDK_OFFSET(0x1798DB30)
#define SYSTEM_NUMBERFORMATTER_MULTIPLY10_OFFSET UNITYSDK_OFFSET(0x1798CC70)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_1_OFFSET UNITYSDK_OFFSET(0x17989FF0)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_2_OFFSET UNITYSDK_OFFSET(0x179832B0)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1798A120)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_4_OFFSET UNITYSDK_OFFSET(0x179833F0)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1798A4E0)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1798A7C0)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1798A380)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_OFFSET UNITYSDK_OFFSET(0x17989D10)
#define SYSTEM_NUMBERFORMATTER_PARSEPRECISION_OFFSET UNITYSDK_OFFSET(0x179887F0)
#define SYSTEM_NUMBERFORMATTER_RELEASE_OFFSET UNITYSDK_OFFSET(0x17989C80)
#define SYSTEM_NUMBERFORMATTER_REMOVETRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x17989920)
#define SYSTEM_NUMBERFORMATTER_RESETCHARBUF_OFFSET UNITYSDK_OFFSET(0x17989120)
#define SYSTEM_NUMBERFORMATTER_RESIZE_OFFSET UNITYSDK_OFFSET(0x17989160)
#define SYSTEM_NUMBERFORMATTER_ROUNDBITS_OFFSET UNITYSDK_OFFSET(0x179894B0)
#define SYSTEM_NUMBERFORMATTER_ROUNDDECIMAL_OFFSET UNITYSDK_OFFSET(0x17989610)
#define SYSTEM_NUMBERFORMATTER_ROUNDPOS_OFFSET UNITYSDK_OFFSET(0x179894A0)
#define SYSTEM_NUMBERFORMATTER_SCALEORDER_OFFSET UNITYSDK_OFFSET(0x179886B0)
#define SYSTEM_NUMBERFORMATTER_SET_CURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x179888D0)
#define SYSTEM_NUMBERFORMATTER_TODECHEX_OFFSET UNITYSDK_OFFSET(0x17987E80)
#define SYSTEM_NUMBERFORMATTER_ZEROTRIMEND_OFFSET UNITYSDK_OFFSET(0x1798DC10)
#define SYSTEM_NUMBERFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17987CE0)
#define SYSTEM_NUMBERFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17988850)

namespace System
{
	inline static constexpr unsigned int NumberFormatter_TypeDefinitionIndex = 412;

	class NumberFormatter : public ::System::Object
	{
	public:
		static ::System::Char** StaticGet_DigitUpperTable()
		{
			return (::System::Char**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3BB0);
		}
		static ::System::Char** StaticGet_DigitLowerTable()
		{
			return (::System::Char**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3BB8);
		}
		static ::System::UInt64** StaticGet_MantissaBitsTable()
		{
			return (::System::UInt64**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3BC0);
		}
		static ::System::Int64** StaticGet_TenPowersList()
		{
			return (::System::Int64**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3BC8);
		}
		static ::System::Int32** StaticGet_DecHexDigits()
		{
			return (::System::Int32**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3BD0);
		}
		static ::System::Int32** StaticGet_TensExponentTable()
		{
			return (::System::Int32**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3BD8);
		}
		static ::System::NumberFormatter** StaticGet_threadNumberFormatter()
		{
			return (::System::NumberFormatter**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::NumberFormatter** StaticGet_userFormatProvider()
		{
			return (::System::NumberFormatter**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::System::Char>* _cbuf; // 0x10
		::System::Globalization::NumberFormatInfo* _nfi; // 0x18
		::System::Int32 _decPointPos; // 0x20
		::System::UInt32 _val1; // 0x24
		::System::Int32 _defPrecision; // 0x28
		::System::UInt32 _val3; // 0x2C
		::System::Int32 _ind; // 0x30
		::System::UInt32 _val4; // 0x34
		::System::Int32 _precision; // 0x38
		::System::Boolean _isCustomFormat; // 0x3C
		::System::Boolean _NaN; // 0x3D
		::System::Boolean _infinity; // 0x3E
		::System::UInt32 _val2; // 0x40
		::System::Int32 _digitsLen; // 0x44
		::System::Boolean _positive; // 0x48
		::System::Boolean _specifierIsUpper; // 0x49
		::System::Char _specifier; // 0x4A
		::System::Int32 _offset; // 0x4C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Threading::Thread* current)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Thread*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER__CTOR_OFFSET))(this, current);
		}

		static ::System::Void GetFormatterTables(::System::UInt64*& MantissaBitsTable, ::System::Int32*& TensExponentTable, ::System::Char*& DigitLowerTable, ::System::Char*& DigitUpperTable, ::System::Int64*& TenPowersList, ::System::Int32*& DecHexDigits)
		{
			return ((::System::Void(*)(::System::UInt64*&, ::System::Int32*&, ::System::Char*&, ::System::Char*&, ::System::Int64*&, ::System::Int32*&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETFORMATTERTABLES_OFFSET))(MantissaBitsTable, TensExponentTable, DigitLowerTable, DigitUpperTable, TenPowersList, DecHexDigits);
		}

		static ::System::Int64 GetTenPowerOf(::System::Int32 i)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETTENPOWEROF_OFFSET))(i);
		}

		::System::Void InitDecHexDigits(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_OFFSET))(this, value);
		}

		::System::Void InitDecHexDigits_1(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_1_OFFSET))(this, value);
		}

		::System::Void InitDecHexDigits_2(::System::UInt32 hi, ::System::UInt64 lo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_2_OFFSET))(this, hi, lo);
		}

		static ::System::UInt32 FastToDecHex(::System::Int32 val)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FASTTODECHEX_OFFSET))(val);
		}

		static ::System::UInt32 ToDecHex(::System::Int32 val)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_TODECHEX_OFFSET))(val);
		}

		static ::System::Int32 FastDecHexLen(::System::Int32 val)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FASTDECHEXLEN_OFFSET))(val);
		}

		static ::System::Int32 DecHexLen(::System::UInt32 val)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_DECHEXLEN_OFFSET))(val);
		}

		::System::Int32 DecHexLen_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_DECHEXLEN_1_OFFSET))(this);
		}

		static ::System::Int32 ScaleOrder(::System::Int64 hi)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_SCALEORDER_OFFSET))(hi);
		}

		::System::Int32 InitialFloatingPrecision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITIALFLOATINGPRECISION_OFFSET))(this);
		}

		static ::System::Int32 ParsePrecision(::System::String* format)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_PARSEPRECISION_OFFSET))(format);
		}

		::System::Void Init(::System::String* format)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_OFFSET))(this, format);
		}

		::System::Void InitHex(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITHEX_OFFSET))(this, value);
		}

		::System::Void Init_1(::System::String* format, ::System::Int32 value, ::System::Int32 defPrecision)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_1_OFFSET))(this, format, value, defPrecision);
		}

		::System::Void Init_2(::System::String* format, ::System::UInt32 value, ::System::Int32 defPrecision)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_2_OFFSET))(this, format, value, defPrecision);
		}

		::System::Void Init_3(::System::String* format, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_3_OFFSET))(this, format, value);
		}

		::System::Void Init_4(::System::String* format, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_4_OFFSET))(this, format, value);
		}

		::System::Void Init_5(::System::String* format, ::System::Double value, ::System::Int32 defPrecision)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_5_OFFSET))(this, format, value, defPrecision);
		}

		::System::Void Init_6(::System::String* format, ::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_6_OFFSET))(this, format, value);
		}

		::System::Void ResetCharBuf(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_RESETCHARBUF_OFFSET))(this, size);
		}

		::System::Void Resize(::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_RESIZE_OFFSET))(this, len);
		}

		::System::Void Append(::System::Char c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPEND_OFFSET))(this, c);
		}

		::System::Void Append_1(::System::Char c, ::System::Int32 cnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPEND_1_OFFSET))(this, c, cnt);
		}

		::System::Void Append_2(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPEND_2_OFFSET))(this, s);
		}

		::System::Globalization::NumberFormatInfo* GetNumberFormatInstance(::System::IFormatProvider* fp)
		{
			return ((::System::Globalization::NumberFormatInfo*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETNUMBERFORMATINSTANCE_OFFSET))(this, fp);
		}

		::System::Void set_CurrentCulture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_SET_CURRENTCULTURE_OFFSET))(this, value);
		}

		::System::Int32 get_IntegerDigits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GET_INTEGERDIGITS_OFFSET))(this);
		}

		::System::Int32 get_DecimalDigits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GET_DECIMALDIGITS_OFFSET))(this);
		}

		::System::Boolean get_IsFloatingSource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GET_ISFLOATINGSOURCE_OFFSET))(this);
		}

		::System::Boolean get_IsZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GET_ISZERO_OFFSET))(this);
		}

		::System::Boolean get_IsZeroInteger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GET_ISZEROINTEGER_OFFSET))(this);
		}

		::System::Void RoundPos(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ROUNDPOS_OFFSET))(this, pos);
		}

		::System::Boolean RoundDecimal(::System::Int32 decimals)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ROUNDDECIMAL_OFFSET))(this, decimals);
		}

		::System::Boolean RoundBits(::System::Int32 shift)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ROUNDBITS_OFFSET))(this, shift);
		}

		::System::Void RemoveTrailingZeros()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_REMOVETRAILINGZEROS_OFFSET))(this);
		}

		::System::Void AddOneToDecHex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_OFFSET))(this);
		}

		static ::System::UInt32 AddOneToDecHex_1(::System::UInt32 val)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_1_OFFSET))(val);
		}

		::System::Int32 CountTrailingZeros()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_OFFSET))(this);
		}

		static ::System::Int32 CountTrailingZeros_1(::System::UInt32 val)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_1_OFFSET))(val);
		}

		static ::System::NumberFormatter* GetInstance(::System::IFormatProvider* fp)
		{
			return ((::System::NumberFormatter*(*)(::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETINSTANCE_OFFSET))(fp);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_RELEASE_OFFSET))(this);
		}

		static ::System::String* NumberToString(::System::String* format, ::System::UInt32 value, ::System::IFormatProvider* fp)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_OFFSET))(format, value, fp);
		}

		static ::System::String* NumberToString_1(::System::String* format, ::System::Int32 value, ::System::IFormatProvider* fp)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_1_OFFSET))(format, value, fp);
		}

		static ::System::String* NumberToString_2(::System::String* format, ::System::UInt64 value, ::System::IFormatProvider* fp)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_2_OFFSET))(format, value, fp);
		}

		static ::System::String* NumberToString_3(::System::String* format, ::System::Int64 value, ::System::IFormatProvider* fp)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_3_OFFSET))(format, value, fp);
		}

		static ::System::String* NumberToString_4(::System::String* format, ::System::Single value, ::System::IFormatProvider* fp)
		{
			return ((::System::String*(*)(::System::String*, ::System::Single, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_4_OFFSET))(format, value, fp);
		}

		static ::System::String* NumberToString_5(::System::String* format, ::System::Double value, ::System::IFormatProvider* fp)
		{
			return ((::System::String*(*)(::System::String*, ::System::Double, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_5_OFFSET))(format, value, fp);
		}

		static ::System::String* NumberToString_6(::System::String* format, ::System::Decimal value, ::System::IFormatProvider* fp)
		{
			return ((::System::String*(*)(::System::String*, ::System::Decimal, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_6_OFFSET))(format, value, fp);
		}

		::System::String* IntegerToString(::System::String* format, ::System::IFormatProvider* fp)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INTEGERTOSTRING_OFFSET))(this, format, fp);
		}

		::System::String* NumberToString_7(::System::String* format, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_7_OFFSET))(this, format, nfi);
		}

		::System::String* FormatCurrency(::System::Int32 precision, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATCURRENCY_OFFSET))(this, precision, nfi);
		}

		::System::String* FormatDecimal(::System::Int32 precision, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATDECIMAL_OFFSET))(this, precision, nfi);
		}

		::System::String* FormatHexadecimal(::System::Int32 precision)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATHEXADECIMAL_OFFSET))(this, precision);
		}

		::System::String* FormatFixedPoint(::System::Int32 precision, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATFIXEDPOINT_OFFSET))(this, precision, nfi);
		}

		::System::String* FormatRoundtrip(::System::Double origval, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_OFFSET))(this, origval, nfi);
		}

		::System::String* FormatRoundtrip_1(::System::Single origval, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_1_OFFSET))(this, origval, nfi);
		}

		::System::String* FormatGeneral(::System::Int32 precision, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATGENERAL_OFFSET))(this, precision, nfi);
		}

		::System::String* FormatNumber(::System::Int32 precision, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATNUMBER_OFFSET))(this, precision, nfi);
		}

		::System::String* FormatPercent(::System::Int32 precision, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATPERCENT_OFFSET))(this, precision, nfi);
		}

		::System::String* FormatExponential(::System::Int32 precision, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_OFFSET))(this, precision, nfi);
		}

		::System::String* FormatExponential_1(::System::Int32 precision, ::System::Globalization::NumberFormatInfo* nfi, ::System::Int32 expDigits)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_1_OFFSET))(this, precision, nfi, expDigits);
		}

		::System::String* FormatCustom(::System::String* format, ::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATCUSTOM_OFFSET))(this, format, nfi);
		}

		static ::System::Void ZeroTrimEnd(::System::Text::StringBuilder* sb, ::System::Boolean canEmpty)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ZEROTRIMEND_OFFSET))(sb, canEmpty);
		}

		static ::System::Boolean IsZeroOnly(::System::Text::StringBuilder* sb)
		{
			return ((::System::Boolean(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ISZEROONLY_OFFSET))(sb);
		}

		static ::System::Void AppendNonNegativeNumber(::System::Text::StringBuilder* sb, ::System::Int32 v)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDNONNEGATIVENUMBER_OFFSET))(sb, v);
		}

		::System::Void AppendIntegerString(::System::Int32 minLength, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_OFFSET))(this, minLength, sb);
		}

		::System::Void AppendIntegerString_1(::System::Int32 minLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_1_OFFSET))(this, minLength);
		}

		::System::Void AppendDecimalString(::System::Int32 precision, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_OFFSET))(this, precision, sb);
		}

		::System::Void AppendDecimalString_1(::System::Int32 precision)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_1_OFFSET))(this, precision);
		}

		::System::Void AppendIntegerStringWithGroupSeparator(::Il2CppArray<::System::Int32>* groups, ::System::String* groupSeparator)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRINGWITHGROUPSEPARATOR_OFFSET))(this, groups, groupSeparator);
		}

		::System::Void AppendExponent(::System::Globalization::NumberFormatInfo* nfi, ::System::Int32 exponent, ::System::Int32 minDigits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::NumberFormatInfo*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDEXPONENT_OFFSET))(this, nfi, exponent, minDigits);
		}

		::System::Void AppendOneDigit(::System::Int32 start)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDONEDIGIT_OFFSET))(this, start);
		}

		::System::Void AppendDigits(::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDIGITS_OFFSET))(this, start, end);
		}

		::System::Void AppendDigits_1(::System::Int32 start, ::System::Int32 end, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDIGITS_1_OFFSET))(this, start, end, sb);
		}

		::System::Void Multiply10(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_MULTIPLY10_OFFSET))(this, count);
		}

		::System::Void Divide10(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_DIVIDE10_OFFSET))(this, count);
		}

		::System::NumberFormatter* GetClone()
		{
			return ((::System::NumberFormatter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETCLONE_OFFSET))(this);
		}
	};
}
