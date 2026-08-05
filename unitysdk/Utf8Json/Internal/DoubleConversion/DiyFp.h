#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_MINUS_OFFSET UNITYSDK_OFFSET(0x1FB45980)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xAC9800)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1FB45B90)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xAC9870)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1FB45AB0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1FB459A0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_SUBTRACT_OFFSET UNITYSDK_OFFSET(0xAC97F0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_TIMES_OFFSET UNITYSDK_OFFSET(0x1FB45A30)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP__CTOR_OFFSET UNITYSDK_OFFSET(0x351680)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int DiyFp_TypeDefinitionIndex = 95192;

	struct alignas(8) DiyFp
	{
		// static const ::System::Int32 kSignificandSize = 0x40; // 0x0
		// static const ::System::UInt64 kUint64MSB = 0x8000000000000000; // 0x0
		::System::UInt64 f; // 0x10
		::System::Int32 e; // 0x18

		::System::Void _ctor(::System::UInt64 significand, ::System::Int32 exponent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP__CTOR_OFFSET))(this, significand, exponent);
		}

		::System::Void Subtract(::Utf8Json::Internal::DoubleConversion::DiyFp& other)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::Internal::DoubleConversion::DiyFp&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_SUBTRACT_OFFSET))(this, other);
		}

		static ::Utf8Json::Internal::DoubleConversion::DiyFp Minus(::Utf8Json::Internal::DoubleConversion::DiyFp& a, ::Utf8Json::Internal::DoubleConversion::DiyFp& b)
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::Utf8Json::Internal::DoubleConversion::DiyFp&, ::Utf8Json::Internal::DoubleConversion::DiyFp&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_MINUS_OFFSET))(a, b);
		}

		static ::Utf8Json::Internal::DoubleConversion::DiyFp op_Subtraction(::Utf8Json::Internal::DoubleConversion::DiyFp lhs, ::Utf8Json::Internal::DoubleConversion::DiyFp rhs)
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::Utf8Json::Internal::DoubleConversion::DiyFp, ::Utf8Json::Internal::DoubleConversion::DiyFp))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_OP_SUBTRACTION_OFFSET))(lhs, rhs);
		}

		::System::Void Multiply(::Utf8Json::Internal::DoubleConversion::DiyFp& other)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::Internal::DoubleConversion::DiyFp&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_MULTIPLY_OFFSET))(this, other);
		}

		static ::Utf8Json::Internal::DoubleConversion::DiyFp Times(::Utf8Json::Internal::DoubleConversion::DiyFp& a, ::Utf8Json::Internal::DoubleConversion::DiyFp& b)
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::Utf8Json::Internal::DoubleConversion::DiyFp&, ::Utf8Json::Internal::DoubleConversion::DiyFp&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_TIMES_OFFSET))(a, b);
		}

		static ::Utf8Json::Internal::DoubleConversion::DiyFp op_Multiply(::Utf8Json::Internal::DoubleConversion::DiyFp lhs, ::Utf8Json::Internal::DoubleConversion::DiyFp rhs)
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::Utf8Json::Internal::DoubleConversion::DiyFp, ::Utf8Json::Internal::DoubleConversion::DiyFp))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_NORMALIZE_OFFSET))(this);
		}

		static ::Utf8Json::Internal::DoubleConversion::DiyFp Normalize_1(::Utf8Json::Internal::DoubleConversion::DiyFp& a)
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::Utf8Json::Internal::DoubleConversion::DiyFp&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DIYFP_NORMALIZE_1_OFFSET))(a);
		}
	};
}
