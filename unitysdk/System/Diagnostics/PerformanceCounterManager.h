#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERMANAGER_SYSTEM_DIAGNOSTICS_ICOLLECTDATA_CLOSEDATA_OFFSET UNITYSDK_OFFSET(0x193A7AB0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERMANAGER_SYSTEM_DIAGNOSTICS_ICOLLECTDATA_COLLECTDATA_OFFSET UNITYSDK_OFFSET(0x193A7AF0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x193A7A70)

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounterManager_TypeDefinitionIndex = 4183;

	class PerformanceCounterManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void System_Diagnostics_ICollectData_CloseData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERMANAGER_SYSTEM_DIAGNOSTICS_ICOLLECTDATA_CLOSEDATA_OFFSET))(this);
		}

		::System::Void System_Diagnostics_ICollectData_CollectData(::System::Int32 callIdx, ::System::IntPtr valueNamePtr, ::System::IntPtr dataPtr, ::System::Int32 totalBytes, ::System::IntPtr& res)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERMANAGER_SYSTEM_DIAGNOSTICS_ICOLLECTDATA_COLLECTDATA_OFFSET))(this, callIdx, valueNamePtr, dataPtr, totalBytes, res);
		}
	};
}
