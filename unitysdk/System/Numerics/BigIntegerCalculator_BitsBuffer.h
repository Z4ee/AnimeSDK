#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_APPLY_OFFSET UNITYSDK_OFFSET(0x22D01F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_GETBITS_OFFSET UNITYSDK_OFFSET(0x5580)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_GETLENGTH_OFFSET UNITYSDK_OFFSET(0xD240)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_GETSIZE_OFFSET UNITYSDK_OFFSET(0x16753E0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_MULTIPLYSELF_OFFSET UNITYSDK_OFFSET(0x22D0070)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_OVERWRITE_1_OFFSET UNITYSDK_OFFSET(0x22D0180)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_OVERWRITE_OFFSET UNITYSDK_OFFSET(0x22D0170)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_1_OFFSET UNITYSDK_OFFSET(0x22D0150)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_2_OFFSET UNITYSDK_OFFSET(0x22D0160)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_OFFSET UNITYSDK_OFFSET(0x22D0120)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REFRESH_OFFSET UNITYSDK_OFFSET(0x22D01E0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_SQUARESELF_OFFSET UNITYSDK_OFFSET(0x22D0080)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22D0060)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x22D0050)

namespace System::Numerics
{
	inline static constexpr unsigned int BigIntegerCalculator_BitsBuffer_TypeDefinitionIndex = 4858;

	struct alignas(8) BigIntegerCalculator_BitsBuffer
	{
		::Il2CppArray<::System::UInt32>* _bits; // 0x10
		::System::Int32 _length; // 0x18

		::System::Void _ctor(::System::Int32 size, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER__CTOR_OFFSET))(this, size, value);
		}

		::System::Void _ctor_1(::System::Int32 size, ::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER__CTOR_1_OFFSET))(this, size, value);
		}

		::System::Void MultiplySelf(::System::Numerics::BigIntegerCalculator_BitsBuffer& value, ::System::Numerics::BigIntegerCalculator_BitsBuffer& temp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_MULTIPLYSELF_OFFSET))(this, value, temp);
		}

		::System::Void SquareSelf(::System::Numerics::BigIntegerCalculator_BitsBuffer& temp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_SQUARESELF_OFFSET))(this, temp);
		}

		/*
		::System::Void Reduce(::System::Numerics::BigIntegerCalculator_FastReducer& reducer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigIntegerCalculator_FastReducer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_OFFSET))(this, reducer);
		}
		*/

		::System::Void Reduce_1(::Il2CppArray<::System::UInt32>* modulus)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_1_OFFSET))(this, modulus);
		}

		::System::Void Reduce_2(::System::Numerics::BigIntegerCalculator_BitsBuffer& modulus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REDUCE_2_OFFSET))(this, modulus);
		}

		::System::Void Overwrite(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_OVERWRITE_OFFSET))(this, value);
		}

		::System::Void Overwrite_1(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_OVERWRITE_1_OFFSET))(this, value);
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

		::System::Void Refresh(::System::Int32 maxLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_REFRESH_OFFSET))(this, maxLength);
		}

		::System::Void Apply(::System::Numerics::BigIntegerCalculator_BitsBuffer& temp, ::System::Int32 maxLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_BITSBUFFER_APPLY_OFFSET))(this, temp, maxLength);
		}
	};
}
