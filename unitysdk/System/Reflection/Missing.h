#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_MISSING_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1CC24090)
#define SYSTEM_REFLECTION_MISSING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC24100)
#define SYSTEM_REFLECTION_MISSING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC24080)

namespace System::Reflection
{
	inline static constexpr unsigned int Missing_TypeDefinitionIndex = 581;

	class Missing : public ::System::Object
	{
	public:
		static ::System::Reflection::Missing** StaticGet_Value()
		{
			return (::System::Reflection::Missing**)Il2CppClass::FromTypeDefinitionIndex(Missing_TypeDefinitionIndex)->GetStaticField(0xFE50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSING__CCTOR_OFFSET))();
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSING_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
