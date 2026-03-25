#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18517330)
#define SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x185172E0)

namespace System::Data
{
	inline static constexpr unsigned int RowNotInTableException_TypeDefinitionIndex = 4768;

	class RowNotInTableException : public ::System::Data::DataException
	{
	public:
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_1_OFFSET))(this);
		}
	};
}
