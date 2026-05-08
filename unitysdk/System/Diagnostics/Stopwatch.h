#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define SYSTEM_DIAGNOSTICS_STOPWATCH_GETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B1E78F0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1B1E7D60)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDTICKS_OFFSET UNITYSDK_OFFSET(0x1B1E7CD0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1B1E7AA0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1B1E7F50)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_RESET_OFFSET UNITYSDK_OFFSET(0x1B1E7F60)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_RESTART_OFFSET UNITYSDK_OFFSET(0x1B1E8010)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_STARTNEW_OFFSET UNITYSDK_OFFSET(0x1B1E7930)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_START_OFFSET UNITYSDK_OFFSET(0x1B1E7A10)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_STOP_OFFSET UNITYSDK_OFFSET(0x1B1E7F70)
#define SYSTEM_DIAGNOSTICS_STOPWATCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1E80A0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E7A00)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Stopwatch_TypeDefinitionIndex = 2801;

	class Stopwatch : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsHighResolution()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Stopwatch_TypeDefinitionIndex)->GetStaticField(0xF90);
		}
		static ::System::Int64* StaticGet_Frequency()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Stopwatch_TypeDefinitionIndex)->GetStaticField(0xF98);
		}
		::System::Int64 elapsed; // 0x10
		::System::Boolean is_running; // 0x18
		::System::Int64 started; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH__CCTOR_OFFSET))();
		}

		static ::System::Int64 GetTimestamp()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GETTIMESTAMP_OFFSET))();
		}

		static ::System::Diagnostics::Stopwatch* StartNew()
		{
			return ((::System::Diagnostics::Stopwatch*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_STARTNEW_OFFSET))();
		}

		::System::TimeSpan get_Elapsed()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSED_OFFSET))(this);
		}

		::System::Int64 get_ElapsedMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDMILLISECONDS_OFFSET))(this);
		}

		::System::Int64 get_ElapsedTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDTICKS_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_RESET_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_STOP_OFFSET))(this);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_RESTART_OFFSET))(this);
		}
	};
}
