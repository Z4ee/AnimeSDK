#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_POINTER_BOX_OFFSET UNITYSDK_OFFSET(0x1875C4A0)
#define SYSTEM_REFLECTION_POINTER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1875C610)
#define SYSTEM_REFLECTION_POINTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1875C340)
#define SYSTEM_REFLECTION_POINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1875C330)

namespace System::Reflection
{
	inline static constexpr unsigned int Pointer_TypeDefinitionIndex = 581;

	class Pointer : public ::System::Object
	{
	public:
		::System::Void* _ptr; // 0x10
		::System::RuntimeType* _ptrType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_POINTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_POINTER__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Object* Box(::System::Void* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::Void*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_POINTER_BOX_OFFSET))(a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_POINTER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
