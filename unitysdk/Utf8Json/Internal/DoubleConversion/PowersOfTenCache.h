#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/CachedPower.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/DiyFp.h"

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_POWERSOFTENCACHE_GETCACHEDPOWERFORBINARYEXPONENTRANGE_OFFSET UNITYSDK_OFFSET(0x1F5A3380)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_POWERSOFTENCACHE_GETCACHEDPOWERFORDECIMALEXPONENT_OFFSET UNITYSDK_OFFSET(0x1F5A3470)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_POWERSOFTENCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5A3540)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int PowersOfTenCache_TypeDefinitionIndex = 95203;

	class PowersOfTenCache : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Utf8Json::Internal::DoubleConversion::CachedPower>** StaticGet_kCachedPowers()
		{
			return (::Il2CppArray<::Utf8Json::Internal::DoubleConversion::CachedPower>**)Il2CppClass::FromTypeDefinitionIndex(PowersOfTenCache_TypeDefinitionIndex)->GetStaticField(0x533F0);
		}
		// static const ::System::Int32 kCachedPowersOffset = 0x15C; // 0x0
		// static const ::System::Double kD_1_LOG2_10; // 0x0
		// static const ::System::Int32 kDecimalExponentDistance = 0x8; // 0x0
		// static const ::System::Int32 kMinDecimalExponent = 0xFFFFFEA4; // 0x0
		// static const ::System::Int32 kMaxDecimalExponent = 0x154; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_POWERSOFTENCACHE__CCTOR_OFFSET))();
		}

		static ::System::Void GetCachedPowerForBinaryExponentRange(::System::Int32 min_exponent, ::System::Int32 max_exponent, ::Utf8Json::Internal::DoubleConversion::DiyFp& power, ::System::Int32& decimal_exponent)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::Utf8Json::Internal::DoubleConversion::DiyFp&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_POWERSOFTENCACHE_GETCACHEDPOWERFORBINARYEXPONENTRANGE_OFFSET))(min_exponent, max_exponent, power, decimal_exponent);
		}

		static ::System::Void GetCachedPowerForDecimalExponent(::System::Int32 requested_exponent, ::Utf8Json::Internal::DoubleConversion::DiyFp& power, ::System::Int32& found_exponent)
		{
			return ((::System::Void(*)(::System::Int32, ::Utf8Json::Internal::DoubleConversion::DiyFp&, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_POWERSOFTENCACHE_GETCACHEDPOWERFORDECIMALEXPONENT_OFFSET))(requested_exponent, power, found_exponent);
		}
	};
}
