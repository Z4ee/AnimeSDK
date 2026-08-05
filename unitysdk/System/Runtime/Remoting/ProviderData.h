#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IList; }

#define SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1E412DA0)
#define SYSTEM_RUNTIME_REMOTING_PROVIDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4135F0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ProviderData_TypeDefinitionIndex = 1251;

	class ProviderData : public ::System::Object
	{
	public:
		::System::Collections::IList* CustomData; // 0x10
		::System::String* Type; // 0x18
		::System::String* Ref; // 0x20
		::System::String* Id; // 0x28
		::System::Collections::Hashtable* CustomProperties; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROVIDERDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::System::Runtime::Remoting::ProviderData* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::ProviderData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_COPYFROM_OFFSET))(this, other);
		}
	};
}
