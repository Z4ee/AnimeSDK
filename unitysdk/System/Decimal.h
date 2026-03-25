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

#define SYSTEM_DECIMAL_ABS_OFFSET UNITYSDK_OFFSET(0x162A5AA0)
#define SYSTEM_DECIMAL_ADD_OFFSET UNITYSDK_OFFSET(0x162A5B20)
#define SYSTEM_DECIMAL_CEILING_OFFSET UNITYSDK_OFFSET(0x162A5B80)
#define SYSTEM_DECIMAL_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x20D4790)
#define SYSTEM_DECIMAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20D4780)
#define SYSTEM_DECIMAL_COMPARE_OFFSET UNITYSDK_OFFSET(0x162A5DD0)
#define SYSTEM_DECIMAL_DIVIDE_OFFSET UNITYSDK_OFFSET(0x162A5F10)
#define SYSTEM_DECIMAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20D4830)
#define SYSTEM_DECIMAL_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x162A60B0)
#define SYSTEM_DECIMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x20D47D0)
#define SYSTEM_DECIMAL_FCALLADDSUB_OFFSET UNITYSDK_OFFSET(0x162A5B70)
#define SYSTEM_DECIMAL_FCALLCOMPARE_OFFSET UNITYSDK_OFFSET(0x162A5E10)
#define SYSTEM_DECIMAL_FCALLDIVIDE_OFFSET UNITYSDK_OFFSET(0x162A5F60)
#define SYSTEM_DECIMAL_FCALLFLOOR_OFFSET UNITYSDK_OFFSET(0x162A60F0)
#define SYSTEM_DECIMAL_FCALLMULTIPLY_OFFSET UNITYSDK_OFFSET(0x162A7540)
#define SYSTEM_DECIMAL_FCALLROUND_OFFSET UNITYSDK_OFFSET(0x162A7640)
#define SYSTEM_DECIMAL_FCALLTOINT32_OFFSET UNITYSDK_OFFSET(0x16282DB0)
#define SYSTEM_DECIMAL_FCALLTRUNCATE_OFFSET UNITYSDK_OFFSET(0x162A7AE0)
#define SYSTEM_DECIMAL_FLOOR_OFFSET UNITYSDK_OFFSET(0x162A5D90)
#define SYSTEM_DECIMAL_FROMOACURRENCY_OFFSET UNITYSDK_OFFSET(0x162A5420)
#define SYSTEM_DECIMAL_GETBITS_OFFSET UNITYSDK_OFFSET(0x162A5880)
#define SYSTEM_DECIMAL_GETBYTES_OFFSET UNITYSDK_OFFSET(0x162A62B0)
#define SYSTEM_DECIMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20D4880)
#define SYSTEM_DECIMAL_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x20D4A20)
#define SYSTEM_DECIMAL_INTERNALADDUINT32RAWUNCHECKED_OFFSET UNITYSDK_OFFSET(0x162A6790)
#define SYSTEM_DECIMAL_INTERNALDIVREMUINT32_OFFSET UNITYSDK_OFFSET(0x162A67B0)
#define SYSTEM_DECIMAL_INTERNALROUNDFROMZERO_OFFSET UNITYSDK_OFFSET(0x162A6840)
#define SYSTEM_DECIMAL_MAX_OFFSET UNITYSDK_OFFSET(0x162A69E0)
#define SYSTEM_DECIMAL_MIN_OFFSET UNITYSDK_OFFSET(0x162A6A30)
#define SYSTEM_DECIMAL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x162A74F0)
#define SYSTEM_DECIMAL_NEGATE_OFFSET UNITYSDK_OFFSET(0x162A7550)
#define SYSTEM_DECIMAL_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x20D46F0)
#define SYSTEM_DECIMAL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x162A74A0)
#define SYSTEM_DECIMAL_OP_DECREMENT_OFFSET UNITYSDK_OFFSET(0x162A8000)
#define SYSTEM_DECIMAL_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x162A54C0)
#define SYSTEM_DECIMAL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x162A7290)
#define SYSTEM_DECIMAL_OP_EXPLICIT_10_OFFSET UNITYSDK_OFFSET(0x162A7F20)
#define SYSTEM_DECIMAL_OP_EXPLICIT_11_OFFSET UNITYSDK_OFFSET(0x162851D0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_12_OFFSET UNITYSDK_OFFSET(0x162858F0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x162863E0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x162A7CA0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x162A7CE0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x162A7D20)
#define SYSTEM_DECIMAL_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x162A7E20)
#define SYSTEM_DECIMAL_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x162A7E60)
#define SYSTEM_DECIMAL_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x162A7EA0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x162A7EE0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x162A53E0)
#define SYSTEM_DECIMAL_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x16286360)
#define SYSTEM_DECIMAL_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x162A8140)
#define SYSTEM_DECIMAL_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x162A8100)
#define SYSTEM_DECIMAL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x16285EF0)
#define SYSTEM_DECIMAL_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x16286080)
#define SYSTEM_DECIMAL_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x16286100)
#define SYSTEM_DECIMAL_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x162A7C80)
#define SYSTEM_DECIMAL_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x16286170)
#define SYSTEM_DECIMAL_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x162861F0)
#define SYSTEM_DECIMAL_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x16286270)
#define SYSTEM_DECIMAL_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x162862F0)
#define SYSTEM_DECIMAL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x16285F70)
#define SYSTEM_DECIMAL_OP_INCREMENT_OFFSET UNITYSDK_OFFSET(0x162A7F70)
#define SYSTEM_DECIMAL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1627EE00)
#define SYSTEM_DECIMAL_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x162A7460)
#define SYSTEM_DECIMAL_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x162A7200)
#define SYSTEM_DECIMAL_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x162A8090)
#define SYSTEM_DECIMAL_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x162A5390)
#define SYSTEM_DECIMAL_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x162A7240)
#define SYSTEM_DECIMAL_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x162A5CF0)
#define SYSTEM_DECIMAL_OP_UNARYPLUS_OFFSET UNITYSDK_OFFSET(0x162A7F60)
#define SYSTEM_DECIMAL_PARSE_1_OFFSET UNITYSDK_OFFSET(0x162A61F0)
#define SYSTEM_DECIMAL_PARSE_2_OFFSET UNITYSDK_OFFSET(0x162864F0)
#define SYSTEM_DECIMAL_PARSE_3_OFFSET UNITYSDK_OFFSET(0x162865B0)
#define SYSTEM_DECIMAL_PARSE_OFFSET UNITYSDK_OFFSET(0x162A61B0)
#define SYSTEM_DECIMAL_REMAINDER_OFFSET UNITYSDK_OFFSET(0x162A6A80)
#define SYSTEM_DECIMAL_ROUND_1_OFFSET UNITYSDK_OFFSET(0x162802B0)
#define SYSTEM_DECIMAL_ROUND_2_OFFSET UNITYSDK_OFFSET(0x162A7650)
#define SYSTEM_DECIMAL_ROUND_3_OFFSET UNITYSDK_OFFSET(0x162A76B0)
#define SYSTEM_DECIMAL_ROUND_OFFSET UNITYSDK_OFFSET(0x162A75D0)
#define SYSTEM_DECIMAL_SETBITS_OFFSET UNITYSDK_OFFSET(0x20D4660)
#define SYSTEM_DECIMAL_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x162A7830)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x20D4A30)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x20D4B50)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x20D4AC0)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x20D5000)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x148EF80)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x20D4F50)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x20D4BD0)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x20D4CD0)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x20D4D90)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x20D4AD0)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x20D4E90)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x20D5010)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x20D4C50)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x20D4D10)
#define SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x20D4E10)
#define SYSTEM_DECIMAL_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x20D4700)
#define SYSTEM_DECIMAL_TOBYTE_OFFSET UNITYSDK_OFFSET(0x16280F00)
#define SYSTEM_DECIMAL_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x162A64D0)
#define SYSTEM_DECIMAL_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x162A7A70)
#define SYSTEM_DECIMAL_TOINT16_OFFSET UNITYSDK_OFFSET(0x16281A50)
#define SYSTEM_DECIMAL_TOINT32_OFFSET UNITYSDK_OFFSET(0x162A7880)
#define SYSTEM_DECIMAL_TOINT64_OFFSET UNITYSDK_OFFSET(0x16283F40)
#define SYSTEM_DECIMAL_TOOACURRENCY_OFFSET UNITYSDK_OFFSET(0x162A52F0)
#define SYSTEM_DECIMAL_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x16280300)
#define SYSTEM_DECIMAL_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x162A7C00)
#define SYSTEM_DECIMAL_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x20D4960)
#define SYSTEM_DECIMAL_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x20D49A0)
#define SYSTEM_DECIMAL_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x20D49E0)
#define SYSTEM_DECIMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20D4920)
#define SYSTEM_DECIMAL_TOUINT16_OFFSET UNITYSDK_OFFSET(0x162825A0)
#define SYSTEM_DECIMAL_TOUINT32_OFFSET UNITYSDK_OFFSET(0x16283600)
#define SYSTEM_DECIMAL_TOUINT64_OFFSET UNITYSDK_OFFSET(0x16284990)
#define SYSTEM_DECIMAL_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x162A72D0)
#define SYSTEM_DECIMAL_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x162A6270)
#define SYSTEM_DECIMAL_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x162A6240)
#define SYSTEM_DECIMAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x162A8790)
#define SYSTEM_DECIMAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20D45D0)
#define SYSTEM_DECIMAL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x20D45F0)
#define SYSTEM_DECIMAL__CTOR_3_OFFSET UNITYSDK_OFFSET(0x20D4620)
#define SYSTEM_DECIMAL__CTOR_4_OFFSET UNITYSDK_OFFSET(0x20D4630)
#define SYSTEM_DECIMAL__CTOR_5_OFFSET UNITYSDK_OFFSET(0x20D4640)
#define SYSTEM_DECIMAL__CTOR_6_OFFSET UNITYSDK_OFFSET(0x20D4650)
#define SYSTEM_DECIMAL__CTOR_7_OFFSET UNITYSDK_OFFSET(0x20D4670)
#define SYSTEM_DECIMAL__CTOR_8_OFFSET UNITYSDK_OFFSET(0x20D4710)
#define SYSTEM_DECIMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x20D4590)

