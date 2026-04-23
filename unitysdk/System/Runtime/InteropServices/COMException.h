#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ExternalException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179BFBB0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179BFB10)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x179BFA00)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int COMException_TypeDefinitionIndex = 1417;

	class COMException : public ::System::Runtime::InteropServices::ExternalException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_TOSTRING_OFFSET))(this);
		}
	};
}
