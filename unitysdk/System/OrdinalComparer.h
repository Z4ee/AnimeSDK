#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/StringComparer.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_ORDINALCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BA242D0)
#define SYSTEM_ORDINALCOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BA24560)
#define SYSTEM_ORDINALCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BA24320)
#define SYSTEM_ORDINALCOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1BA245C0)
#define SYSTEM_ORDINALCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BA243B0)
#define SYSTEM_ORDINALCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA24270)

namespace System
{
	inline static constexpr unsigned int OrdinalComparer_TypeDefinitionIndex = 322;

	class OrdinalComparer : public ::System::StringComparer
	{
	public:
		::System::Boolean _ignoreCase; // 0x10

		::System::Void _ctor(::System::Boolean ignoreCase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER__CTOR_OFFSET))(this, ignoreCase);
		}

		::System::Int32 Compare(::System::String* x, ::System::String* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_COMPARE_OFFSET))(this, x, y);
		}

		::System::Boolean Equals(::System::String* x, ::System::String* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::String* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_GETHASHCODE_1_OFFSET))(this);
		}
	};
}
