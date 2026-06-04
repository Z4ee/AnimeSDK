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

#define SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_1_OFFSET UNITYSDK_OFFSET(0x1873B280)
#define SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_OFFSET UNITYSDK_OFFSET(0x1873AF50)
#define SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_1_OFFSET UNITYSDK_OFFSET(0x1873DD20)
#define SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_OFFSET UNITYSDK_OFFSET(0x1873F400)
#define SYSTEM_NUMBERFORMATTER_APPENDDIGITS_1_OFFSET UNITYSDK_OFFSET(0x18740790)
#define SYSTEM_NUMBERFORMATTER_APPENDDIGITS_OFFSET UNITYSDK_OFFSET(0x1873DD40)
#define SYSTEM_NUMBERFORMATTER_APPENDEXPONENT_OFFSET UNITYSDK_OFFSET(0x1873E400)
#define SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRINGWITHGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1873DA90)
#define SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_1_OFFSET UNITYSDK_OFFSET(0x1873DFB0)
#define SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_OFFSET UNITYSDK_OFFSET(0x1873F380)
#define SYSTEM_NUMBERFORMATTER_APPENDNONNEGATIVENUMBER_OFFSET UNITYSDK_OFFSET(0x1873F120)
#define SYSTEM_NUMBERFORMATTER_APPENDONEDIGIT_OFFSET UNITYSDK_OFFSET(0x1873E360)
#define SYSTEM_NUMBERFORMATTER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1873AB30)
#define SYSTEM_NUMBERFORMATTER_APPEND_2_OFFSET UNITYSDK_OFFSET(0x1873AC40)
#define SYSTEM_NUMBERFORMATTER_APPEND_OFFSET UNITYSDK_OFFSET(0x1873AAC0)
#define SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_1_OFFSET UNITYSDK_OFFSET(0x1873B310)
#define SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x1873A7F0)
#define SYSTEM_NUMBERFORMATTER_DECHEXLEN_1_OFFSET UNITYSDK_OFFSET(0x18739E60)
#define SYSTEM_NUMBERFORMATTER_DECHEXLEN_OFFSET UNITYSDK_OFFSET(0x18739E00)
#define SYSTEM_NUMBERFORMATTER_DIVIDE10_OFFSET UNITYSDK_OFFSET(0x1873F110)
#define SYSTEM_NUMBERFORMATTER_FASTDECHEXLEN_OFFSET UNITYSDK_OFFSET(0x18739DD0)
#define SYSTEM_NUMBERFORMATTER_FASTTODECHEX_OFFSET UNITYSDK_OFFSET(0x18739780)
#define SYSTEM_NUMBERFORMATTER_FORMATCURRENCY_OFFSET UNITYSDK_OFFSET(0x1873BF80)
#define SYSTEM_NUMBERFORMATTER_FORMATCUSTOM_OFFSET UNITYSDK_OFFSET(0x1873D280)
#define SYSTEM_NUMBERFORMATTER_FORMATDECIMAL_OFFSET UNITYSDK_OFFSET(0x1873C860)
#define SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_1_OFFSET UNITYSDK_OFFSET(0x1873E270)
#define SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_OFFSET UNITYSDK_OFFSET(0x1873C900)
#define SYSTEM_NUMBERFORMATTER_FORMATFIXEDPOINT_OFFSET UNITYSDK_OFFSET(0x1873C940)
#define SYSTEM_NUMBERFORMATTER_FORMATGENERAL_OFFSET UNITYSDK_OFFSET(0x1873CA40)
#define SYSTEM_NUMBERFORMATTER_FORMATHEXADECIMAL_OFFSET UNITYSDK_OFFSET(0x1873D160)
#define SYSTEM_NUMBERFORMATTER_FORMATNUMBER_OFFSET UNITYSDK_OFFSET(0x1873CC10)
#define SYSTEM_NUMBERFORMATTER_FORMATPERCENT_OFFSET UNITYSDK_OFFSET(0x1873CF30)
#define SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_1_OFFSET UNITYSDK_OFFSET(0x1873B920)
#define SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_OFFSET UNITYSDK_OFFSET(0x1873BD30)
#define SYSTEM_NUMBERFORMATTER_GETCLONE_OFFSET UNITYSDK_OFFSET(0x1873E1B0)
#define SYSTEM_NUMBERFORMATTER_GETFORMATTERTABLES_OFFSET UNITYSDK_OFFSET(0x187395D0)
#define SYSTEM_NUMBERFORMATTER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1873B360)
#define SYSTEM_NUMBERFORMATTER_GETNUMBERFORMATINSTANCE_OFFSET UNITYSDK_OFFSET(0x1873AD50)
#define SYSTEM_NUMBERFORMATTER_GETTENPOWEROF_OFFSET UNITYSDK_OFFSET(0x18739680)
#define SYSTEM_NUMBERFORMATTER_GET_DECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x1873AD80)
#define SYSTEM_NUMBERFORMATTER_GET_INTEGERDIGITS_OFFSET UNITYSDK_OFFSET(0x1873AD70)
#define SYSTEM_NUMBERFORMATTER_GET_ISFLOATINGSOURCE_OFFSET UNITYSDK_OFFSET(0x1873AD90)
#define SYSTEM_NUMBERFORMATTER_GET_ISZEROINTEGER_OFFSET UNITYSDK_OFFSET(0x1873ADB0)
#define SYSTEM_NUMBERFORMATTER_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x1873ADA0)
#define SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_1_OFFSET UNITYSDK_OFFSET(0x18739870)
#define SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_2_OFFSET UNITYSDK_OFFSET(0x18739A80)
#define SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_OFFSET UNITYSDK_OFFSET(0x18739690)
#define SYSTEM_NUMBERFORMATTER_INITHEX_OFFSET UNITYSDK_OFFSET(0x1873A380)
#define SYSTEM_NUMBERFORMATTER_INITIALFLOATINGPRECISION_OFFSET UNITYSDK_OFFSET(0x1873A0F0)
#define SYSTEM_NUMBERFORMATTER_INIT_1_OFFSET UNITYSDK_OFFSET(0x1873A3C0)
#define SYSTEM_NUMBERFORMATTER_INIT_2_OFFSET UNITYSDK_OFFSET(0x1873A440)
#define SYSTEM_NUMBERFORMATTER_INIT_3_OFFSET UNITYSDK_OFFSET(0x1873A4B0)
#define SYSTEM_NUMBERFORMATTER_INIT_4_OFFSET UNITYSDK_OFFSET(0x1873A530)
#define SYSTEM_NUMBERFORMATTER_INIT_5_OFFSET UNITYSDK_OFFSET(0x1873A5B0)
#define SYSTEM_NUMBERFORMATTER_INIT_6_OFFSET UNITYSDK_OFFSET(0x1873A940)
#define SYSTEM_NUMBERFORMATTER_INIT_OFFSET UNITYSDK_OFFSET(0x1873A240)
#define SYSTEM_NUMBERFORMATTER_INTEGERTOSTRING_OFFSET UNITYSDK_OFFSET(0x1873B640)
#define SYSTEM_NUMBERFORMATTER_ISZEROONLY_OFFSET UNITYSDK_OFFSET(0x1873F420)
#define SYSTEM_NUMBERFORMATTER_MULTIPLY10_OFFSET UNITYSDK_OFFSET(0x1873E350)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1873B800)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_2_OFFSET UNITYSDK_OFFSET(0x18734A80)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_3_OFFSET UNITYSDK_OFFSET(0x18734940)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_4_OFFSET UNITYSDK_OFFSET(0x18734BC0)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1873BBB0)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1873BE90)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1873BA50)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_OFFSET UNITYSDK_OFFSET(0x18734810)
#define SYSTEM_NUMBERFORMATTER_PARSEPRECISION_OFFSET UNITYSDK_OFFSET(0x1873A130)
#define SYSTEM_NUMBERFORMATTER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1873B5B0)
#define SYSTEM_NUMBERFORMATTER_REMOVETRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x1873B250)
#define SYSTEM_NUMBERFORMATTER_RESETCHARBUF_OFFSET UNITYSDK_OFFSET(0x1873AA70)
#define SYSTEM_NUMBERFORMATTER_RESIZE_OFFSET UNITYSDK_OFFSET(0x1873AAB0)
#define SYSTEM_NUMBERFORMATTER_ROUNDBITS_OFFSET UNITYSDK_OFFSET(0x1873ADE0)
#define SYSTEM_NUMBERFORMATTER_ROUNDDECIMAL_OFFSET UNITYSDK_OFFSET(0x1873AF40)
#define SYSTEM_NUMBERFORMATTER_ROUNDPOS_OFFSET UNITYSDK_OFFSET(0x1873ADD0)
#define SYSTEM_NUMBERFORMATTER_SCALEORDER_OFFSET UNITYSDK_OFFSET(0x18739FF0)
#define SYSTEM_NUMBERFORMATTER_SET_CURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1873A210)
#define SYSTEM_NUMBERFORMATTER_TODECHEX_OFFSET UNITYSDK_OFFSET(0x187397C0)
#define SYSTEM_NUMBERFORMATTER_ZEROTRIMEND_OFFSET UNITYSDK_OFFSET(0x1873F500)
#define SYSTEM_NUMBERFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18739620)
#define SYSTEM_NUMBERFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1873A190)