namespace System
{
	inline static constexpr unsigned int Decimal_TypeDefinitionIndex = 229;

	struct alignas(4) Decimal
	{
		static ::Il2CppArray<::System::UInt32>** StaticGet_Powers10()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x5D0);
		}
		static ::System::Decimal* StaticGet_NearPositiveZero()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x3D0);
		}
		static ::System::Decimal* StaticGet_NearNegativeZero()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x3E0);
		}
		static ::System::Decimal* StaticGet_One()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x3F0);
		}
		static ::System::Decimal* StaticGet_MinValue()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x400);
		}
		static ::System::Decimal* StaticGet_MinusOne()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x410);
		}
		static ::System::Decimal* StaticGet_Zero()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x420);
		}
		static ::System::Decimal* StaticGet_MaxValue()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(Decimal_TypeDefinitionIndex)->GetStaticField(0x430);
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

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_3_OFFSET))(this, value);
		}

		::System::Void _ctor_4(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_4_OFFSET))(this, value);
		}

		::System::Void _ctor_5(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_5_OFFSET))(this, value);
		}

		::System::Void _ctor_6(::Il2CppArray<::System::Int32>* bits)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_6_OFFSET))(this, bits);
		}

		::System::Void _ctor_7(::System::Int32 lo, ::System::Int32 mid, ::System::Int32 hi, ::System::Boolean isNegative, ::System::Byte scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_7_OFFSET))(this, lo, mid, hi, isNegative, scale);
		}

		::System::Void _ctor_8(::System::Int32 lo, ::System::Int32 mid, ::System::Int32 hi, ::System::Int32 flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CTOR_8_OFFSET))(this, lo, mid, hi, flags);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL__CCTOR_OFFSET))();
		}

		static ::System::Int64 ToOACurrency(::System::Decimal value)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOOACURRENCY_OFFSET))(value);
		}

		static ::System::Decimal FromOACurrency(::System::Int64 cy)
		{
			return ((::System::Decimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FROMOACURRENCY_OFFSET))(cy);
		}

		::System::Void SetBits(::Il2CppArray<::System::Int32>* bits)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SETBITS_OFFSET))(this, bits);
		}

		/*
		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ONSERIALIZING_OFFSET))(this, ctx);
		}
		*/

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		static ::System::Decimal Abs(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ABS_OFFSET))(d);
		}

		static ::System::Decimal Add(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ADD_OFFSET))(d1, d2);
		}

		static ::System::Void FCallAddSub(::System::Decimal& d1, ::System::Decimal& d2, ::System::Byte bSign)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::Decimal&, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLADDSUB_OFFSET))(d1, d2, bSign);
		}

		static ::System::Decimal Ceiling(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_CEILING_OFFSET))(d);
		}

		static ::System::Int32 Compare(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Int32(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_COMPARE_OFFSET))(d1, d2);
		}

		static ::System::Int32 FCallCompare(::System::Decimal& d1, ::System::Decimal& d2)
		{
			return ((::System::Int32(*)(::System::Decimal&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLCOMPARE_OFFSET))(d1, d2);
		}

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Decimal value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_COMPARETO_1_OFFSET))(this, value);
		}

		static ::System::Decimal Divide(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_DIVIDE_OFFSET))(d1, d2);
		}

		static ::System::Void FCallDivide(::System::Decimal& d1, ::System::Decimal& d2)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLDIVIDE_OFFSET))(d1, d2);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_EQUALS_OFFSET))(this, value);
		}

		::System::Boolean Equals_1(::System::Decimal value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_EQUALS_1_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Equals_2(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_EQUALS_2_OFFSET))(d1, d2);
		}

		static ::System::Decimal Floor(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FLOOR_OFFSET))(d);
		}

		static ::System::Void FCallFloor(::System::Decimal& d)
		{
			return ((::System::Void(*)(::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLFLOOR_OFFSET))(d);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* ToString_2(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSTRING_2_OFFSET))(this, provider);
		}

		::System::String* ToString_3(::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSTRING_3_OFFSET))(this, format, provider);
		}

		static ::System::Decimal Parse(::System::String* s)
		{
			return ((::System::Decimal(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_PARSE_OFFSET))(s);
		}

		static ::System::Decimal Parse_1(::System::String* s, ::System::Globalization::NumberStyles style)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::Globalization::NumberStyles))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_PARSE_1_OFFSET))(s, style);
		}

		static ::System::Decimal Parse_2(::System::String* s, ::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_PARSE_2_OFFSET))(s, provider);
		}

		static ::System::Decimal Parse_3(::System::String* s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_PARSE_3_OFFSET))(s, style, provider);
		}

		static ::System::Boolean TryParse(::System::String* s, ::System::Decimal& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TRYPARSE_OFFSET))(s, result);
		}

		static ::System::Boolean TryParse_1(::System::String* s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ::System::Decimal& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::IFormatProvider*, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TRYPARSE_1_OFFSET))(s, style, provider, result);
		}

		static ::Il2CppArray<::System::Int32>* GetBits(::System::Decimal d)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_GETBITS_OFFSET))(d);
		}

		static ::System::Void GetBytes(::System::Decimal d, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::System::Decimal, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_GETBYTES_OFFSET))(d, buffer);
		}

		static ::System::Decimal ToDecimal(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Decimal(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TODECIMAL_OFFSET))(buffer);
		}

		static ::System::Void InternalAddUInt32RawUnchecked(::System::Decimal& value, ::System::UInt32 i)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_INTERNALADDUINT32RAWUNCHECKED_OFFSET))(value, i);
		}

		static ::System::UInt32 InternalDivRemUInt32(::System::Decimal& value, ::System::UInt32 divisor)
		{
			return ((::System::UInt32(*)(::System::Decimal&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_INTERNALDIVREMUINT32_OFFSET))(value, divisor);
		}

		static ::System::Void InternalRoundFromZero(::System::Decimal& d, ::System::Int32 decimalCount)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_INTERNALROUNDFROMZERO_OFFSET))(d, decimalCount);
		}

		static ::System::Decimal Max(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_MAX_OFFSET))(d1, d2);
		}

		static ::System::Decimal Min(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_MIN_OFFSET))(d1, d2);
		}

		static ::System::Decimal Remainder(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_REMAINDER_OFFSET))(d1, d2);
		}

		static ::System::Decimal Multiply(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_MULTIPLY_OFFSET))(d1, d2);
		}

		static ::System::Void FCallMultiply(::System::Decimal& d1, ::System::Decimal& d2)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLMULTIPLY_OFFSET))(d1, d2);
		}

		static ::System::Decimal Negate(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_NEGATE_OFFSET))(d);
		}

		static ::System::Decimal Round(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ROUND_OFFSET))(d);
		}

		static ::System::Decimal Round_1(::System::Decimal d, ::System::Int32 decimals)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ROUND_1_OFFSET))(d, decimals);
		}

		static ::System::Decimal Round_2(::System::Decimal d, ::System::MidpointRounding mode)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ROUND_2_OFFSET))(d, mode);
		}

		static ::System::Decimal Round_3(::System::Decimal d, ::System::Int32 decimals, ::System::MidpointRounding mode)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Int32, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_ROUND_3_OFFSET))(d, decimals, mode);
		}

		static ::System::Void FCallRound(::System::Decimal& d, ::System::Int32 decimals)
		{
			return ((::System::Void(*)(::System::Decimal&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLROUND_OFFSET))(d, decimals);
		}

		static ::System::Decimal Subtract(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SUBTRACT_OFFSET))(d1, d2);
		}

		static ::System::Byte ToByte(::System::Decimal value)
		{
			return ((::System::Byte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOBYTE_OFFSET))(value);
		}

		static ::System::SByte ToSByte(::System::Decimal value)
		{
			return ((::System::SByte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSBYTE_OFFSET))(value);
		}

		static ::System::Int16 ToInt16(::System::Decimal value)
		{
			return ((::System::Int16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOINT16_OFFSET))(value);
		}

		static ::System::Double ToDouble(::System::Decimal d)
		{
			return ((::System::Double(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TODOUBLE_OFFSET))(d);
		}

		static ::System::Int32 FCallToInt32(::System::Decimal d)
		{
			return ((::System::Int32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLTOINT32_OFFSET))(d);
		}

		static ::System::Int32 ToInt32(::System::Decimal d)
		{
			return ((::System::Int32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOINT32_OFFSET))(d);
		}

		static ::System::Int64 ToInt64(::System::Decimal d)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOINT64_OFFSET))(d);
		}

		static ::System::UInt16 ToUInt16(::System::Decimal value)
		{
			return ((::System::UInt16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOUINT16_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32(::System::Decimal d)
		{
			return ((::System::UInt32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOUINT32_OFFSET))(d);
		}

		static ::System::UInt64 ToUInt64(::System::Decimal d)
		{
			return ((::System::UInt64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOUINT64_OFFSET))(d);
		}

		static ::System::Single ToSingle(::System::Decimal d)
		{
			return ((::System::Single(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TOSINGLE_OFFSET))(d);
		}

		static ::System::Decimal Truncate(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_TRUNCATE_OFFSET))(d);
		}

		static ::System::Void FCallTruncate(::System::Decimal& d)
		{
			return ((::System::Void(*)(::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_FCALLTRUNCATE_OFFSET))(d);
		}

		static ::System::Decimal op_Implicit(::System::Byte value)
		{
			return ((::System::Decimal(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_OFFSET))(value);
		}

		static ::System::Decimal op_Implicit_1(::System::SByte value)
		{
			return ((::System::Decimal(*)(::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::System::Decimal op_Implicit_2(::System::Int16 value)
		{
			return ((::System::Decimal(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::System::Decimal op_Implicit_3(::System::UInt16 value)
		{
			return ((::System::Decimal(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_3_OFFSET))(value);
		}

		static ::System::Decimal op_Implicit_4(::System::Char value)
		{
			return ((::System::Decimal(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_4_OFFSET))(value);
		}

		static ::System::Decimal op_Implicit_5(::System::Int32 value)
		{
			return ((::System::Decimal(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_5_OFFSET))(value);
		}

		static ::System::Decimal op_Implicit_6(::System::UInt32 value)
		{
			return ((::System::Decimal(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_6_OFFSET))(value);
		}

		static ::System::Decimal op_Implicit_7(::System::Int64 value)
		{
			return ((::System::Decimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_7_OFFSET))(value);
		}

		static ::System::Decimal op_Implicit_8(::System::UInt64 value)
		{
			return ((::System::Decimal(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_IMPLICIT_8_OFFSET))(value);
		}

		static ::System::Decimal op_Explicit(::System::Single value)
		{
			return ((::System::Decimal(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_OFFSET))(value);
		}

		static ::System::Decimal op_Explicit_1(::System::Double value)
		{
			return ((::System::Decimal(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_1_OFFSET))(value);
		}

		static ::System::Byte op_Explicit_2(::System::Decimal value)
		{
			return ((::System::Byte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_2_OFFSET))(value);
		}

		static ::System::SByte op_Explicit_3(::System::Decimal value)
		{
			return ((::System::SByte(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_3_OFFSET))(value);
		}

		static ::System::Char op_Explicit_4(::System::Decimal value)
		{
			return ((::System::Char(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_4_OFFSET))(value);
		}

		static ::System::Int16 op_Explicit_5(::System::Decimal value)
		{
			return ((::System::Int16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_5_OFFSET))(value);
		}

		static ::System::UInt16 op_Explicit_6(::System::Decimal value)
		{
			return ((::System::UInt16(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_6_OFFSET))(value);
		}

		static ::System::Int32 op_Explicit_7(::System::Decimal value)
		{
			return ((::System::Int32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_7_OFFSET))(value);
		}

		static ::System::UInt32 op_Explicit_8(::System::Decimal value)
		{
			return ((::System::UInt32(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_8_OFFSET))(value);
		}

		static ::System::Int64 op_Explicit_9(::System::Decimal value)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_9_OFFSET))(value);
		}

		static ::System::UInt64 op_Explicit_10(::System::Decimal value)
		{
			return ((::System::UInt64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_10_OFFSET))(value);
		}

		static ::System::Single op_Explicit_11(::System::Decimal value)
		{
			return ((::System::Single(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_11_OFFSET))(value);
		}

		static ::System::Double op_Explicit_12(::System::Decimal value)
		{
			return ((::System::Double(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EXPLICIT_12_OFFSET))(value);
		}

		static ::System::Decimal op_UnaryPlus(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_UNARYPLUS_OFFSET))(d);
		}

		static ::System::Decimal op_UnaryNegation(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_UNARYNEGATION_OFFSET))(d);
		}

		static ::System::Decimal op_Increment(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_INCREMENT_OFFSET))(d);
		}

		static ::System::Decimal op_Decrement(::System::Decimal d)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_DECREMENT_OFFSET))(d);
		}

		static ::System::Decimal op_Addition(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_ADDITION_OFFSET))(d1, d2);
		}

		static ::System::Decimal op_Subtraction(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_SUBTRACTION_OFFSET))(d1, d2);
		}

		static ::System::Decimal op_Multiply(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_MULTIPLY_OFFSET))(d1, d2);
		}

		static ::System::Decimal op_Division(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_DIVISION_OFFSET))(d1, d2);
		}

		static ::System::Decimal op_Modulus(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_MODULUS_OFFSET))(d1, d2);
		}

		static ::System::Boolean op_Equality(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_EQUALITY_OFFSET))(d1, d2);
		}

		static ::System::Boolean op_Inequality(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_INEQUALITY_OFFSET))(d1, d2);
		}

		static ::System::Boolean op_LessThan(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_LESSTHAN_OFFSET))(d1, d2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_LESSTHANOREQUAL_OFFSET))(d1, d2);
		}

		static ::System::Boolean op_GreaterThan(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_GREATERTHAN_OFFSET))(d1, d2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::Decimal d1, ::System::Decimal d2)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_OP_GREATERTHANOREQUAL_OFFSET))(d1, d2);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, provider);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, provider);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, provider);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, provider);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, provider);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, provider);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, provider);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, provider);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, provider);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, provider);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, provider);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, provider);
		}

		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, provider);
		}

		/*
		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, provider);
		}
		*/

		::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, type, provider);
		}
	};
}
