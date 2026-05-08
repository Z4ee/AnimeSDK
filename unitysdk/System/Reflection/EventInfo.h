#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeEventHandle.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo_AddEventAdapter; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_083577508CCFDAF3_OFFSET UNITYSDK_OFFSET(0x1AC926F0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_16AFF369BBFEA348_1_OFFSET UNITYSDK_OFFSET(0x1AC92400)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_16AFF369BBFEA348_OFFSET UNITYSDK_OFFSET(0x1AC92380)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_49E3FA61F17A6A16_OFFSET UNITYSDK_OFFSET(0x1AC92130)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1AC92140)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_89C61BA98593C1C4_1_OFFSET UNITYSDK_OFFSET(0x1AC92740)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_89C61BA98593C1C4_OFFSET UNITYSDK_OFFSET(0x1AC92710)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_9A44EF76E735EBFC_OFFSET UNITYSDK_OFFSET(0x1AC92500)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_A8FC6ACEB00A3EC2_OFFSET UNITYSDK_OFFSET(0x1AC92770)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1AC92700)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_DF325AA53F4BA122_OFFSET UNITYSDK_OFFSET(0x1AC92020)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_EDE5CBFDEE657CD2_OFFSET UNITYSDK_OFFSET(0x1AC927E0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_FFF4D309248F80D6_OFFSET UNITYSDK_OFFSET(0x1AC92150)

namespace System::Reflection
{
	inline static constexpr unsigned int EventInfo_TypeDefinitionIndex = 576;

	class EventInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Reflection::EventInfo_AddEventAdapter* Field_2_0; // 0x10

		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		::System::Type* Method_2_DF325AA53F4BA122()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_DF325AA53F4BA122_OFFSET))(this);
		}

		::System::Reflection::MemberTypes Method_2_49E3FA61F17A6A16()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_49E3FA61F17A6A16_OFFSET))(this);
		}

		::System::Void Method_2_FFF4D309248F80D6(::System::Object* target, ::System::Delegate* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_FFF4D309248F80D6_OFFSET))(this, target, handler);
		}

		::System::Reflection::MethodInfo* Method_2_16AFF369BBFEA348()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_16AFF369BBFEA348_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_2_16AFF369BBFEA348_1()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_16AFF369BBFEA348_1_OFFSET))(this);
		}

		::System::Void Method_2_9A44EF76E735EBFC(::System::Object* target, ::System::Delegate* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_9A44EF76E735EBFC_OFFSET))(this, target, handler);
		}

		::System::Boolean Method_2_083577508CCFDAF3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_083577508CCFDAF3_OFFSET))(this, obj);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		static ::System::Boolean Method_2_89C61BA98593C1C4(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_89C61BA98593C1C4_OFFSET))(left, right);
		}

		static ::System::Boolean Method_2_89C61BA98593C1C4_1(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_89C61BA98593C1C4_1_OFFSET))(left, right);
		}

		static ::System::Reflection::EventInfo* Method_2_A8FC6ACEB00A3EC2(::System::IntPtr event_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::EventInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_A8FC6ACEB00A3EC2_OFFSET))(event_handle, type_handle);
		}

		static ::System::Reflection::EventInfo* Method_2_EDE5CBFDEE657CD2(::Mono::RuntimeEventHandle handle, ::System::RuntimeTypeHandle reflectedType)
		{
			return ((::System::Reflection::EventInfo*(*)(::Mono::RuntimeEventHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_EDE5CBFDEE657CD2_OFFSET))(handle, reflectedType);
		}
	};
}
