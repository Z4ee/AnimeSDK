#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_POINTERSPEC_APPEND_OFFSET UNITYSDK_OFFSET(0x1ADBD030)
#define SYSTEM_POINTERSPEC_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1ADBCFE0)
#define SYSTEM_POINTERSPEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ADBD060)
#define SYSTEM_POINTERSPEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBCFD0)

namespace System
{
	inline static constexpr unsigned int PointerSpec_TypeDefinitionIndex = 431;

	class PointerSpec : public ::System::Object
	{
	public:
		::System::Int32 pointer_level; // 0x10

		::System::Void _ctor(::System::Int32 pointer_level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC__CTOR_OFFSET))(this, pointer_level);
		}

		::System::Type* Resolve(::System::Type* type)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC_RESOLVE_OFFSET))(this, type);
		}

		::System::Text::StringBuilder* Append(::System::Text::StringBuilder* sb)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC_APPEND_OFFSET))(this, sb);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC_TOSTRING_OFFSET))(this);
		}
	};
}
