#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Diagnostics { class CounterCreationData; }

#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1D617540)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1D617500)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1D6174C0)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D617580)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D6175C0)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D617440)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1D617600)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1D617640)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D617680)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D617480)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D6173C0)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D617400)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D617380)

namespace System::Diagnostics
{
	inline static constexpr unsigned int CounterCreationDataCollection_TypeDefinitionIndex = 4063;

	class CounterCreationDataCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Diagnostics::CounterCreationDataCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::CounterCreationDataCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Diagnostics::CounterCreationData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::CounterCreationData*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::Diagnostics::CounterCreationData* get_Item(::System::Int32 index)
		{
			return ((::System::Diagnostics::CounterCreationData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Diagnostics::CounterCreationData* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Diagnostics::CounterCreationData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::Diagnostics::CounterCreationData* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::CounterCreationData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::Diagnostics::CounterCreationDataCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::CounterCreationDataCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::Diagnostics::CounterCreationData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::CounterCreationData*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::Diagnostics::CounterCreationData* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::CounterCreationData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Diagnostics::CounterCreationData*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::CounterCreationData*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::Diagnostics::CounterCreationData* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::CounterCreationData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::Diagnostics::CounterCreationData* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Diagnostics::CounterCreationData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::Diagnostics::CounterCreationData* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::CounterCreationData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATACOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
