#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/EventInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETDECLARINGTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1875DA30)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1875DAD0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x1875D9C0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x1875D940)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1875D950)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1875DA80)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1875DBD0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeEventInfo_TypeDefinitionIndex = 612;

	class RuntimeEventInfo : public ::System::Reflection::EventInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO__CTOR_OFFSET))(this);
		}

		::System::Reflection::BindingFlags get_BindingFlags()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_BINDINGFLAGS_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_MODULE_OFFSET))(this);
		}

		::System::RuntimeType* GetDeclaringTypeInternal()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETDECLARINGTYPEINTERNAL_OFFSET))(this);
		}

		::System::RuntimeType* get_ReflectedTypeInternal()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETRUNTIMEMODULE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
