#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ASDIYFP_OFFSET UNITYSDK_OFFSET(0x9D3650)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ASUINT32_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_EXPONENT_OFFSET UNITYSDK_OFFSET(0x9D36A0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_INFINITY_OFFSET UNITYSDK_OFFSET(0x1C33C900)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ISDENORMAL_OFFSET UNITYSDK_OFFSET(0x9D36E0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ISINFINITE_OFFSET UNITYSDK_OFFSET(0x9D3720)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ISNAN_OFFSET UNITYSDK_OFFSET(0x9D3700)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x9D36F0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_LOWERBOUNDARYISCLOSER_OFFSET UNITYSDK_OFFSET(0x9D3870)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_NAN_OFFSET UNITYSDK_OFFSET(0x1C33C910)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_NORMALIZEDBOUNDARIES_OFFSET UNITYSDK_OFFSET(0x9D3750)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_SIGNIFICAND_OFFSET UNITYSDK_OFFSET(0x9D36C0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_SIGN_OFFSET UNITYSDK_OFFSET(0x9D3740)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_UPPERBOUNDARY_OFFSET UNITYSDK_OFFSET(0x9D3820)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_VALUE_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2E7CE0)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int Single_TypeDefinitionIndex = 85694;

	struct alignas(4) Single
	{
		// static const ::System::Int32 kExponentBias = 0x96; // 0x0
		// static const ::System::Int32 kDenormalExponent = 0xFFFFFF6B; // 0x0
		// static const ::System::Int32 kMaxExponent = 0x69; // 0x0
		// static const ::System::UInt32 kInfinity = 0x7F800000; // 0x0
		// static const ::System::UInt32 kNaN = 0x7FC00000; // 0x0
		// static const ::System::UInt32 kSignMask = 0x80000000; // 0x0
		// static const ::System::UInt32 kExponentMask = 0x7F800000; // 0x0
		// static const ::System::UInt32 kSignificandMask = 0x7FFFFF; // 0x0
		// static const ::System::UInt32 kHiddenBit = 0x800000; // 0x0
		// static const ::System::Int32 kPhysicalSignificandSize = 0x17; // 0x0
		// static const ::System::Int32 kSignificandSize = 0x18; // 0x0
		::System::UInt32 d32_; // 0x10

		::System::Void _ctor(::System::Single f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE__CTOR_OFFSET))(this, f);
		}

		/*
		::Utf8Json::Internal::DoubleConversion::DiyFp AsDiyFp()
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ASDIYFP_OFFSET))(this);
		}
		*/

		::System::UInt32 AsUint32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ASUINT32_OFFSET))(this);
		}

		::System::Int32 Exponent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_EXPONENT_OFFSET))(this);
		}

		::System::UInt32 Significand()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_SIGNIFICAND_OFFSET))(this);
		}

		::System::Boolean IsDenormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ISDENORMAL_OFFSET))(this);
		}

		::System::Boolean IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ISSPECIAL_OFFSET))(this);
		}

		::System::Boolean IsNan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ISNAN_OFFSET))(this);
		}

		::System::Boolean IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_ISINFINITE_OFFSET))(this);
		}

		::System::Int32 Sign()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_SIGN_OFFSET))(this);
		}

		/*
		::System::Void NormalizedBoundaries(::Utf8Json::Internal::DoubleConversion::DiyFp& out_m_minus, ::Utf8Json::Internal::DoubleConversion::DiyFp& out_m_plus)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::Internal::DoubleConversion::DiyFp&, ::Utf8Json::Internal::DoubleConversion::DiyFp&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_NORMALIZEDBOUNDARIES_OFFSET))(this, out_m_minus, out_m_plus);
		}
		*/

		/*
		::Utf8Json::Internal::DoubleConversion::DiyFp UpperBoundary()
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_UPPERBOUNDARY_OFFSET))(this);
		}
		*/

		::System::Boolean LowerBoundaryIsCloser()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_LOWERBOUNDARYISCLOSER_OFFSET))(this);
		}

		::System::Single value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_VALUE_OFFSET))(this);
		}

		static ::System::Single Infinity()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_INFINITY_OFFSET))();
		}

		static ::System::Single NaN()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_SINGLE_NAN_OFFSET))();
		}
	};
}
