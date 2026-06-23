#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryBase.h"

namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Diagnostics { class InstanceDataCollection; }

#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D457220)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D457260)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D457160)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D4571A0)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1D4571E0)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D457120)

namespace System::Diagnostics
{
	inline static constexpr unsigned int InstanceDataCollectionCollection_TypeDefinitionIndex = 4178;

	class InstanceDataCollectionCollection : public ::System::Collections::DictionaryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Diagnostics::InstanceDataCollection* get_Item(::System::String* counterName)
		{
			return ((::System::Diagnostics::InstanceDataCollection*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION_GET_ITEM_OFFSET))(this, counterName);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION_GET_VALUES_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* counterName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION_CONTAINS_OFFSET))(this, counterName);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Diagnostics::InstanceDataCollection*>* counters, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::InstanceDataCollection*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATACOLLECTIONCOLLECTION_COPYTO_OFFSET))(this, counters, index);
		}
	};
}
