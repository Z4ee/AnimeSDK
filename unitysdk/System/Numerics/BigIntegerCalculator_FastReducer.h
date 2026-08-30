#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_DIVMUL_OFFSET UNITYSDK_OFFSET(0x1E383300)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_REDUCE_OFFSET UNITYSDK_OFFSET(0x3C59970)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_SUBMOD_OFFSET UNITYSDK_OFFSET(0x1E383470)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER__CTOR_OFFSET UNITYSDK_OFFSET(0x3C59960)

namespace System::Numerics
{
	inline static constexpr unsigned int BigIntegerCalculator_FastReducer_TypeDefinitionIndex = 3838;

	struct alignas(8) BigIntegerCalculator_FastReducer
	{
		::Il2CppArray<::System::UInt32>* _modulus; // 0x10
		::Il2CppArray<::System::UInt32>* _mu; // 0x18
		::Il2CppArray<::System::UInt32>* _q1; // 0x20
		::Il2CppArray<::System::UInt32>* _q2; // 0x28
		::System::Int32 _muLength; // 0x30

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Reduce(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_REDUCE_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 DivMul(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Int32 a4, ::Il2CppArray<::System::UInt32>* a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_DIVMUL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 SubMod(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Int32 a4, ::Il2CppArray<::System::UInt32>* a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_FASTREDUCER_SUBMOD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
