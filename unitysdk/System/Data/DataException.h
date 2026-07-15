#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATA_DATAEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D306770)
#define SYSTEM_DATA_DATAEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D306810)
#define SYSTEM_DATA_DATAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D306700)

namespace System::Data
{
	inline static constexpr unsigned int DataException_TypeDefinitionIndex = 3746;

	class DataException : public ::System::SystemException
	{
	public:
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXCEPTION__CTOR_2_OFFSET))(this, a1);
		}
	};
}
