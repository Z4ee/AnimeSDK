#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_VECTOR2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BFED60)
#define SYSTEM_NUMERICS_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C99A60)
#define SYSTEM_NUMERICS_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C999D0)
#define SYSTEM_NUMERICS_VECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3C99B70)
#define SYSTEM_NUMERICS_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C99AE0)
#define SYSTEM_NUMERICS_VECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x6B9800)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 3863;

	struct alignas(4) Vector2
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals_1(::System::Numerics::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Vector2))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
