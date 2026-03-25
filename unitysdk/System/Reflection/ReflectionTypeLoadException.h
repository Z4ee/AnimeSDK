#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1637EAB0)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1637E8C0)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1637E940)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1637E820)

namespace System::Reflection
{
	inline static constexpr unsigned int ReflectionTypeLoadException_TypeDefinitionIndex = 584;

	class ReflectionTypeLoadException : public ::System::SystemException
	{
	public:
		::Il2CppArray<::System::Exception*>* _exceptions; // 0x88
		::Il2CppArray<::System::Type*>* _classes; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Type*>* classes, ::Il2CppArray<::System::Exception*>* exceptions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_1_OFFSET))(this, classes, exceptions);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
