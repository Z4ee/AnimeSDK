#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/FormatException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_URIFORMATEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D4645A0)
#define SYSTEM_URIFORMATEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D464430)
#define SYSTEM_URIFORMATEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D4644C0)
#define SYSTEM_URIFORMATEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D464550)
#define SYSTEM_URIFORMATEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D464370)

namespace System
{
	inline static constexpr unsigned int UriFormatException_TypeDefinitionIndex = 2669;

	class UriFormatException : public ::System::FormatException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* textString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION__CTOR_1_OFFSET))(this, textString);
		}

		::System::Void _ctor_2(::System::String* textString, ::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION__CTOR_2_OFFSET))(this, textString, e);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION__CTOR_3_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}
	};
}
