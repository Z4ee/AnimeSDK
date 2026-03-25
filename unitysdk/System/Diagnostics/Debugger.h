#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_DEBUGGER_GET_ISATTACHED_OFFSET UNITYSDK_OFFSET(0x162B2440)
#define SYSTEM_DIAGNOSTICS_DEBUGGER_ISATTACHED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x162B2470)
#define SYSTEM_DIAGNOSTICS_DEBUGGER_ISLOGGING_OFFSET UNITYSDK_OFFSET(0x162B2490)
#define SYSTEM_DIAGNOSTICS_DEBUGGER_LOG_OFFSET UNITYSDK_OFFSET(0x162B24A0)
#define SYSTEM_DIAGNOSTICS_DEBUGGER_NOTIFYOFCROSSTHREADDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x162B24B0)
#define SYSTEM_DIAGNOSTICS_DEBUGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x162B24C0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Debugger_TypeDefinitionIndex = 1572;

	class Debugger : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DefaultCategory()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Debugger_TypeDefinitionIndex)->GetStaticField(0x47E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsAttached()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER_GET_ISATTACHED_OFFSET))();
		}

		static ::System::Boolean IsAttached_internal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER_ISATTACHED_INTERNAL_OFFSET))();
		}

		static ::System::Boolean IsLogging()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER_ISLOGGING_OFFSET))();
		}

		static ::System::Void Log(::System::Int32 level, ::System::String* category, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER_LOG_OFFSET))(level, category, message);
		}

		static ::System::Void NotifyOfCrossThreadDependency()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER_NOTIFYOFCROSSTHREADDEPENDENCY_OFFSET))();
		}
	};
}
