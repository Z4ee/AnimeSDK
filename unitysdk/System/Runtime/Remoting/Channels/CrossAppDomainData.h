#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA_GET_DOMAINID_OFFSET UNITYSDK_OFFSET(0x1A831A30)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA_GET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x1A831A40)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8314F0)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CrossAppDomainData_TypeDefinitionIndex = 1256;

	class CrossAppDomainData : public ::System::Object
	{
	public:
		::System::Object* _ContextID; // 0x10
		::System::String* _processGuid; // 0x18
		::System::Int32 _DomainID; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_DomainID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA_GET_DOMAINID_OFFSET))(this);
		}

		::System::String* get_ProcessID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA_GET_PROCESSID_OFFSET))(this);
		}
	};
}
