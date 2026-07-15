#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A80BA80)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A80B8A0)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A80B920)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80B800)

namespace System::Reflection
{
	inline static constexpr unsigned int ReflectionTypeLoadException_TypeDefinitionIndex = 583;

	class ReflectionTypeLoadException : public ::System::SystemException
	{
	public:
		::Il2CppArray<::System::Type*>* _classes; // 0x88
		::Il2CppArray<::System::Exception*>* _exceptions; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Type*>* a1, ::Il2CppArray<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
