#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D7245E0)
#define SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D7246A0)
#define SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D724590)

namespace System::Data
{
	inline static constexpr unsigned int RowNotInTableException_TypeDefinitionIndex = 38582;

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

		::System::Void _ctor_2(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ROWNOTINTABLEEXCEPTION__CTOR_2_OFFSET))(this, s);
		}
	};
}
