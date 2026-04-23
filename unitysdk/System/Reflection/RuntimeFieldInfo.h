#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/FieldInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETDECLARINGTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x179AC660)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x179AC700)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x179AC600)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x179AC590)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x179AC5A0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x179AC6B0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x179ABC00)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeFieldInfo_TypeDefinitionIndex = 615;

	class RuntimeFieldInfo : public ::System::Reflection::FieldInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO__CTOR_OFFSET))(this);
		}

		::System::Reflection::BindingFlags get_BindingFlags()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_BINDINGFLAGS_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_MODULE_OFFSET))(this);
		}

		::System::RuntimeType* GetDeclaringTypeInternal()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETDECLARINGTYPEINTERNAL_OFFSET))(this);
		}

		::System::RuntimeType* get_ReflectedTypeInternal()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETRUNTIMEMODULE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
