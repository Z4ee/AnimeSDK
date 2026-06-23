#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/DiyFp.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/DoubleToStringConverter_DtoaMode.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/DoubleToStringConverter_FastDtoaMode.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/DoubleToStringConverter_Flags.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/StringBuilder.h"

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_BIGGESTPOWERTEN_OFFSET UNITYSDK_OFFSET(0x1E50E940)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_CREATEDECIMALREPRESENTATION_OFFSET UNITYSDK_OFFSET(0x1E50F860)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_CREATEEXPONENTIALREPRESENTATION_OFFSET UNITYSDK_OFFSET(0x1E50FD50)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_DIGITGEN_OFFSET UNITYSDK_OFFSET(0x1E50EA70)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_DOUBLETOASCII_OFFSET UNITYSDK_OFFSET(0x1E50F5F0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_FASTDTOA_OFFSET UNITYSDK_OFFSET(0x1E50F360)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1E50E750)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1E50E3C0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GETDECIMALREPBUFFER_OFFSET UNITYSDK_OFFSET(0x1E50DF40)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GETEXPONENTIALREPBUFFER_OFFSET UNITYSDK_OFFSET(0x1E50E0C0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GETTOSTRINGBUFFER_OFFSET UNITYSDK_OFFSET(0x1E50E240)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GRISU3_OFFSET UNITYSDK_OFFSET(0x1E50EF00)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_HANDLESPECIALVALUES_OFFSET UNITYSDK_OFFSET(0x1E50F440)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_ROUNDWEED_OFFSET UNITYSDK_OFFSET(0x1E50E830)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_TOSHORTESTIEEENUMBER_OFFSET UNITYSDK_OFFSET(0x1E50E4A0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5100D0)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int DoubleToStringConverter_TypeDefinitionIndex = 91261;

	class DoubleToStringConverter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_infinity_symbol_()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DoubleToStringConverter_TypeDefinitionIndex)->GetStaticField(0x4F210);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_nan_symbol_()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DoubleToStringConverter_TypeDefinitionIndex)->GetStaticField(0x4F218);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_kSmallPowersOfTen()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DoubleToStringConverter_TypeDefinitionIndex)->GetStaticField(0x4F220);
		}
		static ::System::Int32* StaticGet_decimal_in_shortest_low_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoubleToStringConverter_TypeDefinitionIndex)->GetStaticField(0x12F20);
		}
		static ::Utf8Json::Internal::DoubleConversion::DoubleToStringConverter_Flags* StaticGet_flags_()
		{
			return (::Utf8Json::Internal::DoubleConversion::DoubleToStringConverter_Flags*)Il2CppClass::FromTypeDefinitionIndex(DoubleToStringConverter_TypeDefinitionIndex)->GetStaticField(0x12F24);
		}
		static ::System::Int32* StaticGet_decimal_in_shortest_high_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoubleToStringConverter_TypeDefinitionIndex)->GetStaticField(0x12F28);
		}
		static ::System::Char* StaticGet_exponent_character_()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(DoubleToStringConverter_TypeDefinitionIndex)->GetStaticField(0x12F2C);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_toStringBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DoubleToStringConverter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_decimalRepBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DoubleToStringConverter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_exponentialRepBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DoubleToStringConverter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 kBase10MaximalLength = 0x11; // 0x0
		// static const ::System::Int32 kFastDtoaMaximalLength = 0x11; // 0x0
		// static const ::System::Int32 kFastDtoaMaximalSingleLength = 0x9; // 0x0
		// static const ::System::Int32 kMinimalTargetExponent = 0xFFFFFFC4; // 0x0
		// static const ::System::Int32 kMaximalTargetExponent = 0xFFFFFFE0; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GetDecimalRepBuffer(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GETDECIMALREPBUFFER_OFFSET))(size);
		}

		static ::Il2CppArray<::System::Byte>* GetExponentialRepBuffer(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GETEXPONENTIALREPBUFFER_OFFSET))(size);
		}

		static ::Il2CppArray<::System::Byte>* GetToStringBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GETTOSTRINGBUFFER_OFFSET))();
		}

		static ::System::Int32 GetBytes(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32 offset, ::System::Single value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GETBYTES_OFFSET))(buffer, offset, value);
		}

		static ::System::Int32 GetBytes_1(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32 offset, ::System::Double value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GETBYTES_1_OFFSET))(buffer, offset, value);
		}

		static ::System::Boolean RoundWeed(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 length, ::System::UInt64 distance_too_high_w, ::System::UInt64 unsafe_interval, ::System::UInt64 rest, ::System::UInt64 ten_kappa, ::System::UInt64 unit)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_ROUNDWEED_OFFSET))(buffer, length, distance_too_high_w, unsafe_interval, rest, ten_kappa, unit);
		}

		static ::System::Void BiggestPowerTen(::System::UInt32 number, ::System::Int32 number_bits, ::System::UInt32& power, ::System::Int32& exponent_plus_one)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_BIGGESTPOWERTEN_OFFSET))(number, number_bits, power, exponent_plus_one);
		}

		static ::System::Boolean DigitGen(::Utf8Json::Internal::DoubleConversion::DiyFp low, ::Utf8Json::Internal::DoubleConversion::DiyFp w, ::Utf8Json::Internal::DoubleConversion::DiyFp high, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32& length, ::System::Int32& kappa)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::DiyFp, ::Utf8Json::Internal::DoubleConversion::DiyFp, ::Utf8Json::Internal::DoubleConversion::DiyFp, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_DIGITGEN_OFFSET))(low, w, high, buffer, length, kappa);
		}

		static ::System::Boolean Grisu3(::System::Double v, ::Utf8Json::Internal::DoubleConversion::DoubleToStringConverter_FastDtoaMode mode, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32& length, ::System::Int32& decimal_exponent)
		{
			return ((::System::Boolean(*)(::System::Double, ::Utf8Json::Internal::DoubleConversion::DoubleToStringConverter_FastDtoaMode, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_GRISU3_OFFSET))(v, mode, buffer, length, decimal_exponent);
		}

		static ::System::Boolean FastDtoa(::System::Double v, ::Utf8Json::Internal::DoubleConversion::DoubleToStringConverter_FastDtoaMode mode, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32& length, ::System::Int32& decimal_point)
		{
			return ((::System::Boolean(*)(::System::Double, ::Utf8Json::Internal::DoubleConversion::DoubleToStringConverter_FastDtoaMode, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_FASTDTOA_OFFSET))(v, mode, buffer, length, decimal_point);
		}

		static ::System::Boolean HandleSpecialValues(::System::Double value, ::Utf8Json::Internal::DoubleConversion::StringBuilder& result_builder)
		{
			return ((::System::Boolean(*)(::System::Double, ::Utf8Json::Internal::DoubleConversion::StringBuilder&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_HANDLESPECIALVALUES_OFFSET))(value, result_builder);
		}

		static ::System::Boolean ToShortestIeeeNumber(::System::Double value, ::Utf8Json::Internal::DoubleConversion::StringBuilder& result_builder, ::Utf8Json::Internal::DoubleConversion::DoubleToStringConverter_DtoaMode mode)
		{
			return ((::System::Boolean(*)(::System::Double, ::Utf8Json::Internal::DoubleConversion::StringBuilder&, ::Utf8Json::Internal::DoubleConversion::DoubleToStringConverter_DtoaMode))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_TOSHORTESTIEEENUMBER_OFFSET))(value, result_builder, mode);
		}

		static ::System::Void CreateDecimalRepresentation(::Il2CppArray<::System::Byte>* decimal_digits, ::System::Int32 length, ::System::Int32 decimal_point, ::System::Int32 digits_after_point, ::Utf8Json::Internal::DoubleConversion::StringBuilder& result_builder)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32, ::Utf8Json::Internal::DoubleConversion::StringBuilder&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_CREATEDECIMALREPRESENTATION_OFFSET))(decimal_digits, length, decimal_point, digits_after_point, result_builder);
		}

		static ::System::Void CreateExponentialRepresentation(::Il2CppArray<::System::Byte>* decimal_digits, ::System::Int32 length, ::System::Int32 exponent, ::Utf8Json::Internal::DoubleConversion::StringBuilder& result_builder)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Utf8Json::Internal::DoubleConversion::StringBuilder&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_CREATEEXPONENTIALREPRESENTATION_OFFSET))(decimal_digits, length, exponent, result_builder);
		}

		static ::System::Boolean DoubleToAscii(::System::Double v, ::Utf8Json::Internal::DoubleConversion::DoubleToStringConverter_DtoaMode mode, ::System::Int32 requested_digits, ::Il2CppArray<::System::Byte>* vector, ::System::Boolean& sign, ::System::Int32& length, ::System::Int32& point)
		{
			return ((::System::Boolean(*)(::System::Double, ::Utf8Json::Internal::DoubleConversion::DoubleToStringConverter_DtoaMode, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Boolean&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLETOSTRINGCONVERTER_DOUBLETOASCII_OFFSET))(v, mode, requested_digits, vector, sign, length, point);
		}
	};
}
