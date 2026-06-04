#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/ConstructorInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1875D6A0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x1875D5E0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_BINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x1875D640)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1875D580)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1875D650)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_SERIALIZATIONINVOKE_OFFSET UNITYSDK_OFFSET(0x1875D7E0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_SERIALIZATIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x1875D7D0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1875D930)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeConstructorInfo_TypeDefinitionIndex = 620;

	class RuntimeConstructorInfo : public ::System::Reflection::ConstructorInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO__CTOR_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_MODULE_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETRUNTIMEMODULE_OFFSET))(this);
		}

		::System::Reflection::BindingFlags get_BindingFlags()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_BINDINGFLAGS_OFFSET))(this);
		}

		::System::RuntimeType* get_ReflectedTypeInternal()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GET_REFLECTEDTYPEINTERNAL_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* SerializationToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_SERIALIZATIONTOSTRING_OFFSET))(this);
		}

		::System::Void SerializationInvoke(::System::Object* a1, ::System::Runtime::Serialization::SerializationInfo* a2, ::System::Runtime::Serialization::StreamingContext a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_SERIALIZATIONINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
