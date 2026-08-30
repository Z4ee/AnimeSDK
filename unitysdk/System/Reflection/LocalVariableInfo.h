#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_REFLECTION_LOCALVARIABLEINFO_GET_LOCALINDEX_OFFSET UNITYSDK_OFFSET(0x1CC20DB0)
#define SYSTEM_REFLECTION_LOCALVARIABLEINFO_GET_LOCALTYPE_OFFSET UNITYSDK_OFFSET(0x1CC20DC0)
#define SYSTEM_REFLECTION_LOCALVARIABLEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC20DD0)
#define SYSTEM_REFLECTION_LOCALVARIABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC20DA0)

namespace System::Reflection
{
	inline static constexpr unsigned int LocalVariableInfo_TypeDefinitionIndex = 608;

	class LocalVariableInfo : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::System::Boolean is_pinned; // 0x18
		::System::UInt16 position; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_LOCALVARIABLEINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_LocalIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_LOCALVARIABLEINFO_GET_LOCALINDEX_OFFSET))(this);
		}

		::System::Type* get_LocalType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_LOCALVARIABLEINFO_GET_LOCALTYPE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_LOCALVARIABLEINFO_TOSTRING_OFFSET))(this);
		}
	};
}
