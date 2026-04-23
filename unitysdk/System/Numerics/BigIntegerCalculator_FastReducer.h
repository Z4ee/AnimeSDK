#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_DIVMUL_OFFSET UNITYSDK_OFFSET(0x19F8D170)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_REDUCE_OFFSET UNITYSDK_OFFSET(0x22D0360)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_SUBMOD_OFFSET UNITYSDK_OFFSET(0x19F8D2E0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER__CTOR_OFFSET UNITYSDK_OFFSET(0x22D0350)

namespace System::Numerics
{
	inline static constexpr unsigned int BigIntegerCalculator_FastReducer_TypeDefinitionIndex = 4859;

	struct alignas(8) BigIntegerCalculator_FastReducer
	{
		::Il2CppArray<::System::UInt32>* _modulus; // 0x10
		::Il2CppArray<::System::UInt32>* _mu; // 0x18
		::Il2CppArray<::System::UInt32>* _q1; // 0x20
		::Il2CppArray<::System::UInt32>* _q2; // 0x28
		::System::Int32 _muLength; // 0x30

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* modulus)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER__CTOR_OFFSET))(this, modulus);
		}

		::System::Int32 Reduce(::Il2CppArray<::System::UInt32>* value, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_REDUCE_OFFSET))(this, value, length);
		}

		static ::System::Int32 DivMul(::Il2CppArray<::System::UInt32>* left, ::System::Int32 leftLength, ::Il2CppArray<::System::UInt32>* right, ::System::Int32 rightLength, ::Il2CppArray<::System::UInt32>* bits, ::System::Int32 k)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_DIVMUL_OFFSET))(left, leftLength, right, rightLength, bits, k);
		}

		static ::System::Int32 SubMod(::Il2CppArray<::System::UInt32>* left, ::System::Int32 leftLength, ::Il2CppArray<::System::UInt32>* right, ::System::Int32 rightLength, ::Il2CppArray<::System::UInt32>* modulus, ::System::Int32 k)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_SUBMOD_OFFSET))(left, leftLength, right, rightLength, modulus, k);
		}
	};
}
