#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/PropertyInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_FORMATNAMEANDSIG_OFFSET UNITYSDK_OFFSET(0x1BDA52A0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETDECLARINGTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BDA5110)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BDA55A0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x1BDA50E0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x1BDA50A0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1BDA50B0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BDA51D0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_SERIALIZATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x1BDA56E0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BDA5290)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA0C00)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimePropertyInfo_TypeDefinitionIndex = 631;

	class RuntimePropertyInfo : public ::System::Reflection::PropertyInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO__CTOR_OFFSET))(this);
		}

		::System::Reflection::BindingFlags get_BindingFlags()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_BINDINGFLAGS_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_MODULE_OFFSET))(this);
		}

		::System::RuntimeType* GetDeclaringTypeInternal()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETDECLARINGTYPEINTERNAL_OFFSET))(this);
		}

		::System::RuntimeType* get_ReflectedTypeInternal()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETRUNTIMEMODULE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_TOSTRING_OFFSET))(this);
		}

		::System::String* FormatNameAndSig(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_FORMATNAMEANDSIG_OFFSET))(this, a1);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* SerializationToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_SERIALIZATIONTOSTRING_OFFSET))(this);
		}
	};
}
