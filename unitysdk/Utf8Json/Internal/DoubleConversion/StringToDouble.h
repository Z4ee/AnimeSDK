#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/DiyFp.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/Vector.h"

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_ADJUSTMENTPOWEROFTEN_OFFSET UNITYSDK_OFFSET(0x1FAE6980)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_COMPUTEGUESS_OFFSET UNITYSDK_OFFSET(0x1FAE6FF0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_CUTTOMAXSIGNIFICANTDIGITS_OFFSET UNITYSDK_OFFSET(0x1FAE60F0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_DIYFPSTRTOD_OFFSET UNITYSDK_OFFSET(0x1FAE6B00)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_DOUBLESTRTOD_OFFSET UNITYSDK_OFFSET(0x1FAE6530)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_GETCOPYBUFFER_OFFSET UNITYSDK_OFFSET(0x1FAE5E30)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_READDIYFP_OFFSET UNITYSDK_OFFSET(0x1FAE63E0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_READUINT64_OFFSET UNITYSDK_OFFSET(0x1FAE6350)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_STRTOD_OFFSET UNITYSDK_OFFSET(0x1FAE7120)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_STRTOF_OFFSET UNITYSDK_OFFSET(0x1FAE7210)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_TRIMANDCUT_OFFSET UNITYSDK_OFFSET(0x1FAE61A0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_TRIMLEADINGZEROS_OFFSET UNITYSDK_OFFSET(0x1FAE5FB0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_TRIMTRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x1FAE6060)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAE74A0)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int StringToDouble_TypeDefinitionIndex = 95205;

	class StringToDouble : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Double>** StaticGet_exact_powers_of_ten()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(StringToDouble_TypeDefinitionIndex)->GetStaticField(0x52DF0);
		}
		static ::System::Int32* StaticGet_kExactPowersOfTenSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StringToDouble_TypeDefinitionIndex)->GetStaticField(0x134A0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_copyBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(StringToDouble_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 kMaxExactDoubleIntegerDecimalDigits = 0xF; // 0x0
		// static const ::System::Int32 kMaxUint64DecimalDigits = 0x13; // 0x0
		// static const ::System::Int32 kMaxDecimalPower = 0x135; // 0x0
		// static const ::System::Int32 kMinDecimalPower = 0xFFFFFEBC; // 0x0
		// static const ::System::UInt64 kMaxUint64 = 0xFFFFFFFFFFFFFFFF; // 0x0
		// static const ::System::Int32 kMaxSignificantDecimalDigits = 0x30C; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GetCopyBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_GETCOPYBUFFER_OFFSET))();
		}

		static ::Utf8Json::Internal::DoubleConversion::Vector TrimLeadingZeros(::Utf8Json::Internal::DoubleConversion::Vector buffer)
		{
			return ((::Utf8Json::Internal::DoubleConversion::Vector(*)(::Utf8Json::Internal::DoubleConversion::Vector))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_TRIMLEADINGZEROS_OFFSET))(buffer);
		}

		static ::Utf8Json::Internal::DoubleConversion::Vector TrimTrailingZeros(::Utf8Json::Internal::DoubleConversion::Vector buffer)
		{
			return ((::Utf8Json::Internal::DoubleConversion::Vector(*)(::Utf8Json::Internal::DoubleConversion::Vector))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_TRIMTRAILINGZEROS_OFFSET))(buffer);
		}

		static ::System::Void CutToMaxSignificantDigits(::Utf8Json::Internal::DoubleConversion::Vector buffer, ::System::Int32 exponent, ::Il2CppArray<::System::Byte>* significant_buffer, ::System::Int32& significant_exponent)
		{
			return ((::System::Void(*)(::Utf8Json::Internal::DoubleConversion::Vector, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_CUTTOMAXSIGNIFICANTDIGITS_OFFSET))(buffer, exponent, significant_buffer, significant_exponent);
		}

		static ::System::Void TrimAndCut(::Utf8Json::Internal::DoubleConversion::Vector buffer, ::System::Int32 exponent, ::Il2CppArray<::System::Byte>* buffer_copy_space, ::System::Int32 space_size, ::Utf8Json::Internal::DoubleConversion::Vector& trimmed, ::System::Int32& updated_exponent)
		{
			return ((::System::Void(*)(::Utf8Json::Internal::DoubleConversion::Vector, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Utf8Json::Internal::DoubleConversion::Vector&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_TRIMANDCUT_OFFSET))(buffer, exponent, buffer_copy_space, space_size, trimmed, updated_exponent);
		}

		static ::System::UInt64 ReadUint64(::Utf8Json::Internal::DoubleConversion::Vector buffer, ::System::Int32& number_of_read_digits)
		{
			return ((::System::UInt64(*)(::Utf8Json::Internal::DoubleConversion::Vector, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_READUINT64_OFFSET))(buffer, number_of_read_digits);
		}

		static ::System::Void ReadDiyFp(::Utf8Json::Internal::DoubleConversion::Vector buffer, ::Utf8Json::Internal::DoubleConversion::DiyFp& result, ::System::Int32& remaining_decimals)
		{
			return ((::System::Void(*)(::Utf8Json::Internal::DoubleConversion::Vector, ::Utf8Json::Internal::DoubleConversion::DiyFp&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_READDIYFP_OFFSET))(buffer, result, remaining_decimals);
		}

		static ::System::Boolean DoubleStrtod(::Utf8Json::Internal::DoubleConversion::Vector trimmed, ::System::Int32 exponent, ::System::Double& result)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Vector, ::System::Int32, ::System::Double&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_DOUBLESTRTOD_OFFSET))(trimmed, exponent, result);
		}

		static ::Utf8Json::Internal::DoubleConversion::DiyFp AdjustmentPowerOfTen(::System::Int32 exponent)
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_ADJUSTMENTPOWEROFTEN_OFFSET))(exponent);
		}

		static ::System::Boolean DiyFpStrtod(::Utf8Json::Internal::DoubleConversion::Vector buffer, ::System::Int32 exponent, ::System::Double& result)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Vector, ::System::Int32, ::System::Double&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_DIYFPSTRTOD_OFFSET))(buffer, exponent, result);
		}

		static ::System::Boolean ComputeGuess(::Utf8Json::Internal::DoubleConversion::Vector trimmed, ::System::Int32 exponent, ::System::Double& guess)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Vector, ::System::Int32, ::System::Double&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_COMPUTEGUESS_OFFSET))(trimmed, exponent, guess);
		}

		static ::System::Nullable_1<::System::Double> Strtod(::Utf8Json::Internal::DoubleConversion::Vector buffer, ::System::Int32 exponent)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::Utf8Json::Internal::DoubleConversion::Vector, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_STRTOD_OFFSET))(buffer, exponent);
		}

		static ::System::Nullable_1<::System::Single> Strtof(::Utf8Json::Internal::DoubleConversion::Vector buffer, ::System::Int32 exponent)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::Utf8Json::Internal::DoubleConversion::Vector, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLE_STRTOF_OFFSET))(buffer, exponent);
		}
	};
}
