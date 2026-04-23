#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigIntegerCalculator_BitsBuffer.h"
#include "unitysdk/System/Numerics/BigIntegerCalculator_FastReducer.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_1_OFFSET UNITYSDK_OFFSET(0x19F8AED0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_OFFSET UNITYSDK_OFFSET(0x19F8AE60)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDDIVISOR_OFFSET UNITYSDK_OFFSET(0x19F88620)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDSELF_OFFSET UNITYSDK_OFFSET(0x19F87CA0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x19F848B0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_2_OFFSET UNITYSDK_OFFSET(0x19F87B80)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET UNITYSDK_OFFSET(0x19F847C0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x19F87F70)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_OFFSET UNITYSDK_OFFSET(0x19F81120)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x19F87FD0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDEGUESSTOOBIG_OFFSET UNITYSDK_OFFSET(0x19F885A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_1_OFFSET UNITYSDK_OFFSET(0x19F86CC0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_2_OFFSET UNITYSDK_OFFSET(0x19F80540)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_3_OFFSET UNITYSDK_OFFSET(0x19F86D80)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_4_OFFSET UNITYSDK_OFFSET(0x19F88030)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET UNITYSDK_OFFSET(0x19F80460)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_EXTRACTDIGITS_OFFSET UNITYSDK_OFFSET(0x19F88C00)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_1_OFFSET UNITYSDK_OFFSET(0x19F817C0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_2_OFFSET UNITYSDK_OFFSET(0x19F80FE0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_3_OFFSET UNITYSDK_OFFSET(0x19F81880)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_4_OFFSET UNITYSDK_OFFSET(0x19F88770)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_OFFSET UNITYSDK_OFFSET(0x19F80F50)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEADINGZEROS_OFFSET UNITYSDK_OFFSET(0x19F88530)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEHMERCORE_OFFSET UNITYSDK_OFFSET(0x19F88FC0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x19F86BE0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x19F8BCF0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x19F86A80)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWBOUND_OFFSET UNITYSDK_OFFSET(0x19F89280)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_1_OFFSET UNITYSDK_OFFSET(0x19F89480)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_2_OFFSET UNITYSDK_OFFSET(0x19F897E0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_3_OFFSET UNITYSDK_OFFSET(0x19F89740)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_4_OFFSET UNITYSDK_OFFSET(0x19F89B30)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_5_OFFSET UNITYSDK_OFFSET(0x19F899A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_6_OFFSET UNITYSDK_OFFSET(0x19F89CC0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_7_OFFSET UNITYSDK_OFFSET(0x19F8AAA0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_8_OFFSET UNITYSDK_OFFSET(0x19F8A500)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_9_OFFSET UNITYSDK_OFFSET(0x19F8ABC0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_OFFSET UNITYSDK_OFFSET(0x19F89380)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_1_OFFSET UNITYSDK_OFFSET(0x19F82960)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_2_OFFSET UNITYSDK_OFFSET(0x19F82550)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_3_OFFSET UNITYSDK_OFFSET(0x19F82340)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_4_OFFSET UNITYSDK_OFFSET(0x19F82510)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_5_OFFSET UNITYSDK_OFFSET(0x19F821F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_6_OFFSET UNITYSDK_OFFSET(0x19F827D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_7_OFFSET UNITYSDK_OFFSET(0x19F826D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_8_OFFSET UNITYSDK_OFFSET(0x19F82770)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_9_OFFSET UNITYSDK_OFFSET(0x19F82630)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_OFFSET UNITYSDK_OFFSET(0x19F82A50)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_1_OFFSET UNITYSDK_OFFSET(0x19F816F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_OFFSET UNITYSDK_OFFSET(0x19F81600)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_1_OFFSET UNITYSDK_OFFSET(0x19F8AF40)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET UNITYSDK_OFFSET(0x19F86B50)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTCORE_OFFSET UNITYSDK_OFFSET(0x19F8BB50)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTDIVISOR_OFFSET UNITYSDK_OFFSET(0x19F885E0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTSELF_OFFSET UNITYSDK_OFFSET(0x19F87E90)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x19F84D70)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_2_OFFSET UNITYSDK_OFFSET(0x19F87D80)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x19F84CB0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F8CFE0)

