#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeEventHandle.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo_AddEventAdapter; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_EVENTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x16373770)
#define SYSTEM_REFLECTION_EVENTINFO_GETEVENTFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x16373870)
#define SYSTEM_REFLECTION_EVENTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16373780)
#define SYSTEM_REFLECTION_EVENTINFO_GET_EVENTHANDLERTYPE_OFFSET UNITYSDK_OFFSET(0x16373630)
#define SYSTEM_REFLECTION_EVENTINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x16373740)
#define SYSTEM_REFLECTION_EVENTINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET UNITYSDK_OFFSET(0x16373800)
#define SYSTEM_REFLECTION_EVENTINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x163737A0)
#define SYSTEM_REFLECTION_EVENTINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x163737D0)
#define SYSTEM_REFLECTION_EVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16373750)

namespace System::Reflection
{
	inline static constexpr unsigned int EventInfo_TypeDefinitionIndex = 602;

	class EventInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Reflection::EventInfo_AddEventAdapter* cached_add_event; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO__CTOR_OFFSET))(this);
		}

		::System::Type* get_EventHandlerType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GET_EVENTHANDLERTYPE_OFFSET))(this);
		}

		::System::Reflection::MemberTypes get_MemberType()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Reflection::EventInfo* internal_from_handle_type(::System::IntPtr event_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::EventInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET))(event_handle, type_handle);
		}

		static ::System::Reflection::EventInfo* GetEventFromHandle(::Mono::RuntimeEventHandle handle, ::System::RuntimeTypeHandle reflectedType)
		{
			return ((::System::Reflection::EventInfo*(*)(::Mono::RuntimeEventHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_GETEVENTFROMHANDLE_OFFSET))(handle, reflectedType);
		}
	};
}
