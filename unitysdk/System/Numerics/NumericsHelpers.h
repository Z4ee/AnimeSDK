#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_NUMERICSHELPERS_ABS_OFFSET UNITYSDK_OFFSET(0x19F80450)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_1_OFFSET UNITYSDK_OFFSET(0x19F8E620)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_OFFSET UNITYSDK_OFFSET(0x19F809E0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_1_OFFSET UNITYSDK_OFFSET(0x19F82BB0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x19F8E710)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_DANGEROUSMAKETWOSCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x19F7E230)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEFROMPARTS_OFFSET UNITYSDK_OFFSET(0x19F856C0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEPARTS_OFFSET UNITYSDK_OFFSET(0x19F7D850)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_MAKEULONG_OFFSET UNITYSDK_OFFSET(0x19F82DB0)

namespace System::Numerics
{
	inline static constexpr unsigned int NumericsHelpers_TypeDefinitionIndex = 4864;

	class NumericsHelpers : public ::System::Object
	{
	public:
		static ::System::Void GetDoubleParts(::System::Double dbl, ::System::Int32& sign, ::System::Int32& exp, ::System::UInt64& man, ::System::Boolean& fFinite)
		{
			return ((::System::Void(*)(::System::Double, ::System::Int32&, ::System::Int32&, ::System::UInt64&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEPARTS_OFFSET))(dbl, sign, exp, man, fFinite);
		}

		static ::System::Double GetDoubleFromParts(::System::Int32 sign, ::System::Int32 exp, ::System::UInt64 man)
		{
			return ((::System::Double(*)(::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEFROMPARTS_OFFSET))(sign, exp, man);
		}

		static ::System::Void DangerousMakeTwosComplement(::Il2CppArray<::System::UInt32>* d)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_DANGEROUSMAKETWOSCOMPLEMENT_OFFSET))(d);
		}

		static ::System::UInt64 MakeUlong(::System::UInt32 uHi, ::System::UInt32 uLo)
		{
			return ((::System::UInt64(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_MAKEULONG_OFFSET))(uHi, uLo);
		}

		static ::System::UInt32 Abs(::System::Int32 a)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_ABS_OFFSET))(a);
		}

		static ::System::UInt32 CombineHash(::System::UInt32 u1, ::System::UInt32 u2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_OFFSET))(u1, u2);
		}

		static ::System::Int32 CombineHash_1(::System::Int32 n1, ::System::Int32 n2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_1_OFFSET))(n1, n2);
		}

		static ::System::Int32 CbitHighZero(::System::UInt32 u)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_OFFSET))(u);
		}

		static ::System::Int32 CbitHighZero_1(::System::UInt64 uu)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_1_OFFSET))(uu);
		}
	};
}
