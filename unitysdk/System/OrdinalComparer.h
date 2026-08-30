#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/StringComparer.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_ORDINALCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CC0C3D0)
#define SYSTEM_ORDINALCOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC0C5F0)
#define SYSTEM_ORDINALCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC0C420)
#define SYSTEM_ORDINALCOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1CC0C610)
#define SYSTEM_ORDINALCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC0C4B0)
#define SYSTEM_ORDINALCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC0C3A0)

namespace System
{
	inline static constexpr unsigned int OrdinalComparer_TypeDefinitionIndex = 334;

	class OrdinalComparer : public ::System::StringComparer
	{
	public:
		::System::Boolean _ignoreCase; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_GETHASHCODE_1_OFFSET))(this);
		}
	};
}
