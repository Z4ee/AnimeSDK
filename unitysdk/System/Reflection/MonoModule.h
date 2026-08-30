#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/RuntimeModule.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_MONOMODULE_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1C439A70)
#define SYSTEM_REFLECTION_MONOMODULE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C439A60)
#define SYSTEM_REFLECTION_MONOMODULE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C439A90)
#define SYSTEM_REFLECTION_MONOMODULE_GETRUNTIMEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1C439B80)
#define SYSTEM_REFLECTION_MONOMODULE_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1C4399F0)
#define SYSTEM_REFLECTION_MONOMODULE_GET_MODULEVERSIONID_OFFSET UNITYSDK_OFFSET(0x1C439A10)
#define SYSTEM_REFLECTION_MONOMODULE_GET_SCOPENAME_OFFSET UNITYSDK_OFFSET(0x1C439A00)
#define SYSTEM_REFLECTION_MONOMODULE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1C439A80)
#define SYSTEM_REFLECTION_MONOMODULE_ISRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C439A50)
#define SYSTEM_REFLECTION_MONOMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C439BF0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoModule_TypeDefinitionIndex = 626;

	class MonoModule : public ::System::Reflection::RuntimeModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE__CTOR_OFFSET))(this);
		}

		::System::Reflection::Assembly* get_Assembly()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_GET_ASSEMBLY_OFFSET))(this);
		}

		::System::String* get_ScopeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_GET_SCOPENAME_OFFSET))(this);
		}

		::System::Guid get_ModuleVersionId()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_GET_MODULEVERSIONID_OFFSET))(this);
		}

		::System::Boolean IsResource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_ISRESOURCE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Reflection::RuntimeAssembly* GetRuntimeAssembly()
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_GETRUNTIMEASSEMBLY_OFFSET))(this);
		}
	};
}
