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

#define SYSTEM_REFLECTION_MONOPROPERTYINFO_GETTYPEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1BDA0B50)
#define SYSTEM_REFLECTION_MONOPROPERTYINFO_GET_DEFAULT_VALUE_OFFSET UNITYSDK_OFFSET(0x1BD9FF30)
#define SYSTEM_REFLECTION_MONOPROPERTYINFO_GET_PROPERTY_INFO_OFFSET UNITYSDK_OFFSET(0x1BD9F290)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoPropertyInfo_TypeDefinitionIndex = 629;

	struct alignas(8) MonoPropertyInfo
	{
		::System::Type* parent; // 0x10
		::System::Type* declaring_type; // 0x18
		::System::String* name; // 0x20
		::System::Reflection::MethodInfo* get_method; // 0x28
		::System::Reflection::MethodInfo* set_method; // 0x30
		::System::Reflection::PropertyAttributes attrs; // 0x38

		static ::System::Void get_property_info(::System::Reflection::MonoProperty* a1, ::System::Reflection::MonoPropertyInfo& a2, ::System::Reflection::PInfo a3)
		{
			return ((::System::Void(*)(::System::Reflection::MonoProperty*, ::System::Reflection::MonoPropertyInfo&, ::System::Reflection::PInfo))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTYINFO_GET_PROPERTY_INFO_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Type*>* GetTypeModifiers(::System::Reflection::MonoProperty* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Reflection::MonoProperty*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTYINFO_GETTYPEMODIFIERS_OFFSET))(a1, a2);
		}

		static ::System::Object* get_default_value(::System::Reflection::MonoProperty* a1)
		{
			return ((::System::Object*(*)(::System::Reflection::MonoProperty*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTYINFO_GET_DEFAULT_VALUE_OFFSET))(a1);
		}
	};
}
