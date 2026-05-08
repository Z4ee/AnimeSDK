#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATA_DATAEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B62C9F0)
#define SYSTEM_DATA_DATAEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B62CAB0)
#define SYSTEM_DATA_DATAEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B62CB40)
#define SYSTEM_DATA_DATAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62C980)

namespace System::Data
{
	inline static constexpr unsigned int DataException_TypeDefinitionIndex = 36957;

	class DataException : public ::System::SystemException
	{
	public:
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION__CTOR_2_OFFSET))(this, s);
		}

		::System::Void _ctor_3(::System::String* s, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION__CTOR_3_OFFSET))(this, s, innerException);
		}
	};
}
