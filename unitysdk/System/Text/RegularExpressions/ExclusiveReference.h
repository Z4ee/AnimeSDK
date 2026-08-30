#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text::RegularExpressions { class RegexRunner; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE_GET_OFFSET UNITYSDK_OFFSET(0x1E9EF430)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E9EF460)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EF520)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int ExclusiveReference_TypeDefinitionIndex = 2500;

	class ExclusiveReference : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::RegexRunner* _ref; // 0x10
		::System::Object* _obj; // 0x18
		::System::Int32 _locked; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Object* Get()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE_GET_OFFSET))(this);
		}

		::System::Void Release(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_EXCLUSIVEREFERENCE_RELEASE_OFFSET))(this, a1);
		}
	};
}
