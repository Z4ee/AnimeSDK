#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19E14710)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CrossAppDomainData_TypeDefinitionIndex = 1296;

	class CrossAppDomainData : public ::System::Object
	{
	public:
		::System::String* _processGuid; // 0x10
		::System::Object* _ContextID; // 0x18
		::System::Int32 _DomainID; // 0x20

		::System::Void _ctor(::System::Int32 domainId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA__CTOR_OFFSET))(this, domainId);
		}
	};
}