namespace System
{
	inline static constexpr unsigned int NumberFormatter_TypeDefinitionIndex = 411;

	class NumberFormatter : public ::System::Object
	{
	public:
		static ::System::UInt64** StaticGet_MantissaBitsTable()
		{
			return (::System::UInt64**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3960);
		}
		static ::System::Int32** StaticGet_DecHexDigits()
		{
			return (::System::Int32**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3968);
		}
		static ::System::Char** StaticGet_DigitLowerTable()
		{
			return (::System::Char**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3970);
		}
		static ::System::Int32** StaticGet_TensExponentTable()
		{
			return (::System::Int32**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3978);
		}
		static ::System::Int64** StaticGet_TenPowersList()
		{
			return (::System::Int64**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3980);
		}
		static ::System::Char** StaticGet_DigitUpperTable()
		{
			return (::System::Char**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x3988);
		}
		static ::System::NumberFormatter** StaticGet_threadNumberFormatter()
		{
			return (::System::NumberFormatter**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::NumberFormatter** StaticGet_userFormatProvider()
		{
			return (::System::NumberFormatter**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Globalization::NumberFormatInfo* _nfi; // 0x10
		::Il2CppArray<::System::Char>* _cbuf; // 0x18
		::System::Int32 _ind; // 0x20
		::System::Boolean _specifierIsUpper; // 0x24
		::System::Char _specifier; // 0x26
		::System::Int32 _digitsLen; // 0x28
		::System::UInt32 _val2; // 0x2C
		::System::UInt32 _val3; // 0x30
		::System::Int32 _offset; // 0x34
		::System::Boolean _infinity; // 0x38
		::System::Boolean _NaN; // 0x39
		::System::Boolean _positive; // 0x3A
		::System::Boolean _isCustomFormat; // 0x3B
		::System::Int32 _precision; // 0x3C
		::System::Int32 _defPrecision; // 0x40
		::System::UInt32 _val1; // 0x44
		::System::UInt32 _val4; // 0x48
		::System::Int32 _decPointPos; // 0x4C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Threading::Thread* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Thread*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void GetFormatterTables(::System::UInt64*& a1, ::System::Int32*& a2, ::System::Char*& a3, ::System::Char*& a4, ::System::Int64*& a5, ::System::Int32*& a6)
		{
			return ((::System::Void(*)(::System::UInt64*&, ::System::Int32*&, ::System::Char*&, ::System::Char*&, ::System::Int64*&, ::System::Int32*&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETFORMATTERTABLES_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int64 GetTenPowerOf(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETTENPOWEROF_OFFSET))(a1);
		}

		::System::Void InitDecHexDigits(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_OFFSET))(this, a1);
		}

		::System::Void InitDecHexDigits_1(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_1_OFFSET))(this, a1);
		}

		::System::Void InitDecHexDigits_2(::System::UInt32 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_2_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 FastToDecHex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FASTTODECHEX_OFFSET))(a1);
		}

