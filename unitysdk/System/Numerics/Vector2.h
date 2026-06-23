#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_VECTOR2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C3840)
#define SYSTEM_NUMERICS_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7900)
#define SYSTEM_NUMERICS_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F7870)
#define SYSTEM_NUMERICS_VECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x9F79D0)
#define SYSTEM_NUMERICS_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F7980)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 6379;

	struct alignas(4) Vector2
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_EQUALS_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}

		::System::Boolean Equals_1(::System::Numerics::Vector2 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Vector2))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2_EQUALS_1_OFFSET))(this, other);
		}
	};
}
