#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Hashtable.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATA_PROPERTYCOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7437A0)
#define SYSTEM_DATA_PROPERTYCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F743740)
#define SYSTEM_DATA_PROPERTYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7436D0)

namespace System::Data
{
	inline static constexpr unsigned int PropertyCollection_TypeDefinitionIndex = 39321;

	class PropertyCollection : public ::System::Collections::Hashtable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PROPERTYCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PROPERTYCOLLECTION__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PROPERTYCOLLECTION_CLONE_OFFSET))(this);
		}
	};
}