		static ::System::UInt32 ToDecHex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_TODECHEX_OFFSET))(a1);
		}

		static ::System::Int32 FastDecHexLen(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FASTDECHEXLEN_OFFSET))(a1);
		}

		static ::System::Int32 DecHexLen(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_DECHEXLEN_OFFSET))(a1);
		}

		::System::Int32 DecHexLen_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_DECHEXLEN_1_OFFSET))(this);
		}

		static ::System::Int32 ScaleOrder(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_SCALEORDER_OFFSET))(a1);
		}

		::System::Int32 InitialFloatingPrecision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITIALFLOATINGPRECISION_OFFSET))(this);
		}

		static ::System::Int32 ParsePrecision(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_PARSEPRECISION_OFFSET))(a1);
		}

		::System::Void Init(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_OFFSET))(this, a1);
		}

		::System::Void InitHex(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITHEX_OFFSET))(this, a1);
		}

		::System::Void Init_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Init_2(::System::String* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Init_3(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_3_OFFSET))(this, a1, a2);
		}

		::System::Void Init_4(::System::String* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_4_OFFSET))(this, a1, a2);
		}

		::System::Void Init_5(::System::String* a1, ::System::Double a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Init_6(::System::String* a1, ::System::Decimal a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_6_OFFSET))(this, a1, a2);
		}

		::System::Void ResetCharBuf(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_RESETCHARBUF_OFFSET))(this, a1);
		}

		::System::Void Resize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_RESIZE_OFFSET))(this, a1);
		}

		::System::Void Append(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPEND_OFFSET))(this, a1);
		}

		::System::Void Append_1(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPEND_1_OFFSET))(this, a1, a2);
		}

		::System::Void Append_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPEND_2_OFFSET))(this, a1);
		}

		::System::Globalization::NumberFormatInfo* GetNumberFormatInstance(::System::IFormatProvider* a1)
		{
			return ((::System::Globalization::NumberFormatInfo*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETNUMBERFORMATINSTANCE_OFFSET))(this, a1);
		}

		::System::Void set_CurrentCulture(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_SET_CURRENTCULTURE_OFFSET))(this, a1);
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

		::System::Void RoundPos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ROUNDPOS_OFFSET))(this, a1);
		}

		::System::Boolean RoundDecimal(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ROUNDDECIMAL_OFFSET))(this, a1);
		}

		::System::Boolean RoundBits(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ROUNDBITS_OFFSET))(this, a1);
		}

		::System::Void RemoveTrailingZeros()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_REMOVETRAILINGZEROS_OFFSET))(this);
		}

		::System::Void AddOneToDecHex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_OFFSET))(this);
		}

		static ::System::UInt32 AddOneToDecHex_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_1_OFFSET))(a1);
		}

		::System::Int32 CountTrailingZeros()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_OFFSET))(this);
		}

		static ::System::Int32 CountTrailingZeros_1(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_1_OFFSET))(a1);
		}

		static ::System::NumberFormatter* GetInstance(::System::IFormatProvider* a1)
		{
			return ((::System::NumberFormatter*(*)(::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETINSTANCE_OFFSET))(a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_RELEASE_OFFSET))(this);
		}

		static ::System::String* NumberToString(::System::String* a1, ::System::UInt32 a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_1(::System::String* a1, ::System::Int32 a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_2(::System::String* a1, ::System::UInt64 a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_2_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_3(::System::String* a1, ::System::Int64 a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_3_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_4(::System::String* a1, ::System::Single a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Single, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_4_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_5(::System::String* a1, ::System::Double a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Double, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_5_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_6(::System::String* a1, ::System::Decimal a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Decimal, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_6_OFFSET))(a1, a2, a3);
		}

		::System::String* IntegerToString(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INTEGERTOSTRING_OFFSET))(this, a1, a2);
		}

		::System::String* NumberToString_7(::System::String* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_7_OFFSET))(this, a1, a2);
		}

		::System::String* FormatCurrency(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATCURRENCY_OFFSET))(this, a1, a2);
		}

		::System::String* FormatDecimal(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATDECIMAL_OFFSET))(this, a1, a2);
		}

		::System::String* FormatHexadecimal(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATHEXADECIMAL_OFFSET))(this, a1);
		}

		::System::String* FormatFixedPoint(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATFIXEDPOINT_OFFSET))(this, a1, a2);
		}

		::System::String* FormatRoundtrip(::System::Double a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_OFFSET))(this, a1, a2);
		}

		::System::String* FormatRoundtrip_1(::System::Single a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_1_OFFSET))(this, a1, a2);
		}

		::System::String* FormatGeneral(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATGENERAL_OFFSET))(this, a1, a2);
		}

		::System::String* FormatNumber(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATNUMBER_OFFSET))(this, a1, a2);
		}

		::System::String* FormatPercent(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATPERCENT_OFFSET))(this, a1, a2);
		}

		::System::String* FormatExponential(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_OFFSET))(this, a1, a2);
		}

		::System::String* FormatExponential_1(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* FormatCustom(::System::String* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATCUSTOM_OFFSET))(this, a1, a2);
		}

		static ::System::Void ZeroTrimEnd(::System::Text::StringBuilder* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ZEROTRIMEND_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsZeroOnly(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ISZEROONLY_OFFSET))(a1);
		}

		static ::System::Void AppendNonNegativeNumber(::System::Text::StringBuilder* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDNONNEGATIVENUMBER_OFFSET))(a1, a2);
		}

		::System::Void AppendIntegerString(::System::Int32 a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void AppendIntegerString_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_1_OFFSET))(this, a1);
		}

		::System::Void AppendDecimalString(::System::Int32 a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void AppendDecimalString_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_1_OFFSET))(this, a1);
		}

		::System::Void AppendIntegerStringWithGroupSeparator(::Il2CppArray<::System::Int32>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRINGWITHGROUPSEPARATOR_OFFSET))(this, a1, a2);
		}

		::System::Void AppendExponent(::System::Globalization::NumberFormatInfo* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::NumberFormatInfo*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDEXPONENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AppendOneDigit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDONEDIGIT_OFFSET))(this, a1);
		}

		::System::Void AppendDigits(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDIGITS_OFFSET))(this, a1, a2);
		}

		::System::Void AppendDigits_1(::System::Int32 a1, ::System::Int32 a2, ::System::Text::StringBuilder* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDIGITS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Multiply10(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_MULTIPLY10_OFFSET))(this, a1);
		}

		::System::Void Divide10(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_DIVIDE10_OFFSET))(this, a1);
		}

		::System::NumberFormatter* GetClone()
		{
			return ((::System::NumberFormatter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETCLONE_OFFSET))(this);
		}
	};
}
