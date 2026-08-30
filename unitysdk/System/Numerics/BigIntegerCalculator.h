#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigIntegerCalculator_BitsBuffer.h"
#include "unitysdk/System/Numerics/BigIntegerCalculator_FastReducer.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_1_OFFSET UNITYSDK_OFFSET(0x1E380FE0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_OFFSET UNITYSDK_OFFSET(0x1E380F70)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDDIVISOR_OFFSET UNITYSDK_OFFSET(0x1E37EA50)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDSELF_OFFSET UNITYSDK_OFFSET(0x1E37E0D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x1E37ADD0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_2_OFFSET UNITYSDK_OFFSET(0x1E37DFB0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET UNITYSDK_OFFSET(0x1E37AD10)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1E37E3A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E377610)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1E37E400)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDEGUESSTOOBIG_OFFSET UNITYSDK_OFFSET(0x1E37E9D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_1_OFFSET UNITYSDK_OFFSET(0x1E37D280)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_2_OFFSET UNITYSDK_OFFSET(0x1E376AA0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_3_OFFSET UNITYSDK_OFFSET(0x1E37D330)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_4_OFFSET UNITYSDK_OFFSET(0x1E37E460)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1E3769D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_EXTRACTDIGITS_OFFSET UNITYSDK_OFFSET(0x1E37F050)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_1_OFFSET UNITYSDK_OFFSET(0x1E377C40)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_2_OFFSET UNITYSDK_OFFSET(0x1E3774D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_3_OFFSET UNITYSDK_OFFSET(0x1E377D00)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_4_OFFSET UNITYSDK_OFFSET(0x1E37EBA0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_OFFSET UNITYSDK_OFFSET(0x1E377450)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEADINGZEROS_OFFSET UNITYSDK_OFFSET(0x1E37E960)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEHMERCORE_OFFSET UNITYSDK_OFFSET(0x1E37F380)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1E37D1A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1E381E30)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E37D060)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWBOUND_OFFSET UNITYSDK_OFFSET(0x1E37F730)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_1_OFFSET UNITYSDK_OFFSET(0x1E37F920)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_2_OFFSET UNITYSDK_OFFSET(0x1E37FCF0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_3_OFFSET UNITYSDK_OFFSET(0x1E37FC50)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_4_OFFSET UNITYSDK_OFFSET(0x1E3800F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_5_OFFSET UNITYSDK_OFFSET(0x1E37FEA0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_6_OFFSET UNITYSDK_OFFSET(0x1E380270)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_7_OFFSET UNITYSDK_OFFSET(0x1E380D00)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_8_OFFSET UNITYSDK_OFFSET(0x1E3808C0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_9_OFFSET UNITYSDK_OFFSET(0x1E380D80)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_OFFSET UNITYSDK_OFFSET(0x1E37F7F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_1_OFFSET UNITYSDK_OFFSET(0x1E378F50)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_2_OFFSET UNITYSDK_OFFSET(0x1E378AC0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_3_OFFSET UNITYSDK_OFFSET(0x1E3788B0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_4_OFFSET UNITYSDK_OFFSET(0x1E378A80)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_5_OFFSET UNITYSDK_OFFSET(0x1E378760)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_6_OFFSET UNITYSDK_OFFSET(0x1E378D80)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_7_OFFSET UNITYSDK_OFFSET(0x1E378C40)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_8_OFFSET UNITYSDK_OFFSET(0x1E378CE0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_9_OFFSET UNITYSDK_OFFSET(0x1E378BA0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_OFFSET UNITYSDK_OFFSET(0x1E379020)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_1_OFFSET UNITYSDK_OFFSET(0x1E377B80)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_OFFSET UNITYSDK_OFFSET(0x1E377A90)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_1_OFFSET UNITYSDK_OFFSET(0x1E381040)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET UNITYSDK_OFFSET(0x1E37D110)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTCORE_OFFSET UNITYSDK_OFFSET(0x1E381C90)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTDIVISOR_OFFSET UNITYSDK_OFFSET(0x1E37EA10)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTSELF_OFFSET UNITYSDK_OFFSET(0x1E37E2C0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x1E37B240)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_2_OFFSET UNITYSDK_OFFSET(0x1E37E1B0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1E37B1A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E383170)

