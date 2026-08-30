#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_COMPLEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BA1A20)
#define SYSTEM_NUMERICS_COMPLEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BA1940)
#define SYSTEM_NUMERICS_COMPLEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BA1AB0)
#define SYSTEM_NUMERICS_COMPLEX_GET_IMAGINARY_OFFSET UNITYSDK_OFFSET(0x2E267C0)
#define SYSTEM_NUMERICS_COMPLEX_GET_REAL_OFFSET UNITYSDK_OFFSET(0x2EC0160)
#define SYSTEM_NUMERICS_COMPLEX_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3BA1C10)
#define SYSTEM_NUMERICS_COMPLEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BA1AF0)
#define SYSTEM_NUMERICS_COMPLEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B7E70)
#define SYSTEM_NUMERICS_COMPLEX__CTOR_OFFSET UNITYSDK_OFFSET(0x3BA1930)

namespace System::Numerics
{
	inline static constexpr unsigned int Complex_TypeDefinitionIndex = 3841;

	struct alignas(8) Complex
	{
		static ::System::Double* StaticGet_s_log2()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::System::Double* StaticGet_s_asinOverflowThreshold()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::System::Double* StaticGet_s_sqrtRescaleThreshold()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		static ::System::Numerics::Complex* StaticGet_ImaginaryOne()
		{
			return (::System::Numerics::Complex*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x48);
		}
		static ::System::Numerics::Complex* StaticGet_Zero()
		{
			return (::System::Numerics::Complex*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x58);
		}
		static ::System::Numerics::Complex* StaticGet_One()
		{
			return (::System::Numerics::Complex*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0x68);
		}
		::System::Double m_real; // 0x10
		::System::Double m_imaginary; // 0x18

		::System::Void _ctor(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX__CTOR_OFFSET))(this, a1, a2);
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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Numerics::Complex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_TOSTRING_1_OFFSET))(this, a1, a2);
		}
	};
}
