#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ExternalException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C457630)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C457590)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C457480)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int COMException_TypeDefinitionIndex = 1427;

	class COMException : public ::System::Runtime::InteropServices::ExternalException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_TOSTRING_OFFSET))(this);
		}
	};
}
