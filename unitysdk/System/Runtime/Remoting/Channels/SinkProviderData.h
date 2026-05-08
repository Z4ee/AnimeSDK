#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC93640)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int SinkProviderData_TypeDefinitionIndex = 1309;

	class SinkProviderData : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* children; // 0x10
		::System::Collections::Hashtable* properties; // 0x18
		::System::String* sinkName; // 0x20

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA__CTOR_OFFSET))(this, name);
		}
	};
}
