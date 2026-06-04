#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/MidpointRounding.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_DECIMAL_ABS_OFFSET UNITYSDK_OFFSET(0x1868BA10)
#define SYSTEM_DECIMAL_ADD_OFFSET UNITYSDK_OFFSET(0x1868BA90)
#define SYSTEM_DECIMAL_CEILING_OFFSET UNITYSDK_OFFSET(0x1868BAF0)
#define SYSTEM_DECIMAL_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3836380)
#define SYSTEM_DECIMAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3836370)
#define SYSTEM_DECIMAL_COMPARE_OFFSET UNITYSDK_OFFSET(0x1868BD40)
#define SYSTEM_DECIMAL_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1868BE80)
#define SYSTEM_DECIMAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3836420)
#define SYSTEM_DECIMAL_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1868C020)
#define SYSTEM_DECIMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x38363C0)
#define SYSTEM_DECIMAL_FCALLADDSUB_OFFSET UNITYSDK_OFFSET(0x1868BAE0)
#define SYSTEM_DECIMAL_FCALLCOMPARE_OFFSET UNITYSDK_OFFSET(0x1868BD80)
#define SYSTEM_DECIMAL_FCALLDIVIDE_OFFSET UNITYSDK_OFFSET(0x1868BED0)
#define SYSTEM_DECIMAL_FCALLFLOOR_OFFSET UNITYSDK_OFFSET(0x1868C060)
#define SYSTEM_DECIMAL_FCALLMULTIPLY_OFFSET UNITYSDK_OFFSET(0x1868D2A0)
#define SYSTEM_DECIMAL_FCALLROUND_OFFSET UNITYSDK_OFFSET(0x1868D3A0)
#define SYSTEM_DECIMAL_FCALLTOINT32_OFFSET UNITYSDK_OFFSET(0x18668B40)
#define SYSTEM_DECIMAL_FCALLTRUNCATE_OFFSET UNITYSDK_OFFSET(0x1868D840)
#define SYSTEM_DECIMAL_FLOOR_OFFSET UNITYSDK_OFFSET(0x1868BD00)
#define SYSTEM_DECIMAL_FROMOACURRENCY_OFFSET UNITYSDK_OFFSET(0x1868B330)
#define SYSTEM_DECIMAL_GETBITS_OFFSET UNITYSDK_OFFSET(0x1868B7D0)
#define SYSTEM_DECIMAL_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1868C220)
#define SYSTEM_DECIMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3836470)
#define SYSTEM_DECIMAL_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x3836610)
#define SYSTEM_DECIMAL_INTERNALADDUINT32RAWUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1868C500)
#define SYSTEM_DECIMAL_INTERNALDIVREMUINT32_OFFSET UNITYSDK_OFFSET(0x1868C520)
#define SYSTEM_DECIMAL_INTERNALROUNDFROMZERO_OFFSET UNITYSDK_OFFSET(0x1868C5B0)
#define SYSTEM_DECIMAL_MAX_OFFSET UNITYSDK_OFFSET(0x1868C740)
#define SYSTEM_DECIMAL_MIN_OFFSET UNITYSDK_OFFSET(0x1868C790)
#define SYSTEM_DECIMAL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1868D250)
#define SYSTEM_DECIMAL_NEGATE_OFFSET UNITYSDK_OFFSET(0x1868D2B0)
#define SYSTEM_DECIMAL_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x38362E0)
#define SYSTEM_DECIMAL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1868D200)
#define SYSTEM_DECIMAL_OP_DECREMENT_OFFSET UNITYSDK_OFFSET(0x1868DD60)
#define SYSTEM_DECIMAL_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1868B3D0)
#define SYSTEM_DECIMAL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1868CFF0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_10_OFFSET UNITYSDK_OFFSET(0x1868DC80)
#define SYSTEM_DECIMAL_OP_EXPLICIT_11_OFFSET UNITYSDK_OFFSET(0x1866AFA0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_12_OFFSET UNITYSDK_OFFSET(0x1866B700)
#define SYSTEM_DECIMAL_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1866C220)
#define SYSTEM_DECIMAL_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1868DA00)
#define SYSTEM_DECIMAL_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1868DA40)
#define SYSTEM_DECIMAL_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1868DA80)
#define SYSTEM_DECIMAL_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1868DB80)
#define SYSTEM_DECIMAL_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1868DBC0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1868DC00)
#define SYSTEM_DECIMAL_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1868DC40)
#define SYSTEM_DECIMAL_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1868B2F0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1866C1A0)
#define SYSTEM_DECIMAL_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1868DEA0)
#define SYSTEM_DECIMAL_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1868DE60)
#define SYSTEM_DECIMAL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1866BD30)
#define SYSTEM_DECIMAL_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1866BEC0)
#define SYSTEM_DECIMAL_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1866BF40)
#define SYSTEM_DECIMAL_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1868D9E0)
#define SYSTEM_DECIMAL_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1866BFB0)
#define SYSTEM_DECIMAL_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1866C030)
#define SYSTEM_DECIMAL_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1866C0B0)
#define SYSTEM_DECIMAL_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1866C130)
#define SYSTEM_DECIMAL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1866BDB0)
#define SYSTEM_DECIMAL_OP_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1868DCD0)
#define SYSTEM_DECIMAL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18664A50)
#define SYSTEM_DECIMAL_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1868D1C0)
#define SYSTEM_DECIMAL_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1868CF60)
#define SYSTEM_DECIMAL_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1868DDF0)
#define SYSTEM_DECIMAL_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1868B2A0)
#define SYSTEM_DECIMAL_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1868CFA0)
#define SYSTEM_DECIMAL_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1868BC60)
#define SYSTEM_DECIMAL_OP_UNARYPLUS_OFFSET UNITYSDK_OFFSET(0x1868DCC0)
#define SYSTEM_DECIMAL_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1868C160)
#define SYSTEM_DECIMAL_PARSE_2_OFFSET UNITYSDK_OFFSET(0x1866C330)
#define SYSTEM_DECIMAL_PARSE_3_OFFSET UNITYSDK_OFFSET(0x1866C3F0)
#define SYSTEM_DECIMAL_PARSE_OFFSET UNITYSDK_OFFSET(0x1868C120)
#define SYSTEM_DECIMAL_REMAINDER_OFFSET UNITYSDK_OFFSET(0x1868C7E0)
#define SYSTEM_DECIMAL_ROUND_1_OFFSET UNITYSDK_OFFSET(0x18665F80)
#define SYSTEM_DECIMAL_ROUND_2_OFFSET UNITYSDK_OFFSET(0x1868D3B0)
#define SYSTEM_DECIMAL_ROUND_3_OFFSET UNITYSDK_OFFSET(0x1868D410)
#define SYSTEM_DECIMAL_ROUND_OFFSET UNITYSDK_OFFSET(0x1868D330)
#define SYSTEM_DECIMAL_SETBITS_OFFSET UNITYSDK_OFFSET(0x3836250)
#define SYSTEM_DECIMAL_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1868D590)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x3836620)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x3836740)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x38366B0)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x3836BF0)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x2BC6740)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x3836B40)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x38367C0)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x38368C0)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x3836980)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x38366C0)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x3836A80)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x3836C00)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x3836840)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x3836900)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x3836A00)
#define SYSTEM_DECIMAL_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x38362F0)
#define SYSTEM_DECIMAL_TOBYTE_OFFSET UNITYSDK_OFFSET(0x18666C00)
#define SYSTEM_DECIMAL_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1868C330)
#define SYSTEM_DECIMAL_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1868D7D0)
#define SYSTEM_DECIMAL_TOINT16_OFFSET UNITYSDK_OFFSET(0x18667780)
#define SYSTEM_DECIMAL_TOINT32_OFFSET UNITYSDK_OFFSET(0x1868D5E0)
#define SYSTEM_DECIMAL_TOINT64_OFFSET UNITYSDK_OFFSET(0x18669D10)
#define SYSTEM_DECIMAL_TOOACURRENCY_OFFSET UNITYSDK_OFFSET(0x1868B200)
#define SYSTEM_DECIMAL_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x18665FD0)
#define SYSTEM_DECIMAL_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1868D960)
#define SYSTEM_DECIMAL_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3836550)
#define SYSTEM_DECIMAL_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3836590)
#define SYSTEM_DECIMAL_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x38365D0)
#define SYSTEM_DECIMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3836510)
#define SYSTEM_DECIMAL_TOUINT16_OFFSET UNITYSDK_OFFSET(0x18668300)
#define SYSTEM_DECIMAL_TOUINT32_OFFSET UNITYSDK_OFFSET(0x186693C0)
#define SYSTEM_DECIMAL_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1866A730)
#define SYSTEM_DECIMAL_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x1868D030)
#define SYSTEM_DECIMAL_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1868C1E0)
#define SYSTEM_DECIMAL_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1868C1B0)
#define SYSTEM_DECIMAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1868E4F0)
#define SYSTEM_DECIMAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x38361D0)
#define SYSTEM_DECIMAL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x38361F0)
#define SYSTEM_DECIMAL__CTOR_3_OFFSET UNITYSDK_OFFSET(0x2CBBE20)
#define SYSTEM_DECIMAL__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3836220)
#define SYSTEM_DECIMAL__CTOR_5_OFFSET UNITYSDK_OFFSET(0x3836230)
#define SYSTEM_DECIMAL__CTOR_6_OFFSET UNITYSDK_OFFSET(0x3836240)
#define SYSTEM_DECIMAL__CTOR_7_OFFSET UNITYSDK_OFFSET(0x3836260)
#define SYSTEM_DECIMAL__CTOR_8_OFFSET UNITYSDK_OFFSET(0x3836300)
#define SYSTEM_DECIMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x3836190)

