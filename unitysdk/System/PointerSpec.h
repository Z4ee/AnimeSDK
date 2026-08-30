#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_POINTERSPEC_APPEND_OFFSET UNITYSDK_OFFSET(0x1BD87E20)
#define SYSTEM_POINTERSPEC_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1BD87D60)
#define SYSTEM_POINTERSPEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BD87E50)
#define SYSTEM_POINTERSPEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD87D50)

namespace System
{
	inline static constexpr unsigned int PointerSpec_TypeDefinitionIndex = 446;

	class PointerSpec : public ::System::Object
	{
	public:
		::System::Int32 pointer_level; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC__CTOR_OFFSET))(this, a1);
		}

		::System::Type* Resolve(::System::Type* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC_RESOLVE_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append(::System::Text::StringBuilder* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC_APPEND_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC_TOSTRING_OFFSET))(this);
		}
	};
}
