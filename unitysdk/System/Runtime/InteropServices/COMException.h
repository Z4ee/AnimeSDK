#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ExternalException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6D8530)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6D8450)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C6D84E0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D8390)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int COMException_TypeDefinitionIndex = 1428;

	class COMException : public ::System::Runtime::InteropServices::ExternalException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message, ::System::Int32 errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_1_OFFSET))(this, message, errorCode);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_TOSTRING_OFFSET))(this);
		}
	};
}
