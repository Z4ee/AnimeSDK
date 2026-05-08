#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ASDIYFP_OFFSET UNITYSDK_OFFSET(0x9CFF40)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ASNORMALIZEDDIYFP_OFFSET UNITYSDK_OFFSET(0x9CFFA0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ASUINT64_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_DIYFPTOUINT64_OFFSET UNITYSDK_OFFSET(0x1C2DB210)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_EXPONENT_OFFSET UNITYSDK_OFFSET(0x9D00E0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_INFINITY_OFFSET UNITYSDK_OFFSET(0x1C2DB510)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ISDENORMAL_OFFSET UNITYSDK_OFFSET(0x9D0140)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ISINFINITE_OFFSET UNITYSDK_OFFSET(0x9D01A0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ISNAN_OFFSET UNITYSDK_OFFSET(0x9D0170)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x9D0150)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_LOWERBOUNDARYISCLOSER_OFFSET UNITYSDK_OFFSET(0x9D0320)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_NAN_OFFSET UNITYSDK_OFFSET(0x1C2DB730)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_NEXTDOUBLE_OFFSET UNITYSDK_OFFSET(0x9D0020)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_NORMALIZEDBOUNDARIES_OFFSET UNITYSDK_OFFSET(0x9D0230)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_PREVIOUSDOUBLE_OFFSET UNITYSDK_OFFSET(0x9D0080)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_SIGNIFICANDSIZEFORORDEROFMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1C2DB710)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_SIGNIFICAND_OFFSET UNITYSDK_OFFSET(0x9D0110)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_SIGN_OFFSET UNITYSDK_OFFSET(0x9D01C0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_UPPERBOUNDARY_OFFSET UNITYSDK_OFFSET(0x9D01D0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_VALUE_OFFSET UNITYSDK_OFFSET(0x312A10)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9CFE60)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x312830)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int Double_TypeDefinitionIndex = 85693;

	struct alignas(8) Double
	{
		// static const ::System::UInt64 kSignMask = 0x8000000000000000; // 0x0
		// static const ::System::UInt64 kExponentMask = 0x7FF0000000000000; // 0x0
		// static const ::System::UInt64 kSignificandMask = 0xFFFFFFFFFFFFF; // 0x0
		// static const ::System::UInt64 kHiddenBit = 0x10000000000000; // 0x0
		// static const ::System::Int32 kPhysicalSignificandSize = 0x34; // 0x0
		// static const ::System::Int32 kSignificandSize = 0x35; // 0x0
		// static const ::System::Int32 kExponentBias = 0x433; // 0x0
		// static const ::System::Int32 kDenormalExponent = 0xFFFFFBCE; // 0x0
		// static const ::System::Int32 kMaxExponent = 0x3CC; // 0x0
		// static const ::System::UInt64 kInfinity = 0x7FF0000000000000; // 0x0
		// static const ::System::UInt64 kNaN = 0x7FF8000000000000; // 0x0
		::System::UInt64 d64_; // 0x10

		::System::Void _ctor(::System::Double d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE__CTOR_OFFSET))(this, d);
		}

		/*
		::System::Void _ctor_1(::Utf8Json::Internal::DoubleConversion::DiyFp d)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::Internal::DoubleConversion::DiyFp))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE__CTOR_1_OFFSET))(this, d);
		}
		*/

		/*
		::Utf8Json::Internal::DoubleConversion::DiyFp AsDiyFp()
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ASDIYFP_OFFSET))(this);
		}
		*/

		/*
		::Utf8Json::Internal::DoubleConversion::DiyFp AsNormalizedDiyFp()
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ASNORMALIZEDDIYFP_OFFSET))(this);
		}
		*/

		::System::UInt64 AsUint64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ASUINT64_OFFSET))(this);
		}

		::System::Double NextDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_NEXTDOUBLE_OFFSET))(this);
		}

		::System::Double PreviousDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_PREVIOUSDOUBLE_OFFSET))(this);
		}

		::System::Int32 Exponent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_EXPONENT_OFFSET))(this);
		}

		::System::UInt64 Significand()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_SIGNIFICAND_OFFSET))(this);
		}

		::System::Boolean IsDenormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ISDENORMAL_OFFSET))(this);
		}

		::System::Boolean IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ISSPECIAL_OFFSET))(this);
		}

		::System::Boolean IsNan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ISNAN_OFFSET))(this);
		}

		::System::Boolean IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_ISINFINITE_OFFSET))(this);
		}

		::System::Int32 Sign()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_SIGN_OFFSET))(this);
		}

		/*
		::Utf8Json::Internal::DoubleConversion::DiyFp UpperBoundary()
		{
			return ((::Utf8Json::Internal::DoubleConversion::DiyFp(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_UPPERBOUNDARY_OFFSET))(this);
		}
		*/

		/*
		::System::Void NormalizedBoundaries(::Utf8Json::Internal::DoubleConversion::DiyFp& out_m_minus, ::Utf8Json::Internal::DoubleConversion::DiyFp& out_m_plus)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::Internal::DoubleConversion::DiyFp&, ::Utf8Json::Internal::DoubleConversion::DiyFp&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_NORMALIZEDBOUNDARIES_OFFSET))(this, out_m_minus, out_m_plus);
		}
		*/

		::System::Boolean LowerBoundaryIsCloser()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_LOWERBOUNDARYISCLOSER_OFFSET))(this);
		}

		::System::Double value()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_VALUE_OFFSET))(this);
		}

		static ::System::Int32 SignificandSizeForOrderOfMagnitude(::System::Int32 order)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_SIGNIFICANDSIZEFORORDEROFMAGNITUDE_OFFSET))(order);
		}

		static ::System::Double Infinity()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_INFINITY_OFFSET))();
		}

		static ::System::Double NaN()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_NAN_OFFSET))();
		}

		/*
		static ::System::UInt64 DiyFpToUint64(::Utf8Json::Internal::DoubleConversion::DiyFp diy_fp)
		{
			return ((::System::UInt64(*)(::Utf8Json::Internal::DoubleConversion::DiyFp))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_DOUBLE_DIYFPTOUINT64_OFFSET))(diy_fp);
		}
		*/
	};
}
