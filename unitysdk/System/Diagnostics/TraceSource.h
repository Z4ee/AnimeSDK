#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/SourceLevels.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class StringDictionary; }
namespace System::Diagnostics { class SourceSwitch; }
namespace System::Diagnostics { class TraceListenerCollection; }

#define SYSTEM_DIAGNOSTICS_TRACESOURCE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1CAF21D0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_CREATESWITCH_OFFSET UNITYSDK_OFFSET(0x1CAF5770)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1CAF2560)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_GETSUPPORTEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CAF2DB0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CAF5890)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_GET_LISTENERS_OFFSET UNITYSDK_OFFSET(0x1CAF5A30)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CAF37A0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_GET_SWITCH_OFFSET UNITYSDK_OFFSET(0x1CAF5AF0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CAF1F40)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_NOCONFIGINIT_OFFSET UNITYSDK_OFFSET(0x1CAF1FF0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_REFRESHALL_OFFSET UNITYSDK_OFFSET(0x1CAF2DC0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1CAF30A0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_SET_SWITCH_OFFSET UNITYSDK_OFFSET(0x1CAF5BB0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEDATA_1_OFFSET UNITYSDK_OFFSET(0x1CAF4AA0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEDATA_OFFSET UNITYSDK_OFFSET(0x1CAF4460)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1CAF37B0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEEVENT_2_OFFSET UNITYSDK_OFFSET(0x1CAF3DF0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEEVENT_OFFSET UNITYSDK_OFFSET(0x1CAF3160)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEINFORMATION_1_OFFSET UNITYSDK_OFFSET(0x1CAF50F0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1CAF50E0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACETRANSFER_OFFSET UNITYSDK_OFFSET(0x1CAF5100)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAF5CD0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAF17B0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF17A0)
#define SYSTEM_DIAGNOSTICS_TRACESOURCE__PRUNECACHEDTRACESOURCES_OFFSET UNITYSDK_OFFSET(0x1CAF19A0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceSource_TypeDefinitionIndex = 2773;

	class TraceSource : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference*>** StaticGet_tracesources()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(TraceSource_TypeDefinitionIndex)->GetStaticField(0x26E0);
		}
		static ::System::Int32* StaticGet_s_LastCollectionCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TraceSource_TypeDefinitionIndex)->GetStaticField(0xFF0);
		}
		::System::String* sourceName; // 0x10
		::System::Diagnostics::SourceSwitch* internalSwitch; // 0x18
		::System::Diagnostics::TraceListenerCollection* listeners; // 0x20
		::System::Collections::Specialized::StringDictionary* attributes; // 0x28
		::System::Boolean _initCalled; // 0x30
		::System::Diagnostics::SourceLevels switchLevel; // 0x34

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Diagnostics::SourceLevels defaultLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::SourceLevels))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE__CTOR_1_OFFSET))(this, name, defaultLevel);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE__CCTOR_OFFSET))();
		}

		static ::System::Void _pruneCachedTraceSources()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE__PRUNECACHEDTRACESOURCES_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_INITIALIZE_OFFSET))(this);
		}

		::System::Void NoConfigInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_NOCONFIGINIT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_FLUSH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetSupportedAttributes()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_GETSUPPORTEDATTRIBUTES_OFFSET))(this);
		}

		static ::System::Void RefreshAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_REFRESHALL_OFFSET))();
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_REFRESH_OFFSET))(this);
		}

		::System::Void TraceEvent(::System::Diagnostics::TraceEventType eventType, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEEVENT_OFFSET))(this, eventType, id);
		}

		::System::Void TraceEvent_1(::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEEVENT_1_OFFSET))(this, eventType, id, message);
		}

		::System::Void TraceEvent_2(::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEEVENT_2_OFFSET))(this, eventType, id, format, args);
		}

		::System::Void TraceData(::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEDATA_OFFSET))(this, eventType, id, data);
		}

		::System::Void TraceData_1(::System::Diagnostics::TraceEventType eventType, ::System::Int32 id, ::Il2CppArray<::System::Object*>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::TraceEventType, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEDATA_1_OFFSET))(this, eventType, id, data);
		}

		::System::Void TraceInformation(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEINFORMATION_OFFSET))(this, message);
		}

		::System::Void TraceInformation_1(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACEINFORMATION_1_OFFSET))(this, format, args);
		}

		::System::Void TraceTransfer(::System::Int32 id, ::System::String* message, ::System::Guid relatedActivityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_TRACETRANSFER_OFFSET))(this, id, message, relatedActivityId);
		}

		::System::Void CreateSwitch(::System::String* typename_, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_CREATESWITCH_OFFSET))(this, typename_, name);
		}

		::System::Collections::Specialized::StringDictionary* get_Attributes()
		{
			return ((::System::Collections::Specialized::StringDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_GET_NAME_OFFSET))(this);
		}

		::System::Diagnostics::TraceListenerCollection* get_Listeners()
		{
			return ((::System::Diagnostics::TraceListenerCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_GET_LISTENERS_OFFSET))(this);
		}

		::System::Diagnostics::SourceSwitch* get_Switch()
		{
			return ((::System::Diagnostics::SourceSwitch*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_GET_SWITCH_OFFSET))(this);
		}

		::System::Void set_Switch(::System::Diagnostics::SourceSwitch* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::SourceSwitch*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESOURCE_SET_SWITCH_OFFSET))(this, value);
		}
	};
}