namespace System::Numerics
{
	inline static constexpr unsigned int BigIntegerCalculator_TypeDefinitionIndex = 4857;

	class BigIntegerCalculator : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_SquareThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x160);
		}
		static ::System::Int32* StaticGet_MultiplyThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x164);
		}
		static ::System::Int32* StaticGet_ReducerThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x168);
		}
		static ::System::Int32* StaticGet_AllocationThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x16C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* Add(::Il2CppArray<::System::UInt32>* left, ::System::UInt32 right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::UInt32>* Add_1(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_1_OFFSET))(left, right);
		}

		static ::System::Void Add_2(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength, ::System::UInt32* bits, ::System::Int32 bitsLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_2_OFFSET))(left, leftLength, right, rightLength, bits, bitsLength);
		}

		static ::System::Void AddSelf(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDSELF_OFFSET))(left, leftLength, right, rightLength);
		}

		static ::Il2CppArray<::System::UInt32>* Subtract(::Il2CppArray<::System::UInt32>* left, ::System::UInt32 right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::UInt32>* Subtract_1(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_1_OFFSET))(left, right);
		}

		static ::System::Void Subtract_2(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength, ::System::UInt32* bits, ::System::Int32 bitsLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_2_OFFSET))(left, leftLength, right, rightLength, bits, bitsLength);
		}

		static ::System::Void SubtractSelf(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTSELF_OFFSET))(left, leftLength, right, rightLength);
		}

		static ::System::Int32 Compare(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_OFFSET))(left, right);
		}

		static ::System::Int32 Compare_1(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength)
		{
			return ((::System::Int32(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_1_OFFSET))(left, leftLength, right, rightLength);
		}

		static ::Il2CppArray<::System::UInt32>* Divide(::Il2CppArray<::System::UInt32>* left, ::System::UInt32 right, ::System::UInt32& remainder)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET))(left, right, remainder);
		}

		static ::Il2CppArray<::System::UInt32>* Divide_1(::Il2CppArray<::System::UInt32>* left, ::System::UInt32 right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_1_OFFSET))(left, right);
		}

		static ::System::UInt32 Remainder(::Il2CppArray<::System::UInt32>* left, ::System::UInt32 right)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::UInt32>* Divide_2(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right, ::Il2CppArray<::System::UInt32>*& remainder)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_2_OFFSET))(left, right, remainder);
		}

		static ::Il2CppArray<::System::UInt32>* Divide_3(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_3_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::UInt32>* Remainder_1(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_1_OFFSET))(left, right);
		}

		static ::System::Void Divide_4(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength, ::System::UInt32* bits, ::System::Int32 bitsLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_4_OFFSET))(left, leftLength, right, rightLength, bits, bitsLength);
		}

		static ::System::UInt32 AddDivisor(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength)
		{
			return ((::System::UInt32(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDDIVISOR_OFFSET))(left, leftLength, right, rightLength);
		}

		static ::System::UInt32 SubtractDivisor(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength, ::System::UInt64 q)
		{
			return ((::System::UInt32(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTDIVISOR_OFFSET))(left, leftLength, right, rightLength, q);
		}

		static ::System::Boolean DivideGuessTooBig(::System::UInt64 q, ::System::UInt64 valHi, ::System::UInt32 valLo, ::System::UInt32 divHi, ::System::UInt32 divLo)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDEGUESSTOOBIG_OFFSET))(q, valHi, valLo, divHi, divLo);
		}

		static ::Il2CppArray<::System::UInt32>* CreateCopy(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_CREATECOPY_OFFSET))(value);
		}

		static ::System::Int32 LeadingZeros(::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEADINGZEROS_OFFSET))(value);
		}

		static ::System::UInt32 Gcd(::System::UInt32 left, ::System::UInt32 right)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_OFFSET))(left, right);
		}

		static ::System::UInt64 Gcd_1(::System::UInt64 left, ::System::UInt64 right)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_1_OFFSET))(left, right);
		}

		static ::System::UInt32 Gcd_2(::Il2CppArray<::System::UInt32>* left, ::System::UInt32 right)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_2_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::UInt32>* Gcd_3(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_3_OFFSET))(left, right);
		}

		static ::System::Void Gcd_4(::System::Numerics::BigIntegerCalculator_BitsBuffer& left, ::System::Numerics::BigIntegerCalculator_BitsBuffer& right)
		{
			return ((::System::Void(*)(::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_4_OFFSET))(left, right);
		}

		static ::System::Void ExtractDigits(::System::Numerics::BigIntegerCalculator_BitsBuffer& xBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer& yBuffer, ::System::UInt64& x, ::System::UInt64& y)
		{
			return ((::System::Void(*)(::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_EXTRACTDIGITS_OFFSET))(xBuffer, yBuffer, x, y);
		}

		static ::System::Void LehmerCore(::System::Numerics::BigIntegerCalculator_BitsBuffer& xBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer& yBuffer, ::System::Int64 a, ::System::Int64 b, ::System::Int64 c, ::System::Int64 d)
		{
			return ((::System::Void(*)(::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEHMERCORE_OFFSET))(xBuffer, yBuffer, a, b, c, d);
		}

		static ::Il2CppArray<::System::UInt32>* Pow(::System::UInt32 value, ::System::UInt32 power)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_OFFSET))(value, power);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_1(::Il2CppArray<::System::UInt32>* value, ::System::UInt32 power)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_1_OFFSET))(value, power);
		}

		static ::Il2CppArray<::System::UInt32>* PowCore(::System::UInt32 power, ::System::Numerics::BigIntegerCalculator_BitsBuffer& value)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_OFFSET))(power, value);
		}

		static ::System::Int32 PowBound(::System::UInt32 power, ::System::Int32 valueLength, ::System::Int32 resultLength)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWBOUND_OFFSET))(power, valueLength, resultLength);
		}

		static ::System::Void PowCore_1(::System::UInt32 power, ::System::Numerics::BigIntegerCalculator_BitsBuffer& value, ::System::Numerics::BigIntegerCalculator_BitsBuffer& result, ::System::Numerics::BigIntegerCalculator_BitsBuffer& temp)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_1_OFFSET))(power, value, result, temp);
		}

		static ::System::UInt32 Pow_2(::System::UInt32 value, ::System::UInt32 power, ::System::UInt32 modulus)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_2_OFFSET))(value, power, modulus);
		}

		static ::System::UInt32 Pow_3(::Il2CppArray<::System::UInt32>* value, ::System::UInt32 power, ::System::UInt32 modulus)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_3_OFFSET))(value, power, modulus);
		}

		static ::System::UInt32 Pow_4(::System::UInt32 value, ::Il2CppArray<::System::UInt32>* power, ::System::UInt32 modulus)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_4_OFFSET))(value, power, modulus);
		}

		static ::System::UInt32 Pow_5(::Il2CppArray<::System::UInt32>* value, ::Il2CppArray<::System::UInt32>* power, ::System::UInt32 modulus)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_5_OFFSET))(value, power, modulus);
		}

		static ::System::UInt32 PowCore_2(::Il2CppArray<::System::UInt32>* power, ::System::UInt32 modulus, ::System::UInt64 value, ::System::UInt64 result)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_2_OFFSET))(power, modulus, value, result);
		}

		static ::System::UInt32 PowCore_3(::System::UInt32 power, ::System::UInt32 modulus, ::System::UInt64 value, ::System::UInt64 result)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_3_OFFSET))(power, modulus, value, result);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_6(::System::UInt32 value, ::System::UInt32 power, ::Il2CppArray<::System::UInt32>* modulus)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_6_OFFSET))(value, power, modulus);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_7(::Il2CppArray<::System::UInt32>* value, ::System::UInt32 power, ::Il2CppArray<::System::UInt32>* modulus)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_7_OFFSET))(value, power, modulus);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_8(::System::UInt32 value, ::Il2CppArray<::System::UInt32>* power, ::Il2CppArray<::System::UInt32>* modulus)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_8_OFFSET))(value, power, modulus);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_9(::Il2CppArray<::System::UInt32>* value, ::Il2CppArray<::System::UInt32>* power, ::Il2CppArray<::System::UInt32>* modulus)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_9_OFFSET))(value, power, modulus);
		}

		static ::Il2CppArray<::System::UInt32>* PowCore_4(::Il2CppArray<::System::UInt32>* power, ::Il2CppArray<::System::UInt32>* modulus, ::System::Numerics::BigIntegerCalculator_BitsBuffer& value)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_4_OFFSET))(power, modulus, value);
		}

		static ::Il2CppArray<::System::UInt32>* PowCore_5(::System::UInt32 power, ::Il2CppArray<::System::UInt32>* modulus, ::System::Numerics::BigIntegerCalculator_BitsBuffer& value)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_5_OFFSET))(power, modulus, value);
		}

		static ::System::Void PowCore_6(::Il2CppArray<::System::UInt32>* power, ::Il2CppArray<::System::UInt32>* modulus, ::System::Numerics::BigIntegerCalculator_BitsBuffer& value, ::System::Numerics::BigIntegerCalculator_BitsBuffer& result, ::System::Numerics::BigIntegerCalculator_BitsBuffer& temp)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_6_OFFSET))(power, modulus, value, result, temp);
		}

		static ::System::Void PowCore_7(::System::UInt32 power, ::Il2CppArray<::System::UInt32>* modulus, ::System::Numerics::BigIntegerCalculator_BitsBuffer& value, ::System::Numerics::BigIntegerCalculator_BitsBuffer& result, ::System::Numerics::BigIntegerCalculator_BitsBuffer& temp)
		{
			return ((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_7_OFFSET))(power, modulus, value, result, temp);
		}

		static ::System::Void PowCore_8(::Il2CppArray<::System::UInt32>* power, ::System::Numerics::BigIntegerCalculator_FastReducer& reducer, ::System::Numerics::BigIntegerCalculator_BitsBuffer& value, ::System::Numerics::BigIntegerCalculator_BitsBuffer& result, ::System::Numerics::BigIntegerCalculator_BitsBuffer& temp)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_FastReducer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_8_OFFSET))(power, reducer, value, result, temp);
		}

		static ::System::Void PowCore_9(::System::UInt32 power, ::System::Numerics::BigIntegerCalculator_FastReducer& reducer, ::System::Numerics::BigIntegerCalculator_BitsBuffer& value, ::System::Numerics::BigIntegerCalculator_BitsBuffer& result, ::System::Numerics::BigIntegerCalculator_BitsBuffer& temp)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Numerics::BigIntegerCalculator_FastReducer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_9_OFFSET))(power, reducer, value, result, temp);
		}

		static ::System::Int32 ActualLength(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_OFFSET))(value);
		}

		static ::System::Int32 ActualLength_1(::Il2CppArray<::System::UInt32>* value, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_1_OFFSET))(value, length);
		}

		static ::Il2CppArray<::System::UInt32>* Square(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET))(value);
		}

		static ::System::Void Square_1(::System::UInt32* value, ::System::Int32 valueLength, ::System::UInt32* bits, ::System::Int32 bitsLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_1_OFFSET))(value, valueLength, bits, bitsLength);
		}

		static ::Il2CppArray<::System::UInt32>* Multiply(::Il2CppArray<::System::UInt32>* left, ::System::UInt32 right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::UInt32>* Multiply_1(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_1_OFFSET))(left, right);
		}

		static ::System::Void Multiply_2(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength, ::System::UInt32* bits, ::System::Int32 bitsLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_2_OFFSET))(left, leftLength, right, rightLength, bits, bitsLength);
		}

		static ::System::Void SubtractCore(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength, ::System::UInt32* core, ::System::Int32 coreLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTCORE_OFFSET))(left, leftLength, right, rightLength, core, coreLength);
		}
	};
}
