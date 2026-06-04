#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_APPLY_OFFSET UNITYSDK_OFFSET(0x386AAD0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_GETBITS_OFFSET UNITYSDK_OFFSET(0x5B60)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_GETLENGTH_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_GETSIZE_OFFSET UNITYSDK_OFFSET(0x2BFB010)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_MULTIPLYSELF_OFFSET UNITYSDK_OFFSET(0x386A8D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_OVERWRITE_1_OFFSET UNITYSDK_OFFSET(0x386A9C0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_OVERWRITE_OFFSET UNITYSDK_OFFSET(0x386A940)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_1_OFFSET UNITYSDK_OFFSET(0x386A920)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_2_OFFSET UNITYSDK_OFFSET(0x386A930)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_OFFSET UNITYSDK_OFFSET(0x386A8F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REFRESH_OFFSET UNITYSDK_OFFSET(0x386AA20)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_SQUARESELF_OFFSET UNITYSDK_OFFSET(0x386A8E0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x386A8C0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x386A860)

namespace System::Numerics
{
	inline static constexpr unsigned int BigIntegerCalculator_BitsBuffer_TypeDefinitionIndex = 3825;

	struct alignas(8) BigIntegerCalculator_BitsBuffer
	{
		::Il2CppArray<::System::UInt32>* _bits; // 0x10
		::System::Int32 _length; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void MultiplySelf(::System::Numerics::BigIntegerCalculator_BitsBuffer& a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_MULTIPLYSELF_OFFSET))(this, a1, a2);
		}

		::System::Void SquareSelf(::System::Numerics::BigIntegerCalculator_BitsBuffer& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_SQUARESELF_OFFSET))(this, a1);
		}

		/*
		::System::Void Reduce(::System::Numerics::BigIntegerCalculator_FastReducer& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigIntegerCalculator_FastReducer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_OFFSET))(this, a1);
		}
		*/

		::System::Void Reduce_1(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_1_OFFSET))(this, a1);
		}

		::System::Void Reduce_2(::System::Numerics::BigIntegerCalculator_BitsBuffer& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_2_OFFSET))(this, a1);
		}

		::System::Void Overwrite(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_OVERWRITE_OFFSET))(this, a1);
		}

		::System::Void Overwrite_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_OVERWRITE_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* GetBits()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_GETBITS_OFFSET))(this);
		}

		::System::Int32 GetSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_GETSIZE_OFFSET))(this);
		}

		::System::Int32 GetLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_GETLENGTH_OFFSET))(this);
		}

		::System::Void Refresh(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REFRESH_OFFSET))(this, a1);
		}

		::System::Void Apply(::System::Numerics::BigIntegerCalculator_BitsBuffer& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_APPLY_OFFSET))(this, a1, a2);
		}
	};
}
