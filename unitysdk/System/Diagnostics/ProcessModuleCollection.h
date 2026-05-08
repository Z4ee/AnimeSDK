#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ReadOnlyCollectionBase.h"

namespace System::Diagnostics { class ProcessModule; }

#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A2413C0)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A241480)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A2411D0)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A241300)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A241110)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A241100)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessModuleCollection_TypeDefinitionIndex = 2787;

	class ProcessModuleCollection : public ::System::Collections::ReadOnlyCollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Diagnostics::ProcessModule*>* processModules)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::ProcessModule*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION__CTOR_1_OFFSET))(this, processModules);
		}

		::System::Diagnostics::ProcessModule* get_Item(::System::Int32 index)
		{
			return ((::System::Diagnostics::ProcessModule*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 IndexOf(::System::Diagnostics::ProcessModule* module)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::ProcessModule*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_INDEXOF_OFFSET))(this, module);
		}

		::System::Boolean Contains(::System::Diagnostics::ProcessModule* module)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::ProcessModule*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_CONTAINS_OFFSET))(this, module);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Diagnostics::ProcessModule*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::ProcessModule*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_COPYTO_OFFSET))(this, array, index);
		}
	};
}
