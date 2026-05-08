#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_COMPLEX_ABS_OFFSET UNITYSDK_OFFSET(0x1B1DCE30)
#define SYSTEM_NUMERICS_COMPLEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x953CE0)
#define SYSTEM_NUMERICS_COMPLEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x953C00)
#define SYSTEM_NUMERICS_COMPLEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x953D70)
#define SYSTEM_NUMERICS_COMPLEX_GET_IMAGINARY_OFFSET UNITYSDK_OFFSET(0x3B0F30)
#define SYSTEM_NUMERICS_COMPLEX_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x953BF0)
#define SYSTEM_NUMERICS_COMPLEX_GET_REAL_OFFSET UNITYSDK_OFFSET(0x312A10)
#define SYSTEM_NUMERICS_COMPLEX_HYPOT_OFFSET UNITYSDK_OFFSET(0x1B1DD060)
#define SYSTEM_NUMERICS_COMPLEX_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B1DCF40)
#define SYSTEM_NUMERICS_COMPLEX_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B1DCFB0)
#define SYSTEM_NUMERICS_COMPLEX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B1DD100)
#define SYSTEM_NUMERICS_COMPLEX_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B1DDC90)
#define SYSTEM_NUMERICS_COMPLEX_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B1DDC70)
#define SYSTEM_NUMERICS_COMPLEX_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B1DCF80)
#define SYSTEM_NUMERICS_COMPLEX_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B1DCF60)
#define SYSTEM_NUMERICS_COMPLEX_POW_1_OFFSET UNITYSDK_OFFSET(0x1B1DDBD0)
#define SYSTEM_NUMERICS_COMPLEX_POW_OFFSET UNITYSDK_OFFSET(0x1B1DD8A0)
#define SYSTEM_NUMERICS_COMPLEX_SQRT_OFFSET UNITYSDK_OFFSET(0x1B1DD460)
#define SYSTEM_NUMERICS_COMPLEX_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x953E70)
#define SYSTEM_NUMERICS_COMPLEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x953DB0)
#define SYSTEM_NUMERICS_COMPLEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1DDCA0)
#define SYSTEM_NUMERICS_COMPLEX__CTOR_OFFSET UNITYSDK_OFFSET(0x918440)

namespace System::Numerics
{
	inline static constexpr unsigned int Complex_TypeDefinitionIndex = 6485;

	struct alignas(8) Complex
	{
		static ::System::Numerics::Complex* StaticGet_ImaginaryOne()
		{
			return (::System::Numerics::Complex*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x2FF0);
		}
		static ::System::Numerics::Complex* StaticGet_One()
		{
			return (::System::Numerics::Complex*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x3000);
		}
		static ::System::Double* StaticGet_s_asinOverflowThreshold()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x3010);
		}
		static ::System::Double* StaticGet_s_sqrtRescaleThreshold()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x3018);
		}
		static ::System::Numerics::Complex* StaticGet_Zero()
		{
			return (::System::Numerics::Complex*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x3020);
		}
		static ::System::Double* StaticGet_s_log2()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x3030);
		}
		::System::Double m_real; // 0x10
		::System::Double m_imaginary; // 0x18

		::System::Void _ctor(::System::Double real, ::System::Double imaginary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX__CTOR_OFFSET))(this, real, imaginary);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX__CCTOR_OFFSET))();
		}

		::System::Double get_Real()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_GET_REAL_OFFSET))(this);
		}

		::System::Double get_Imaginary()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_GET_IMAGINARY_OFFSET))(this);
		}

		::System::Double get_Magnitude()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_GET_MAGNITUDE_OFFSET))(this);
		}

		static ::System::Numerics::Complex op_Addition(::System::Numerics::Complex left, ::System::Numerics::Complex right)
		{
			return ((::System::Numerics::Complex(*)(::System::Numerics::Complex, ::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_OP_ADDITION_OFFSET))(left, right);
		}

		static ::System::Numerics::Complex op_Subtraction(::System::Numerics::Complex left, ::System::Numerics::Complex right)
		{
			return ((::System::Numerics::Complex(*)(::System::Numerics::Complex, ::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_OP_SUBTRACTION_OFFSET))(left, right);
		}

		static ::System::Numerics::Complex op_Multiply(::System::Numerics::Complex left, ::System::Numerics::Complex right)
		{
			return ((::System::Numerics::Complex(*)(::System::Numerics::Complex, ::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_OP_MULTIPLY_OFFSET))(left, right);
		}

		static ::System::Numerics::Complex op_Division(::System::Numerics::Complex left, ::System::Numerics::Complex right)
		{
			return ((::System::Numerics::Complex(*)(::System::Numerics::Complex, ::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_OP_DIVISION_OFFSET))(left, right);
		}

		static ::System::Double Abs(::System::Numerics::Complex value)
		{
			return ((::System::Double(*)(::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_ABS_OFFSET))(value);
		}

		static ::System::Double Hypot(::System::Double a, ::System::Double b)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_HYPOT_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::System::Numerics::Complex left, ::System::Numerics::Complex right)
		{
			return ((::System::Boolean(*)(::System::Numerics::Complex, ::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_OP_EQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Numerics::Complex value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_EQUALS_1_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_TOSTRING_1_OFFSET))(this, format, provider);
		}

		static ::System::Numerics::Complex Sqrt(::System::Numerics::Complex value)
		{
			return ((::System::Numerics::Complex(*)(::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_SQRT_OFFSET))(value);
		}

		static ::System::Numerics::Complex Pow(::System::Numerics::Complex value, ::System::Numerics::Complex power)
		{
			return ((::System::Numerics::Complex(*)(::System::Numerics::Complex, ::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_POW_OFFSET))(value, power);
		}

		static ::System::Numerics::Complex Pow_1(::System::Numerics::Complex value, ::System::Double power)
		{
			return ((::System::Numerics::Complex(*)(::System::Numerics::Complex, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_POW_1_OFFSET))(value, power);
		}

		static ::System::Numerics::Complex op_Implicit(::System::Int32 value)
		{
			return ((::System::Numerics::Complex(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_OP_IMPLICIT_OFFSET))(value);
		}

		static ::System::Numerics::Complex op_Implicit_1(::System::Double value)
		{
			return ((::System::Numerics::Complex(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_OP_IMPLICIT_1_OFFSET))(value);
		}
	};
}
