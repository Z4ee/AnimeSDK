#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventCommand.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Diagnostics::Tracing { class EventDispatcher; }
namespace System::Diagnostics::Tracing { class EventListener; }
namespace System::Diagnostics::Tracing { class EventSource; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1BCCF120)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x1BCCF100)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS_SET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1BCCF130)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS_SET_COMMAND_OFFSET UNITYSDK_OFFSET(0x1BCCF110)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCF140)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventCommandEventArgs_TypeDefinitionIndex = 1689;

	class EventCommandEventArgs : public ::System::EventArgs
	{
	public:
		::System::Diagnostics::Tracing::EventListener* listener; // 0x10
		::System::Diagnostics::Tracing::EventSource* eventSource; // 0x18
		::System::Diagnostics::Tracing::EventDispatcher* dispatcher; // 0x20
		::System::Diagnostics::Tracing::EventCommandEventArgs* nextCommand; // 0x28
		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* _Arguments_k__BackingField; // 0x30
		::System::Boolean enable; // 0x38
		::System::Int32 etwSessionId; // 0x3C
		::System::Diagnostics::Tracing::EventKeywords matchAnyKeyword; // 0x40
		::System::Int32 perEventSourceSessionId; // 0x48
		::System::Diagnostics::Tracing::EventLevel level; // 0x4C
		::System::Diagnostics::Tracing::EventCommand _Command_k__BackingField; // 0x50

		::System::Void _ctor(::System::Diagnostics::Tracing::EventCommand a1, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a2, ::System::Diagnostics::Tracing::EventSource* a3, ::System::Diagnostics::Tracing::EventListener* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Diagnostics::Tracing::EventLevel a8, ::System::Diagnostics::Tracing::EventKeywords a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventCommand, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Diagnostics::Tracing::EventSource*, ::System::Diagnostics::Tracing::EventListener*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Diagnostics::Tracing::EventCommand get_Command()
		{
			return ((::System::Diagnostics::Tracing::EventCommand(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS_GET_COMMAND_OFFSET))(this);
		}

		::System::Void set_Command(::System::Diagnostics::Tracing::EventCommand a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventCommand))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS_SET_COMMAND_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* get_Arguments()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Void set_Arguments(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMANDEVENTARGS_SET_ARGUMENTS_OFFSET))(this, a1);
		}
	};
}