namespace System::Numerics
{
	inline static constexpr unsigned int BigIntegerCalculator_TypeDefinitionIndex = 3836;

	class BigIntegerCalculator : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MultiplyThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::Int32* StaticGet_ReducerThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x24);
		}
		static ::System::Int32* StaticGet_SquareThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::System::Int32* StaticGet_AllocationThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x2C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* Add(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Add_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_1_OFFSET))(a1, a2);
		}

		static ::System::Void Add_2(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4, ::System::UInt32* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void AddSelf(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDSELF_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::UInt32>* Subtract(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Subtract_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_1_OFFSET))(a1, a2);
		}

		static ::System::Void Subtract_2(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4, ::System::UInt32* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SubtractSelf(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTSELF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Compare(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_OFFSET))(a1, a2);
		}

		static ::System::Int32 Compare_1(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::UInt32>* Divide(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32& a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* Divide_1(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_1_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Remainder(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Divide_2(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>*& a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_2_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* Divide_3(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_3_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Remainder_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_1_OFFSET))(a1, a2);
		}

		static ::System::Void Divide_4(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4, ::System::UInt32* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::UInt32 AddDivisor(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4)
		{
			return ((::System::UInt32(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDDIVISOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 SubtractDivisor(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4, ::System::UInt64 a5)
		{
			return ((::System::UInt32(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTDIVISOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean DivideGuessTooBig(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDEGUESSTOOBIG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::System::UInt32>* CreateCopy(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_CREATECOPY_OFFSET))(a1);
		}

		static ::System::Int32 LeadingZeros(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEADINGZEROS_OFFSET))(a1);
		}

		static ::System::UInt32 Gcd(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_OFFSET))(a1, a2);
		}

		static ::System::UInt64 Gcd_1(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_1_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Gcd_2(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_2_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Gcd_3(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_3_OFFSET))(a1, a2);
		}

		static ::System::Void Gcd_4(::System::Numerics::BigIntegerCalculator_BitsBuffer& a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a2)
		{
			return ((::System::Void(*)(::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_4_OFFSET))(a1, a2);
		}

		static ::System::Void ExtractDigits(::System::Numerics::BigIntegerCalculator_BitsBuffer& a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a2, ::System::UInt64& a3, ::System::UInt64& a4)
		{
			return ((::System::Void(*)(::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_EXTRACTDIGITS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LehmerCore(::System::Numerics::BigIntegerCalculator_BitsBuffer& a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a2, ::System::Int64 a3, ::System::Int64 a4, ::System::Int64 a5, ::System::Int64 a6)
		{
			return ((::System::Void(*)(::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEHMERCORE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::Il2CppArray<::System::UInt32>* Pow(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_1(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* PowCore(::System::UInt32 a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_OFFSET))(a1, a2);
		}

		static ::System::Int32 PowBound(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWBOUND_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PowCore_1(::System::UInt32 a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a3, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 Pow_2(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_2_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 Pow_3(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_3_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 Pow_4(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_4_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 Pow_5(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_5_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 PowCore_2(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 PowCore_3(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_6(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_6_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_7(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_7_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_8(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_8_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_9(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_9_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* PowCore_4(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_4_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* PowCore_5(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PowCore_6(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a3, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a4, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void PowCore_7(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a3, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a4, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_7_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void PowCore_8(::Il2CppArray<::System::UInt32>* a1, ::System::Numerics::BigIntegerCalculator_FastReducer& a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a3, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a4, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_FastReducer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_8_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void PowCore_9(::System::UInt32 a1, ::System::Numerics::BigIntegerCalculator_FastReducer& a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a3, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a4, ::System::Numerics::BigIntegerCalculator_BitsBuffer& a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Numerics::BigIntegerCalculator_FastReducer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&, ::System::Numerics::BigIntegerCalculator_BitsBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_9_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 ActualLength(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_OFFSET))(a1);
		}

		static ::System::Int32 ActualLength_1(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Square(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET))(a1);
		}

		static ::System::Void Square_1(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::UInt32>* Multiply(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Multiply_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::System::Void Multiply_2(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4, ::System::UInt32* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SubtractCore(::System::UInt32* a1, ::System::Int32 a2, ::System::UInt32* a3, ::System::Int32 a4, ::System::UInt32* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTCORE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
