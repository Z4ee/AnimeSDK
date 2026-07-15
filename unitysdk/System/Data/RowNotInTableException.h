#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3068D0)
#define SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D306880)

namespace System::Data
{
	inline static constexpr unsigned int RowNotInTableException_TypeDefinitionIndex = 3747;

	class RowNotInTableException : public ::System::Data::DataException
	{
	public:
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_1_OFFSET))(this);
		}
	};
}
