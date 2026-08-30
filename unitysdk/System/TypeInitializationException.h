#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BC7A8C0)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1BC7A8A0)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC7A6B0)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BC7A830)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC7A610)

namespace System
{
	inline static constexpr unsigned int TypeInitializationException_TypeDefinitionIndex = 354;

	class TypeInitializationException : public ::System::SystemException
	{
	public:
		::System::String* _typeName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_GET_TYPENAME_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
