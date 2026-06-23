#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_DELEGATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C8FF0)

namespace System
{
	inline static constexpr unsigned int DelegateData_TypeDefinitionIndex = 373;

	class DelegateData : public ::System::Object
	{
	public:
		::System::Type* target_type; // 0x10
		::System::String* method_name; // 0x18
		::System::Boolean curried_first_arg; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATEDATA__CTOR_OFFSET))(this);
		}
	};
}
