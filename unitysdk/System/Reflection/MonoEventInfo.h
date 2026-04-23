#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/EventAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoEvent; }

#define SYSTEM_REFLECTION_MONOEVENTINFO_GETEVENTINFO_OFFSET UNITYSDK_OFFSET(0x179A6310)
#define SYSTEM_REFLECTION_MONOEVENTINFO_GET_EVENT_INFO_OFFSET UNITYSDK_OFFSET(0x179A65F0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoEventInfo_TypeDefinitionIndex = 612;

	struct alignas(8) MonoEventInfo
	{
		::System::Type* declaring_type; // 0x10
		::System::Type* reflected_type; // 0x18
		::System::String* name; // 0x20
		::System::Reflection::MethodInfo* add_method; // 0x28
		::System::Reflection::MethodInfo* remove_method; // 0x30
		::System::Reflection::MethodInfo* raise_method; // 0x38
		::System::Reflection::EventAttributes attrs; // 0x40
		::Il2CppArray<::System::Reflection::MethodInfo*>* other_methods; // 0x48

		static ::System::Void get_event_info(::System::Reflection::MonoEvent* ev, ::System::Reflection::MonoEventInfo& info)
		{
			return ((::System::Void(*)(::System::Reflection::MonoEvent*, ::System::Reflection::MonoEventInfo&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENTINFO_GET_EVENT_INFO_OFFSET))(ev, info);
		}

		static ::System::Reflection::MonoEventInfo GetEventInfo(::System::Reflection::MonoEvent* ev)
		{
			return ((::System::Reflection::MonoEventInfo(*)(::System::Reflection::MonoEvent*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENTINFO_GETEVENTINFO_OFFSET))(ev);
		}
	};
}
