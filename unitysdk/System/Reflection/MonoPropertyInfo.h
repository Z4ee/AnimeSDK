#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/PInfo.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoProperty; }

#define SYSTEM_REFLECTION_MONOPROPERTYINFO_GETTYPEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x179A9920)
#define SYSTEM_REFLECTION_MONOPROPERTYINFO_GET_DEFAULT_VALUE_OFFSET UNITYSDK_OFFSET(0x179A8FB0)
#define SYSTEM_REFLECTION_MONOPROPERTYINFO_GET_PROPERTY_INFO_OFFSET UNITYSDK_OFFSET(0x179A85C0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoPropertyInfo_TypeDefinitionIndex = 627;

	struct alignas(8) MonoPropertyInfo
	{
		::System::Type* parent; // 0x10
		::System::Type* declaring_type; // 0x18
		::System::String* name; // 0x20
		::System::Reflection::MethodInfo* get_method; // 0x28
		::System::Reflection::MethodInfo* set_method; // 0x30
		::System::Reflection::PropertyAttributes attrs; // 0x38

		static ::System::Void get_property_info(::System::Reflection::MonoProperty* prop, ::System::Reflection::MonoPropertyInfo& info, ::System::Reflection::PInfo req_info)
		{
			return ((::System::Void(*)(::System::Reflection::MonoProperty*, ::System::Reflection::MonoPropertyInfo&, ::System::Reflection::PInfo))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTYINFO_GET_PROPERTY_INFO_OFFSET))(prop, info, req_info);
		}

		static ::Il2CppArray<::System::Type*>* GetTypeModifiers(::System::Reflection::MonoProperty* prop, ::System::Boolean optional)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Reflection::MonoProperty*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTYINFO_GETTYPEMODIFIERS_OFFSET))(prop, optional);
		}

		static ::System::Object* get_default_value(::System::Reflection::MonoProperty* prop)
		{
			return ((::System::Object*(*)(::System::Reflection::MonoProperty*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTYINFO_GET_DEFAULT_VALUE_OFFSET))(prop);
		}
	};
}
