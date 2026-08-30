#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class WeakReference; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_SHAREDREFERENCE_CACHE_OFFSET UNITYSDK_OFFSET(0x1828FBA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_SHAREDREFERENCE_GET_OFFSET UNITYSDK_OFFSET(0x1828F960)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_SHAREDREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x182950F0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int SharedReference_TypeDefinitionIndex = 2501;

	class SharedReference : public ::System::Object
	{
	public:
		::System::WeakReference* _ref; // 0x10
		::System::Int32 _locked; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_SHAREDREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Object* Get()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_SHAREDREFERENCE_GET_OFFSET))(this);
		}

		::System::Void Cache(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_SHAREDREFERENCE_CACHE_OFFSET))(this, a1);
		}
	};
}
