#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1BDC9C00)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BDC9C10)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC9B60)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int SinkProviderData_TypeDefinitionIndex = 1276;

	class SinkProviderData : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* children; // 0x10
		::System::String* sinkName; // 0x18
		::System::Collections::Hashtable* properties; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::IList* get_Children()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_GET_CHILDREN_OFFSET))(this);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
