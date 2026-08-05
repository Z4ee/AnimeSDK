#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryBase.h"

namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Diagnostics { class InstanceData; }

#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C87DCF0)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C87DD30)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_GET_COUNTERNAME_OFFSET UNITYSDK_OFFSET(0x1C87DBF0)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C87DC30)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1C87DC70)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1C87DCB0)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87DBB0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int InstanceDataCollection_TypeDefinitionIndex = 4177;

	class InstanceDataCollection : public ::System::Collections::DictionaryBase
	{
	public:
		::System::Void _ctor(::System::String* counterName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION__CTOR_OFFSET))(this, counterName);
		}

		::System::String* get_CounterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_GET_COUNTERNAME_OFFSET))(this);
		}

		::System::Diagnostics::InstanceData* get_Item(::System::String* instanceName)
		{
			return ((::System::Diagnostics::InstanceData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_GET_ITEM_OFFSET))(this, instanceName);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_GET_VALUES_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* instanceName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_CONTAINS_OFFSET))(this, instanceName);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Diagnostics::InstanceData*>* instances, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::InstanceData*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTION_COPYTO_OFFSET))(this, instances, index);
		}
	};
}
