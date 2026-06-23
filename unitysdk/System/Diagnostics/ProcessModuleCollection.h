#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ReadOnlyCollectionBase.h"

namespace System::Diagnostics { class ProcessModule; }

#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C64F0F0)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C64F1B0)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C64EF00)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1C64F030)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C64EE40)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64EE30)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessModuleCollection_TypeDefinitionIndex = 2786;

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
