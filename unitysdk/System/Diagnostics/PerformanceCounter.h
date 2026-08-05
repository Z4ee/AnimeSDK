#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"
#include "unitysdk/System/Diagnostics/CounterSample.h"
#include "unitysdk/System/Diagnostics/PerformanceCounterInstanceLifetime.h"
#include "unitysdk/System/Diagnostics/PerformanceCounterType.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_BEGININIT_OFFSET UNITYSDK_OFFSET(0x1D617C40)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_CLOSESHAREDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1D617CC0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D617C80)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_DECREMENT_OFFSET UNITYSDK_OFFSET(0x1D617D00)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_ENDINIT_OFFSET UNITYSDK_OFFSET(0x1D617D40)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1D617840)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_COUNTERHELP_OFFSET UNITYSDK_OFFSET(0x1D6178C0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_COUNTERNAME_OFFSET UNITYSDK_OFFSET(0x1D617900)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_COUNTERTYPE_OFFSET UNITYSDK_OFFSET(0x1D617980)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_INSTANCELIFETIME_OFFSET UNITYSDK_OFFSET(0x1D6179C0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_INSTANCENAME_OFFSET UNITYSDK_OFFSET(0x1D617A40)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1D617AC0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x1D617B40)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_READONLY_OFFSET UNITYSDK_OFFSET(0x1D617BC0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_INCREMENTBY_OFFSET UNITYSDK_OFFSET(0x1D617DC0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1D617D80)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_NEXTSAMPLE_OFFSET UNITYSDK_OFFSET(0x1D617E00)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_NEXTVALUE_OFFSET UNITYSDK_OFFSET(0x1D617E40)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_REMOVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D617E80)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1D617880)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_COUNTERNAME_OFFSET UNITYSDK_OFFSET(0x1D617940)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_INSTANCELIFETIME_OFFSET UNITYSDK_OFFSET(0x1D617A00)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_INSTANCENAME_OFFSET UNITYSDK_OFFSET(0x1D617A80)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1D617B00)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x1D617B80)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x1D617C00)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D617700)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D617740)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D617780)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D6177C0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D617800)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6176C0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounter_TypeDefinitionIndex = 4179;

	class PerformanceCounter : public ::System::ComponentModel::Component
	{
	public:
		static ::System::Int32* StaticGet_DefaultFileMappingSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PerformanceCounter_TypeDefinitionIndex)->GetStaticField(0x135D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* categoryName, ::System::String* counterName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_1_OFFSET))(this, categoryName, counterName);
		}

		::System::Void _ctor_2(::System::String* categoryName, ::System::String* counterName, ::System::Boolean readOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_2_OFFSET))(this, categoryName, counterName, readOnly);
		}

		::System::Void _ctor_3(::System::String* categoryName, ::System::String* counterName, ::System::String* instanceName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_3_OFFSET))(this, categoryName, counterName, instanceName);
		}

		::System::Void _ctor_4(::System::String* categoryName, ::System::String* counterName, ::System::String* instanceName, ::System::Boolean readOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_4_OFFSET))(this, categoryName, counterName, instanceName, readOnly);
		}

		::System::Void _ctor_5(::System::String* categoryName, ::System::String* counterName, ::System::String* instanceName, ::System::String* machineName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER__CTOR_5_OFFSET))(this, categoryName, counterName, instanceName, machineName);
		}

		::System::String* get_CategoryName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_CATEGORYNAME_OFFSET))(this);
		}

		::System::Void set_CategoryName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_CATEGORYNAME_OFFSET))(this, value);
		}

		::System::String* get_CounterHelp()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_COUNTERHELP_OFFSET))(this);
		}

		::System::String* get_CounterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_COUNTERNAME_OFFSET))(this);
		}

		::System::Void set_CounterName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_COUNTERNAME_OFFSET))(this, value);
		}

		::System::Diagnostics::PerformanceCounterType get_CounterType()
		{
			return ((::System::Diagnostics::PerformanceCounterType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_COUNTERTYPE_OFFSET))(this);
		}

		::System::Diagnostics::PerformanceCounterInstanceLifetime get_InstanceLifetime()
		{
			return ((::System::Diagnostics::PerformanceCounterInstanceLifetime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_INSTANCELIFETIME_OFFSET))(this);
		}

		::System::Void set_InstanceLifetime(::System::Diagnostics::PerformanceCounterInstanceLifetime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::PerformanceCounterInstanceLifetime))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_INSTANCELIFETIME_OFFSET))(this, value);
		}

		::System::String* get_InstanceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_INSTANCENAME_OFFSET))(this);
		}

		::System::Void set_InstanceName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_INSTANCENAME_OFFSET))(this, value);
		}

		::System::String* get_MachineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_MACHINENAME_OFFSET))(this);
		}

		::System::Void set_MachineName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_MACHINENAME_OFFSET))(this, value);
		}

		::System::Int64 get_RawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_RAWVALUE_OFFSET))(this);
		}

		::System::Void set_RawValue(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_RAWVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_ReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_GET_READONLY_OFFSET))(this);
		}

		::System::Void set_ReadOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_SET_READONLY_OFFSET))(this, value);
		}

		::System::Void BeginInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_BEGININIT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_CLOSE_OFFSET))(this);
		}

		static ::System::Void CloseSharedResources()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_CLOSESHAREDRESOURCES_OFFSET))();
		}

		::System::Int64 Decrement()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_DECREMENT_OFFSET))(this);
		}

		::System::Void EndInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_ENDINIT_OFFSET))(this);
		}

		::System::Int64 Increment()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_INCREMENT_OFFSET))(this);
		}

		::System::Int64 IncrementBy(::System::Int64 value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_INCREMENTBY_OFFSET))(this, value);
		}

		::System::Diagnostics::CounterSample NextSample()
		{
			return ((::System::Diagnostics::CounterSample(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_NEXTSAMPLE_OFFSET))(this);
		}

		::System::Single NextValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_NEXTVALUE_OFFSET))(this);
		}

		::System::Void RemoveInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTER_REMOVEINSTANCE_OFFSET))(this);
		}
	};
}
