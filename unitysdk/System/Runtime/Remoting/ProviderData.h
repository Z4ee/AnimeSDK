#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IList; }

#define SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x178FF5B0)
#define SYSTEM_RUNTIME_REMOTING_PROVIDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x179002A0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ProviderData_TypeDefinitionIndex = 1208;

	class ProviderData : public ::System::Object
	{
	public:
		::System::String* Type; // 0x10
		::System::String* Ref; // 0x18
		::System::String* Id; // 0x20
		::System::Collections::IList* CustomData; // 0x28
		::System::Collections::Hashtable* CustomProperties; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROVIDERDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::System::Runtime::Remoting::ProviderData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::ProviderData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_COPYFROM_OFFSET))(this, a1);
		}
	};
}
