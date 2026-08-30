#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_MONOASYNCCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD70E80)

namespace System
{
	inline static constexpr unsigned int MonoAsyncCall_TypeDefinitionIndex = 405;

	class MonoAsyncCall : public ::System::Object
	{
	public:
		::System::Object* msg; // 0x10
		::System::IntPtr cb_method; // 0x18
		::System::Object* cb_target; // 0x20
		::System::Object* state; // 0x28
		::System::Object* res; // 0x30
		::System::Object* out_args; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOASYNCCALL__CTOR_OFFSET))(this);
		}
	};
}
