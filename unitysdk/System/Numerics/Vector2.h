#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_VECTOR2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22CF330)
#define SYSTEM_NUMERICS_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x22CF210)
#define SYSTEM_NUMERICS_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22CF180)
#define SYSTEM_NUMERICS_VECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x22CF320)
#define SYSTEM_NUMERICS_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22CF290)
#define SYSTEM_NUMERICS_VECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x2A140)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 4884;

	struct alignas(4) Vector2
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14

		::System::Void _ctor(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR2__CTOR_OFFSET))(this, x, y);
		}

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
