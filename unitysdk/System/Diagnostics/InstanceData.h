#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/CounterSample.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_INSTANCEDATA_GET_INSTANCENAME_OFFSET UNITYSDK_OFFSET(0x1D46CE70)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATA_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x1D46CEB0)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATA_GET_SAMPLE_OFFSET UNITYSDK_OFFSET(0x1D46CEF0)
#define SYSTEM_DIAGNOSTICS_INSTANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D46CE30)

namespace System::Diagnostics
{
	inline static constexpr unsigned int InstanceData_TypeDefinitionIndex = 4176;

	class InstanceData : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::String* instanceName, ::System::Diagnostics::CounterSample sample)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::CounterSample))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATA__CTOR_OFFSET))(this, instanceName, sample);
		}

		::System::String* get_InstanceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATA_GET_INSTANCENAME_OFFSET))(this);
		}

		::System::Int64 get_RawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATA_GET_RAWVALUE_OFFSET))(this);
		}

		::System::Diagnostics::CounterSample get_Sample()
		{
			return ((::System::Diagnostics::CounterSample(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_INSTANCEDATA_GET_SAMPLE_OFFSET))(this);
		}
	};
}
