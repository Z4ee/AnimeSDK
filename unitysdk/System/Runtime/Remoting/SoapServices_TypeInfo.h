#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }

#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_TYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1945E3F0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int SoapServices_TypeInfo_TypeDefinitionIndex = 1226;

	class SoapServices_TypeInfo : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* Elements; // 0x10
		::System::Collections::Hashtable* Attributes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_TYPEINFO__CTOR_OFFSET))(this);
		}
	};
}
