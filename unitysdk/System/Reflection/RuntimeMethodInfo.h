#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MethodInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_CREATEDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x1875E100)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1875E0E0)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_FORMATNAMEANDSIG_OFFSET UNITYSDK_OFFSET(0x1875DFD0)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1875E190)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x1875DF10)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x1875DE90)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1875DEA0)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1875DF80)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_SERIALIZATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x1875E380)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1875E130)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1875E3E0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeMethodInfo_TypeDefinitionIndex = 618;

	class RuntimeMethodInfo : public ::System::Reflection::MethodInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO__CTOR_OFFSET))(this);
		}

		::System::Reflection::BindingFlags get_BindingFlags()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_GET_BINDINGFLAGS_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_GET_MODULE_OFFSET))(this);
		}

		::System::RuntimeType* get_ReflectedTypeInternal()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET))(this);
		}

		::System::String* FormatNameAndSig(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_FORMATNAMEANDSIG_OFFSET))(this, a1);
		}

		::System::Delegate* CreateDelegate(::System::Type* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_CREATEDELEGATE_OFFSET))(this, a1);
		}

		::System::Delegate* CreateDelegate_1(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_CREATEDELEGATE_1_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_TOSTRING_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_GETRUNTIMEMODULE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* SerializationToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_SERIALIZATIONTOSTRING_OFFSET))(this);
		}
	};
}
