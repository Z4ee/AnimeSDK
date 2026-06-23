#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AC6C0)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CrossAppDomainData_TypeDefinitionIndex = 1295;

	class CrossAppDomainData : public ::System::Object
	{
	public:
		::System::Object* _ContextID; // 0x10
		::System::String* _processGuid; // 0x18
		::System::Int32 _DomainID; // 0x20

		::System::Void _ctor(::System::Int32 domainId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA__CTOR_OFFSET))(this, domainId);
		}
	};
}
