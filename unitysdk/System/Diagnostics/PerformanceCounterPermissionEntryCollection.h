#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Diagnostics { class PerformanceCounterPermissionEntry; }

#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1B1E7660)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1B1E7620)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1B1E75E0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B1E76A0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B1E76E0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B1E7560)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1B1E7720)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1B1E7760)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B1E77A0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B1E75A0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E7520)

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounterPermissionEntryCollection_TypeDefinitionIndex = 4187;

	class PerformanceCounterPermissionEntryCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Diagnostics::PerformanceCounterPermissionEntry* get_Item(::System::Int32 index)
		{
			return ((::System::Diagnostics::PerformanceCounterPermissionEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Diagnostics::PerformanceCounterPermissionEntry* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Diagnostics::PerformanceCounterPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::Diagnostics::PerformanceCounterPermissionEntry* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::PerformanceCounterPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::Diagnostics::PerformanceCounterPermissionEntryCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::PerformanceCounterPermissionEntryCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::Diagnostics::PerformanceCounterPermissionEntry*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::PerformanceCounterPermissionEntry*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::Diagnostics::PerformanceCounterPermissionEntry* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::PerformanceCounterPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Diagnostics::PerformanceCounterPermissionEntry*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::PerformanceCounterPermissionEntry*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::Diagnostics::PerformanceCounterPermissionEntry* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::PerformanceCounterPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::Diagnostics::PerformanceCounterPermissionEntry* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Diagnostics::PerformanceCounterPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::Diagnostics::PerformanceCounterPermissionEntry* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::PerformanceCounterPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRYCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