namespace System
{
	inline static constexpr unsigned int Decimal_TypeDefinitionIndex = 228;

	struct alignas(4) Decimal
	{
		static ::Il2CppArray<::System::UInt32>** StaticGet_Powers10()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x9C0);
		}
		static ::System::Decimal* StaticGet_NearPositiveZero()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x5A0);
		}
		static ::System::Decimal* StaticGet_NearNegativeZero()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x5B0);
		}
		static ::System::Decimal* StaticGet_One()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x5C0);
		}
		static ::System::Decimal* StaticGet_MinValue()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x5D0);
		}
		static ::System::Decimal* StaticGet_MinusOne()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x5E0);
		}
		static ::System::Decimal* StaticGet_Zero()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x5F0);
		}
		static ::System::Decimal* StaticGet_MaxValue()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x600);
		}
		// static const ::System::Int32 SignMask = 0x80000000; // 0x0
		// static const ::System::Byte DECIMAL_NEG = 0x80; // 0x0
		// static const ::System::Byte DECIMAL_ADD = 0x0; // 0x0
		// static const ::System::Int32 ScaleMask = 0xFF0000; // 0x0
		// static const ::System::Int32 ScaleShift = 0x10; // 0x0
		// static const ::System::Int32 MaxInt32Scale = 0x9; // 0x0
		::System::Int32 flags; // 0x10
		::System::Int32 hi; // 0x14
		::System::Int32 lo; // 0x18
		::System::Int32 mid; // 0x1C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_4_OFFSET))(this, a1);
		}

		::System::Void _ctor_5(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_5_OFFSET))(this, a1);
		}

		::System::Void _ctor_6(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_6_OFFSET))(this, a1);
		}

		::System::Void _ctor_7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Byte a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_7_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_8_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CCTOR_OFFSET))();
		}

		static ::System::Int64 ToOACurrency(::System::Decimal a1)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOOACURRENCY_OFFSET))(a1);
		}

		static ::System::Decimal FromOACurrency(::System::Int64 a1)
		{
			return ((::System::Decimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FROMOACURRENCY_OFFSET))(a1);
		}

		::System::Void SetBits(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SETBITS_OFFSET))(this, a1);
		}

		/*
		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ONSERIALIZING_OFFSET))(this, a1);
		}
		*/

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		static ::System::Decimal Abs(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ABS_OFFSET))(a1);
		}

		static ::System::Decimal Add(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ADD_OFFSET))(a1, a2);
		}

		static ::System::Void FCallAddSub(::System::Decimal& a1, ::System::Decimal& a2, ::System::Byte a3)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::Decimal&, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLADDSUB_OFFSET))(a1, a2, a3);
		}

		static ::System::Decimal Ceiling(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_CEILING_OFFSET))(a1);
		}

		static ::System::Int32 Compare(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Int32(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_COMPARE_OFFSET))(a1, a2);
		}

		static ::System::Int32 FCallCompare(::System::Decimal& a1, ::System::Decimal& a2)
		{
			return ((::System::Int32(*)(::System::Decimal&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLCOMPARE_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::System::Decimal a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_COMPARETO_1_OFFSET))(this, a1);
		}

		static ::System::Decimal Divide(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_DIVIDE_OFFSET))(a1, a2);
		}

		static ::System::Void FCallDivide(::System::Decimal& a1, ::System::Decimal& a2)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLDIVIDE_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Decimal a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Equals_2(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_EQUALS_2_OFFSET))(a1, a2);
		}

		static ::System::Decimal Floor(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FLOOR_OFFSET))(a1);
		}

		static ::System::Void FCallFloor(::System::Decimal& a1)
		{
			return ((::System::Void(*)(::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLFLOOR_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSTRING_3_OFFSET))(this, a1, a2);
		}

		static ::System::Decimal Parse(::System::String* a1)
		{
			return ((::System::Decimal(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_PARSE_OFFSET))(a1);
		}

		static ::System::Decimal Parse_1(::System::String* a1, ::System::Globalization::NumberStyles a2)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::Globalization::NumberStyles))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_PARSE_1_OFFSET))(a1, a2);
		}

		static ::System::Decimal Parse_2(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_PARSE_2_OFFSET))(a1, a2);
		}

		static ::System::Decimal Parse_3(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::IFormatProvider* a3)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_PARSE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Decimal& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParse_1(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::IFormatProvider* a3, ::System::Decimal& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::IFormatProvider*, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TRYPARSE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::Int32>* GetBits(::System::Decimal a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_GETBITS_OFFSET))(a1);
		}

		static ::System::Void GetBytes(::System::Decimal a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::System::Decimal, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_GETBYTES_OFFSET))(a1, a2);
		}

		static ::System::Decimal ToDecimal(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Decimal(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TODECIMAL_OFFSET))(a1);
		}

		static ::System::Void InternalAddUInt32RawUnchecked(::System::Decimal& a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_INTERNALADDUINT32RAWUNCHECKED_OFFSET))(a1, a2);
		}

		static ::System::UInt32 InternalDivRemUInt32(::System::Decimal& a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::Decimal&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_INTERNALDIVREMUINT32_OFFSET))(a1, a2);
		}

		static ::System::Void InternalRoundFromZero(::System::Decimal& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_INTERNALROUNDFROMZERO_OFFSET))(a1, a2);
		}

		static ::System::Decimal Max(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_MAX_OFFSET))(a1, a2);
		}

		static ::System::Decimal Min(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_MIN_OFFSET))(a1, a2);
		}

		static ::System::Decimal Remainder(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_REMAINDER_OFFSET))(a1, a2);
		}

		static ::System::Decimal Multiply(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::System::Void FCallMultiply(::System::Decimal& a1, ::System::Decimal& a2)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLMULTIPLY_OFFSET))(a1, a2);
		}

		static ::System::Decimal Negate(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_NEGATE_OFFSET))(a1);
		}

		static ::System::Decimal Round(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ROUND_OFFSET))(a1);
		}

		static ::System::Decimal Round_1(::System::Decimal a1, ::System::Int32 a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ROUND_1_OFFSET))(a1, a2);
		}

		static ::System::Decimal Round_2(::System::Decimal a1, ::System::MidpointRounding a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ROUND_2_OFFSET))(a1, a2);
		}

		static ::System::Decimal Round_3(::System::Decimal a1, ::System::Int32 a2, ::System::MidpointRounding a3)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Int32, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ROUND_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FCallRound(::System::Decimal& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLROUND_OFFSET))(a1, a2);
		}

		static ::System::Decimal Subtract(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SUBTRACT_OFFSET))(a1, a2);
		}

		static ::System::Byte ToByte(::System::Decimal a1)
		{
			return ((::System::Byte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOBYTE_OFFSET))(a1);
		}

		static ::System::SByte ToSByte(::System::Decimal a1)
		{
			return ((::System::SByte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSBYTE_OFFSET))(a1);
		}

		static ::System::Int16 ToInt16(::System::Decimal a1)
		{
			return ((::System::Int16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOINT16_OFFSET))(a1);
		}

		static ::System::Double ToDouble(::System::Decimal a1)
		{
			return ((::System::Double(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TODOUBLE_OFFSET))(a1);
		}

		static ::System::Int32 FCallToInt32(::System::Decimal a1)
		{
			return ((::System::Int32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLTOINT32_OFFSET))(a1);
		}

		static ::System::Int32 ToInt32(::System::Decimal a1)
		{
			return ((::System::Int32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOINT32_OFFSET))(a1);
		}

		static ::System::Int64 ToInt64(::System::Decimal a1)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOINT64_OFFSET))(a1);
		}

		static ::System::UInt16 ToUInt16(::System::Decimal a1)
		{
			return ((::System::UInt16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOUINT16_OFFSET))(a1);
		}

		static ::System::UInt32 ToUInt32(::System::Decimal a1)
		{
			return ((::System::UInt32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOUINT32_OFFSET))(a1);
		}

		static ::System::UInt64 ToUInt64(::System::Decimal a1)
		{
			return ((::System::UInt64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOUINT64_OFFSET))(a1);
		}

		static ::System::Single ToSingle(::System::Decimal a1)
		{
			return ((::System::Single(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSINGLE_OFFSET))(a1);
		}

		static ::System::Decimal Truncate(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TRUNCATE_OFFSET))(a1);
		}

		static ::System::Void FCallTruncate(::System::Decimal& a1)
		{
			return ((::System::Void(*)(::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLTRUNCATE_OFFSET))(a1);
		}

		static ::System::Decimal op_Implicit(::System::Byte a1)
		{
			return ((::System::Decimal(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Decimal op_Implicit_1(::System::SByte a1)
		{
			return ((::System::Decimal(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::System::Decimal op_Implicit_2(::System::Int16 a1)
		{
			return ((::System::Decimal(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::System::Decimal op_Implicit_3(::System::UInt16 a1)
		{
			return ((::System::Decimal(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::System::Decimal op_Implicit_4(::System::Char a1)
		{
			return ((::System::Decimal(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::System::Decimal op_Implicit_5(::System::Int32 a1)
		{
			return ((::System::Decimal(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_5_OFFSET))(a1);
		}

		static ::System::Decimal op_Implicit_6(::System::UInt32 a1)
		{
			return ((::System::Decimal(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_6_OFFSET))(a1);
		}

		static ::System::Decimal op_Implicit_7(::System::Int64 a1)
		{
			return ((::System::Decimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_7_OFFSET))(a1);
		}

		static ::System::Decimal op_Implicit_8(::System::UInt64 a1)
		{
			return ((::System::Decimal(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_8_OFFSET))(a1);
		}

		static ::System::Decimal op_Explicit(::System::Single a1)
		{
			return ((::System::Decimal(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::System::Decimal op_Explicit_1(::System::Double a1)
		{
			return ((::System::Decimal(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_1_OFFSET))(a1);
		}

		static ::System::Byte op_Explicit_2(::System::Decimal a1)
		{
			return ((::System::Byte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_2_OFFSET))(a1);
		}

		static ::System::SByte op_Explicit_3(::System::Decimal a1)
		{
			return ((::System::SByte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_3_OFFSET))(a1);
		}

		static ::System::Char op_Explicit_4(::System::Decimal a1)
		{
			return ((::System::Char(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_4_OFFSET))(a1);
		}

		static ::System::Int16 op_Explicit_5(::System::Decimal a1)
		{
			return ((::System::Int16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_5_OFFSET))(a1);
		}

		static ::System::UInt16 op_Explicit_6(::System::Decimal a1)
		{
			return ((::System::UInt16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_6_OFFSET))(a1);
		}

		static ::System::Int32 op_Explicit_7(::System::Decimal a1)
		{
			return ((::System::Int32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_7_OFFSET))(a1);
		}

		static ::System::UInt32 op_Explicit_8(::System::Decimal a1)
		{
			return ((::System::UInt32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_8_OFFSET))(a1);
		}

		static ::System::Int64 op_Explicit_9(::System::Decimal a1)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_9_OFFSET))(a1);
		}

		static ::System::UInt64 op_Explicit_10(::System::Decimal a1)
		{
			return ((::System::UInt64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_10_OFFSET))(a1);
		}

		static ::System::Single op_Explicit_11(::System::Decimal a1)
		{
			return ((::System::Single(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_11_OFFSET))(a1);
		}

		static ::System::Double op_Explicit_12(::System::Decimal a1)
		{
			return ((::System::Double(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_12_OFFSET))(a1);
		}

		static ::System::Decimal op_UnaryPlus(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_UNARYPLUS_OFFSET))(a1);
		}

		static ::System::Decimal op_UnaryNegation(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::System::Decimal op_Increment(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_INCREMENT_OFFSET))(a1);
		}

		static ::System::Decimal op_Decrement(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_DECREMENT_OFFSET))(a1);
		}

		static ::System::Decimal op_Addition(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::System::Decimal op_Subtraction(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::System::Decimal op_Multiply(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::System::Decimal op_Division(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::System::Decimal op_Modulus(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_MODULUS_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, a1);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, a1);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, a1);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, a1);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, a1);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, a1);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, a1);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, a1);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, a1);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, a1);
		}

		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, a1);
		}

		/*
		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, a1);
		}
		*/

		::System::Object* System_IConvertible_ToType(::System::Type* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, a1, a2);
		}
	};
}
