#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventChannel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventCommand.h"
#include "unitysdk/System/Diagnostics/Tracing/EventDescriptor.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventManifestOptions.h"
#include "unitysdk/System/Diagnostics/Tracing/EventOpcode.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSourceOptions.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSourceSettings.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource_EventData.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource_EventMetadata.h"
#include "unitysdk/System/Diagnostics/Tracing/SessionMask.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace System { class Attribute; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics::Tracing { class ActivityTracker; }
namespace System::Diagnostics::Tracing { class EtwSession; }
namespace System::Diagnostics::Tracing { class EventAttribute; }
namespace System::Diagnostics::Tracing { class EventCommandEventArgs; }
namespace System::Diagnostics::Tracing { class EventDispatcher; }
namespace System::Diagnostics::Tracing { class EventListener; }
namespace System::Diagnostics::Tracing { class EventSource_OverideEventProvider; }
namespace System::Diagnostics::Tracing { class EventWrittenEventArgs; }
namespace System::Diagnostics::Tracing { class ManifestBuilder; }
namespace System::Diagnostics::Tracing { class NameInfo; }
namespace System::Diagnostics::Tracing { class TraceLoggingEventTypes; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDEVENTDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178FFC80)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x178E7C80)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDPROVIDERENUMKIND_OFFSET UNITYSDK_OFFSET(0x178FD7D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDVALUETOMETADATA_OFFSET UNITYSDK_OFFSET(0x178EE510)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ANYEVENTENABLED_OFFSET UNITYSDK_OFFSET(0x178F9BF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ATTRIBUTETYPENAMESMATCH_OFFSET UNITYSDK_OFFSET(0x178FD320)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CREATEMANIFESTANDDESCRIPTORS_OFFSET UNITYSDK_OFFSET(0x178FA770)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DEBUGCHECKEVENT_OFFSET UNITYSDK_OFFSET(0x178FEE70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DECODEOBJECT_OFFSET UNITYSDK_OFFSET(0x178F65A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPATCHTOALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x178F7400)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x178F4760)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178E8070)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DOCOMMAND_OFFSET UNITYSDK_OFFSET(0x178F5380)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENABLEEVENTFORDISPATCHER_OFFSET UNITYSDK_OFFSET(0x178F9460)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENSUREDESCRIPTORSINITIALIZED_OFFSET UNITYSDK_OFFSET(0x178F8F10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x178F4C50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GENERATEGUIDFROMNAME_OFFSET UNITYSDK_OFFSET(0x178EFEF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETCUSTOMATTRIBUTEHELPER_OFFSET UNITYSDK_OFFSET(0x178EEFB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETDISPATCHER_OFFSET UNITYSDK_OFFSET(0x178F6D10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETETWSESSIONMASK_OFFSET UNITYSDK_OFFSET(0x178F2200)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETEVENTSOURCEBASETYPE_OFFSET UNITYSDK_OFFSET(0x178FD500)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETGUID_OFFSET UNITYSDK_OFFSET(0x178EED60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETHELPERCALLFIRSTARG_OFFSET UNITYSDK_OFFSET(0x179004C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_1_OFFSET UNITYSDK_OFFSET(0x178F00E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_OFFSET UNITYSDK_OFFSET(0x178F00B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETOPCODEWITHDEFAULT_OFFSET UNITYSDK_OFFSET(0x178F8D00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETPARAMLENGTHINCLUDINGBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x178F7340)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_CURRENTTHREADACTIVITYID_OFFSET UNITYSDK_OFFSET(0x178E3270)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_FALLBACKACTIVITYID_OFFSET UNITYSDK_OFFSET(0x178F01C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x178EECD0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_INTERNALCURRENTTHREADACTIVITYID_OFFSET UNITYSDK_OFFSET(0x178E15C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x178FA730)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x178EECC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_SELFDESCRIBINGEVENTS_OFFSET UNITYSDK_OFFSET(0x178F2600)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_THROWONEVENTWRITEERRORS_OFFSET UNITYSDK_OFFSET(0x178F8C70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_HEXDIGIT_OFFSET UNITYSDK_OFFSET(0x178EEBC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZEPROVIDERMETADATA_OFFSET UNITYSDK_OFFSET(0x178EE030)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x178F0610)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDBYDEFAULT_OFFSET UNITYSDK_OFFSET(0x178F8BC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDCOMMON_OFFSET UNITYSDK_OFFSET(0x178EED30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_1_OFFSET UNITYSDK_OFFSET(0x178EC960)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_2_OFFSET UNITYSDK_OFFSET(0x178EECF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_OFFSET UNITYSDK_OFFSET(0x178EECE0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_LOGEVENTARGSMISMATCHES_OFFSET UNITYSDK_OFFSET(0x178F6D40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ONEVENTCOMMAND_OFFSET UNITYSDK_OFFSET(0x178F0B10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_PARSECOMMANDARGS_OFFSET UNITYSDK_OFFSET(0x178F9540)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REMOVEFIRSTARGIFRELATEDACTIVITYID_OFFSET UNITYSDK_OFFSET(0x178FECF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTACTIVITYSAMPLINGINFO_OFFSET UNITYSDK_OFFSET(0x178F9DF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTOUTOFBANDMESSAGE_OFFSET UNITYSDK_OFFSET(0x178E0EF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDCOMMAND_OFFSET UNITYSDK_OFFSET(0x178F8D60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDMANIFEST_OFFSET UNITYSDK_OFFSET(0x178F4840)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SERIALIZEEVENTARGS_OFFSET UNITYSDK_OFFSET(0x178F7050)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SETCURRENTTHREADACTIVITYID_OFFSET UNITYSDK_OFFSET(0x178E34C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_THROWEVENTSOURCEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x178F2620)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178F02F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TRIMEVENTDESCRIPTORS_OFFSET UNITYSDK_OFFSET(0x178FFF10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x178EDF00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEETWSESSION_OFFSET UNITYSDK_OFFSET(0x178F9830)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEKWDTRIGGERS_OFFSET UNITYSDK_OFFSET(0x178F9C90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATEEVENTOPCODEFORTRANSFER_OFFSET UNITYSDK_OFFSET(0x178F21C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATESETTINGS_OFFSET UNITYSDK_OFFSET(0x178F05B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITECLEANUP_OFFSET UNITYSDK_OFFSET(0x178ED790)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTCORE_OFFSET UNITYSDK_OFFSET(0x178F0B40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTRAW_OFFSET UNITYSDK_OFFSET(0x178ED710)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTSTRING_OFFSET UNITYSDK_OFFSET(0x178F4E00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTVARARGS_OFFSET UNITYSDK_OFFSET(0x178F3720)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTWITHRELATEDACTIVITYIDCORE_OFFSET UNITYSDK_OFFSET(0x178F12B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_1_OFFSET UNITYSDK_OFFSET(0x178F0B60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_2_OFFSET UNITYSDK_OFFSET(0x178F0CA0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_3_OFFSET UNITYSDK_OFFSET(0x178F0E00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_4_OFFSET UNITYSDK_OFFSET(0x178F0F50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_5_OFFSET UNITYSDK_OFFSET(0x178F10E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_6_OFFSET UNITYSDK_OFFSET(0x178F3710)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x178F0B20)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGEINNER_OFFSET UNITYSDK_OFFSET(0x178EC9A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_1_OFFSET UNITYSDK_OFFSET(0x178ED880)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_OFFSET UNITYSDK_OFFSET(0x178EC8D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x178F8980)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOLISTENER_OFFSET UNITYSDK_OFFSET(0x178F4CC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_1_OFFSET UNITYSDK_OFFSET(0x178F6F00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x178F32F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x179008C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178F04C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x178F04D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x178F04B0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSource_TypeDefinitionIndex = 1653;

	class EventSource : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Guid>** StaticGet_s_activityDying()
		{
			return (::System::Action_1<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x5C70);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_namespaceBytes()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x5C78);
		}
		static ::System::UInt32* StaticGet_s_currentPid()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x2D30);
		}
		static ::System::Guid* StaticGet_AspNetEventSourceGuid()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x2D34);
		}
		static ::System::Byte* StaticGet_m_EventSourceExceptionRecurenceCount()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::EventHandler_1<::System::Diagnostics::Tracing::EventCommandEventArgs*>* m_eventCommandExecuted; // 0x10
		::System::Diagnostics::Tracing::ActivityTracker* m_activityTracker; // 0x18
		::Il2CppArray<::System::Diagnostics::Tracing::EtwSession*>* m_etwSessionIdMap; // 0x20
		::System::String* m_name; // 0x28
		::Il2CppArray<::System::Byte>* providerMetadata; // 0x30
		::System::Diagnostics::Tracing::EventDispatcher* m_Dispatchers; // 0x38
		::Il2CppArray<::System::String*>* m_traits; // 0x40
		::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>* m_eventData; // 0x48
		::System::Exception* m_constructionException; // 0x50
		::System::Diagnostics::Tracing::EventSource_OverideEventProvider* m_provider; // 0x58
		::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EtwSession*>* m_legacySessions; // 0x60
		::Il2CppArray<::System::Byte>* m_rawManifest; // 0x68
		::System::Diagnostics::Tracing::EventCommandEventArgs* m_deferredCommands; // 0x70
		::System::Int64 m_keywordTriggers; // 0x78
		::System::Guid m_guid; // 0x80
		::System::Int32 m_id; // 0x90
		::System::Diagnostics::Tracing::EventKeywords m_matchAnyKeyword; // 0x98
		::System::Byte m_outOfBandMessageCount; // 0xA0
		::System::Boolean m_completelyInited; // 0xA1
		::System::Boolean m_eventSourceEnabled; // 0xA2
		::System::Diagnostics::Tracing::SessionMask m_activityFilteringForETWEnabled; // 0xA4
		::System::Diagnostics::Tracing::EventLevel m_level; // 0xA8
		::System::Diagnostics::Tracing::EventSourceSettings m_config; // 0xAC
		::System::Diagnostics::Tracing::SessionMask m_curLiveSessions; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Diagnostics::Tracing::EventSourceSettings settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSourceSettings))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_1_OFFSET))(this, settings);
		}

		::System::Void _ctor_2(::System::Diagnostics::Tracing::EventSourceSettings settings, ::Il2CppArray<::System::String*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSourceSettings, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_2_OFFSET))(this, settings, traits);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CCTOR_OFFSET))();
		}

		::System::Void WriteMultiMerge(::System::String* eventName, ::System::Diagnostics::Tracing::EventSourceOptions& options, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, ::System::Guid* activityID, ::System::Guid* childActivityID, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventSourceOptions&, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::System::Guid*, ::System::Guid*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_OFFSET))(this, eventName, options, eventTypes, activityID, childActivityID, values);
		}

		::System::Void WriteMultiMergeInner(::System::String* eventName, ::System::Diagnostics::Tracing::EventSourceOptions& options, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, ::System::Guid* activityID, ::System::Guid* childActivityID, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventSourceOptions&, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::System::Guid*, ::System::Guid*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGEINNER_OFFSET))(this, eventName, options, eventTypes, activityID, childActivityID, values);
		}

		::System::Void WriteMultiMerge_1(::System::String* eventName, ::System::Diagnostics::Tracing::EventSourceOptions& options, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, ::System::Guid* activityID, ::System::Guid* childActivityID, ::System::Diagnostics::Tracing::EventSource_EventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventSourceOptions&, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::System::Guid*, ::System::Guid*, ::System::Diagnostics::Tracing::EventSource_EventData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_1_OFFSET))(this, eventName, options, eventTypes, activityID, childActivityID, data);
		}

		::System::Void WriteCleanup(::System::Runtime::InteropServices::GCHandle* pPins, ::System::Int32 cPins)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::GCHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITECLEANUP_OFFSET))(this, pPins, cPins);
		}

		::System::Void InitializeProviderMetadata()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZEPROVIDERMETADATA_OFFSET))(this);
		}

		static ::System::Int32 AddValueToMetaData(::System::Collections::Generic::List_1<::System::Byte>* metaData, ::System::String* value)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDVALUETOMETADATA_OFFSET))(metaData, value);
		}

		static ::System::Int32 HexDigit(::System::Char c)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_HEXDIGIT_OFFSET))(c);
		}

		::System::Diagnostics::Tracing::NameInfo* UpdateDescriptor(::System::String* name, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventInfo, ::System::Diagnostics::Tracing::EventSourceOptions& options, ::System::Diagnostics::Tracing::EventDescriptor& descriptor)
		{
			return ((::System::Diagnostics::Tracing::NameInfo*(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::System::Diagnostics::Tracing::EventSourceOptions&, ::System::Diagnostics::Tracing::EventDescriptor&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEDESCRIPTOR_OFFSET))(this, name, eventInfo, options, descriptor);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_NAME_OFFSET))(this);
		}

		::System::Guid get_Guid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_GUID_OFFSET))(this);
		}

		::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_OFFSET))(this);
		}

		::System::Boolean IsEnabled_1(::System::Diagnostics::Tracing::EventLevel level, ::System::Diagnostics::Tracing::EventKeywords keywords)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_1_OFFSET))(this, level, keywords);
		}

		::System::Boolean IsEnabled_2(::System::Diagnostics::Tracing::EventLevel level, ::System::Diagnostics::Tracing::EventKeywords keywords, ::System::Diagnostics::Tracing::EventChannel channel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventChannel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_2_OFFSET))(this, level, keywords, channel);
		}

		static ::System::Guid GetGuid(::System::Type* eventSourceType)
		{
			return ((::System::Guid(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETGUID_OFFSET))(eventSourceType);
		}

		static ::System::String* GetName(::System::Type* eventSourceType)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_OFFSET))(eventSourceType);
		}

		static ::System::Void SetCurrentThreadActivityId(::System::Guid activityId)
		{
			return ((::System::Void(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SETCURRENTTHREADACTIVITYID_OFFSET))(activityId);
		}

		static ::System::Guid get_CurrentThreadActivityId()
		{
			return ((::System::Guid(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_CURRENTTHREADACTIVITYID_OFFSET))();
		}

		static ::System::Guid get_InternalCurrentThreadActivityId()
		{
			return ((::System::Guid(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_INTERNALCURRENTTHREADACTIVITYID_OFFSET))();
		}

		static ::System::Guid get_FallbackActivityId()
		{
			return ((::System::Guid(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_FALLBACKACTIVITYID_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TOSTRING_OFFSET))(this);
		}

		::System::Void OnEventCommand(::System::Diagnostics::Tracing::EventCommandEventArgs* command)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventCommandEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ONEVENTCOMMAND_OFFSET))(this, command);
		}

		::System::Void WriteEvent(::System::Int32 eventId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(this, eventId);
		}

		::System::Void WriteEvent_1(::System::Int32 eventId, ::System::Int32 arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_1_OFFSET))(this, eventId, arg1);
		}

		::System::Void WriteEvent_2(::System::Int32 eventId, ::System::Int32 arg1, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_2_OFFSET))(this, eventId, arg1, arg2, arg3);
		}

		::System::Void WriteEvent_3(::System::Int32 eventId, ::System::String* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_3_OFFSET))(this, eventId, arg1);
		}

		::System::Void WriteEvent_4(::System::Int32 eventId, ::System::String* arg1, ::System::String* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_4_OFFSET))(this, eventId, arg1, arg2);
		}

		::System::Void WriteEvent_5(::System::Int32 eventId, ::System::String* arg1, ::System::String* arg2, ::System::String* arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_5_OFFSET))(this, eventId, arg1, arg2, arg3);
		}

		::System::Void WriteEventCore(::System::Int32 eventId, ::System::Int32 eventDataCount, ::System::Diagnostics::Tracing::EventSource_EventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Diagnostics::Tracing::EventSource_EventData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTCORE_OFFSET))(this, eventId, eventDataCount, data);
		}

		::System::Void WriteEventWithRelatedActivityIdCore(::System::Int32 eventId, ::System::Guid* relatedActivityId, ::System::Int32 eventDataCount, ::System::Diagnostics::Tracing::EventSource_EventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid*, ::System::Int32, ::System::Diagnostics::Tracing::EventSource_EventData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTWITHRELATEDACTIVITYIDCORE_OFFSET))(this, eventId, relatedActivityId, eventDataCount, data);
		}

		::System::Void WriteEvent_6(::System::Int32 eventId, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_6_OFFSET))(this, eventId, args);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_FINALIZE_OFFSET))(this);
		}

		::System::Void WriteStringToListener(::System::Diagnostics::Tracing::EventListener* listener, ::System::String* msg, ::System::Diagnostics::Tracing::SessionMask m)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*, ::System::String*, ::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOLISTENER_OFFSET))(this, listener, msg, m);
		}

		::System::Void WriteEventRaw(::System::String* eventName, ::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, ::System::Guid* activityID, ::System::Guid* relatedActivityID, ::System::Int32 dataCount, ::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTRAW_OFFSET))(this, eventName, eventDescriptor, activityID, relatedActivityID, dataCount, data);
		}

		::System::Void Initialize(::System::Guid eventSourceGuid, ::System::String* eventSourceName, ::Il2CppArray<::System::String*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZE_OFFSET))(this, eventSourceGuid, eventSourceName, traits);
		}

		static ::System::String* GetName_1(::System::Type* eventSourceType, ::System::Diagnostics::Tracing::EventManifestOptions flags)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_1_OFFSET))(eventSourceType, flags);
		}

		static ::System::Guid GenerateGuidFromName(::System::String* name)
		{
			return ((::System::Guid(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GENERATEGUIDFROMNAME_OFFSET))(name);
		}

		::System::Object* DecodeObject(::System::Int32 eventId, ::System::Int32 parameterId, ::System::Diagnostics::Tracing::EventSource_EventData*& data)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Diagnostics::Tracing::EventSource_EventData*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DECODEOBJECT_OFFSET))(this, eventId, parameterId, data);
		}

		::System::Diagnostics::Tracing::EventDispatcher* GetDispatcher(::System::Diagnostics::Tracing::EventListener* listener)
		{
			return ((::System::Diagnostics::Tracing::EventDispatcher*(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETDISPATCHER_OFFSET))(this, listener);
		}

		::System::Void WriteEventVarargs(::System::Int32 eventId, ::System::Guid* childActivityID, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTVARARGS_OFFSET))(this, eventId, childActivityID, args);
		}

		::Il2CppArray<::System::Object*>* SerializeEventArgs(::System::Int32 eventId, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SERIALIZEEVENTARGS_OFFSET))(this, eventId, args);
		}

		::System::Void LogEventArgsMismatches(::Il2CppArray<::System::Reflection::ParameterInfo*>* infos, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_LOGEVENTARGSMISMATCHES_OFFSET))(this, infos, args);
		}

		::System::Int32 GetParamLengthIncludingByteArray(::Il2CppArray<::System::Reflection::ParameterInfo*>* parameters)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETPARAMLENGTHINCLUDINGBYTEARRAY_OFFSET))(this, parameters);
		}

		::System::Void WriteToAllListeners(::System::Int32 eventId, ::System::Guid* childActivityID, ::System::Int32 eventDataCount, ::System::Diagnostics::Tracing::EventSource_EventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid*, ::System::Int32, ::System::Diagnostics::Tracing::EventSource_EventData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_OFFSET))(this, eventId, childActivityID, eventDataCount, data);
		}

		::System::Void WriteToAllListeners_1(::System::Int32 eventId, ::System::Guid* childActivityID, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_1_OFFSET))(this, eventId, childActivityID, args);
		}

		::System::Void DispatchToAllListeners(::System::Int32 eventId, ::System::Guid* childActivityID, ::System::Diagnostics::Tracing::EventWrittenEventArgs* eventCallbackArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid*, ::System::Diagnostics::Tracing::EventWrittenEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPATCHTOALLLISTENERS_OFFSET))(this, eventId, childActivityID, eventCallbackArgs);
		}

		::System::Void WriteEventString(::System::Diagnostics::Tracing::EventLevel level, ::System::Int64 keywords, ::System::String* msgString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTSTRING_OFFSET))(this, level, keywords, msgString);
		}

		::System::Void WriteStringToAllListeners(::System::String* eventName, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOALLLISTENERS_OFFSET))(this, eventName, msg);
		}

		::System::Diagnostics::Tracing::SessionMask GetEtwSessionMask(::System::Int32 eventId, ::System::Guid* childActivityID)
		{
			return ((::System::Diagnostics::Tracing::SessionMask(*)(::PVOID, ::System::Int32, ::System::Guid*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETETWSESSIONMASK_OFFSET))(this, eventId, childActivityID);
		}

		::System::Boolean IsEnabledByDefault(::System::Int32 eventNum, ::System::Boolean enable, ::System::Diagnostics::Tracing::EventLevel currentLevel, ::System::Diagnostics::Tracing::EventKeywords currentMatchAnyKeyword)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDBYDEFAULT_OFFSET))(this, eventNum, enable, currentLevel, currentMatchAnyKeyword);
		}

		::System::Boolean IsEnabledCommon(::System::Boolean enabled, ::System::Diagnostics::Tracing::EventLevel currentLevel, ::System::Diagnostics::Tracing::EventKeywords currentMatchAnyKeyword, ::System::Diagnostics::Tracing::EventLevel eventLevel, ::System::Diagnostics::Tracing::EventKeywords eventKeywords, ::System::Diagnostics::Tracing::EventChannel eventChannel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventChannel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDCOMMON_OFFSET))(this, enabled, currentLevel, currentMatchAnyKeyword, eventLevel, eventKeywords, eventChannel);
		}

		::System::Void ThrowEventSourceException(::System::String* eventName, ::System::Exception* innerEx)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_THROWEVENTSOURCEEXCEPTION_OFFSET))(this, eventName, innerEx);
		}

		::System::Void ValidateEventOpcodeForTransfer(::System::Diagnostics::Tracing::EventSource_EventMetadata& eventData, ::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource_EventMetadata&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATEEVENTOPCODEFORTRANSFER_OFFSET))(this, eventData, eventName);
		}

		static ::System::Diagnostics::Tracing::EventOpcode GetOpcodeWithDefault(::System::Diagnostics::Tracing::EventOpcode opcode, ::System::String* eventName)
		{
			return ((::System::Diagnostics::Tracing::EventOpcode(*)(::System::Diagnostics::Tracing::EventOpcode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETOPCODEWITHDEFAULT_OFFSET))(opcode, eventName);
		}

		::System::Void SendCommand(::System::Diagnostics::Tracing::EventListener* listener, ::System::Int32 perEventSourceSessionId, ::System::Int32 etwSessionId, ::System::Diagnostics::Tracing::EventCommand command, ::System::Boolean enable, ::System::Diagnostics::Tracing::EventLevel level, ::System::Diagnostics::Tracing::EventKeywords matchAnyKeyword, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* commandArguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*, ::System::Int32, ::System::Int32, ::System::Diagnostics::Tracing::EventCommand, ::System::Boolean, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDCOMMAND_OFFSET))(this, listener, perEventSourceSessionId, etwSessionId, command, enable, level, matchAnyKeyword, commandArguments);
		}

		::System::Void DoCommand(::System::Diagnostics::Tracing::EventCommandEventArgs* commandArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventCommandEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DOCOMMAND_OFFSET))(this, commandArgs);
		}

		::System::Void UpdateEtwSession(::System::Int32 sessionIdBit, ::System::Int32 etwSessionId, ::System::Boolean bEnable, ::System::String* activityFilters, ::System::Boolean participateInSampling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEETWSESSION_OFFSET))(this, sessionIdBit, etwSessionId, bEnable, activityFilters, participateInSampling);
		}

		static ::System::Boolean ParseCommandArgs(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* commandArguments, ::System::Boolean& participateInSampling, ::System::String*& activityFilters, ::System::Int32& sessionIdBit)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Boolean&, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_PARSECOMMANDARGS_OFFSET))(commandArguments, participateInSampling, activityFilters, sessionIdBit);
		}

		::System::Void UpdateKwdTriggers(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEKWDTRIGGERS_OFFSET))(this, enable);
		}

		::System::Boolean EnableEventForDispatcher(::System::Diagnostics::Tracing::EventDispatcher* dispatcher, ::System::Int32 eventId, ::System::Boolean value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventDispatcher*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENABLEEVENTFORDISPATCHER_OFFSET))(this, dispatcher, eventId, value);
		}

		::System::Boolean AnyEventEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ANYEVENTENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void EnsureDescriptorsInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENSUREDESCRIPTORSINITIALIZED_OFFSET))(this);
		}

		::System::Boolean SendManifest(::Il2CppArray<::System::Byte>* rawManifest)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDMANIFEST_OFFSET))(this, rawManifest);
		}

		static ::System::Attribute* GetCustomAttributeHelper(::System::Reflection::MemberInfo* member, ::System::Type* attributeType, ::System::Diagnostics::Tracing::EventManifestOptions flags)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETCUSTOMATTRIBUTEHELPER_OFFSET))(member, attributeType, flags);
		}

		static ::System::Boolean AttributeTypeNamesMatch(::System::Type* attributeType, ::System::Type* reflectedAttributeType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ATTRIBUTETYPENAMESMATCH_OFFSET))(attributeType, reflectedAttributeType);
		}

		static ::System::Type* GetEventSourceBaseType(::System::Type* eventSourceType, ::System::Boolean allowEventSourceOverride, ::System::Boolean reflectionOnly)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETEVENTSOURCEBASETYPE_OFFSET))(eventSourceType, allowEventSourceOverride, reflectionOnly);
		}

		static ::Il2CppArray<::System::Byte>* CreateManifestAndDescriptors(::System::Type* eventSourceType, ::System::String* eventSourceDllName, ::System::Diagnostics::Tracing::EventSource* source, ::System::Diagnostics::Tracing::EventManifestOptions flags)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Type*, ::System::String*, ::System::Diagnostics::Tracing::EventSource*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CREATEMANIFESTANDDESCRIPTORS_OFFSET))(eventSourceType, eventSourceDllName, source, flags);
		}

		static ::System::Boolean RemoveFirstArgIfRelatedActivityId(::Il2CppArray<::System::Reflection::ParameterInfo*>*& args)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Reflection::ParameterInfo*>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REMOVEFIRSTARGIFRELATEDACTIVITYID_OFFSET))(args);
		}

		static ::System::Void AddProviderEnumKind(::System::Diagnostics::Tracing::ManifestBuilder* manifest, ::System::Reflection::FieldInfo* staticField, ::System::String* providerEnumKind)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ManifestBuilder*, ::System::Reflection::FieldInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDPROVIDERENUMKIND_OFFSET))(manifest, staticField, providerEnumKind);
		}

		static ::System::Void AddEventDescriptor(::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>*& eventData, ::System::String* eventName, ::System::Diagnostics::Tracing::EventAttribute* eventAttribute, ::Il2CppArray<::System::Reflection::ParameterInfo*>* eventParameters, ::System::Boolean hasRelatedActivityID)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>*&, ::System::String*, ::System::Diagnostics::Tracing::EventAttribute*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDEVENTDESCRIPTOR_OFFSET))(eventData, eventName, eventAttribute, eventParameters, hasRelatedActivityID);
		}

		static ::System::Void TrimEventDescriptors(::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>*& eventData)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TRIMEVENTDESCRIPTORS_OFFSET))(eventData);
		}

		::System::Void AddListener(::System::Diagnostics::Tracing::EventListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDLISTENER_OFFSET))(this, listener);
		}

		static ::System::Void DebugCheckEvent(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& eventsByName, ::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>* eventData, ::System::Reflection::MethodInfo* method, ::System::Diagnostics::Tracing::EventAttribute* eventAttribute, ::System::Diagnostics::Tracing::ManifestBuilder* manifest, ::System::Diagnostics::Tracing::EventManifestOptions options)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&, ::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>*, ::System::Reflection::MethodInfo*, ::System::Diagnostics::Tracing::EventAttribute*, ::System::Diagnostics::Tracing::ManifestBuilder*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DEBUGCHECKEVENT_OFFSET))(eventsByName, eventData, method, eventAttribute, manifest, options);
		}

		static ::System::Int32 GetHelperCallFirstArg(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETHELPERCALLFIRSTARG_OFFSET))(method);
		}

		::System::Void ReportOutOfBandMessage(::System::String* msg, ::System::Boolean flush)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTOUTOFBANDMESSAGE_OFFSET))(this, msg, flush);
		}

		::System::Diagnostics::Tracing::EventSourceSettings ValidateSettings(::System::Diagnostics::Tracing::EventSourceSettings settings)
		{
			return ((::System::Diagnostics::Tracing::EventSourceSettings(*)(::PVOID, ::System::Diagnostics::Tracing::EventSourceSettings))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATESETTINGS_OFFSET))(this, settings);
		}

		::System::Boolean get_ThrowOnEventWriteErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_THROWONEVENTWRITEERRORS_OFFSET))(this);
		}

		::System::Boolean get_SelfDescribingEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_SELFDESCRIBINGEVENTS_OFFSET))(this);
		}

		::System::Void ReportActivitySamplingInfo(::System::Diagnostics::Tracing::EventListener* listener, ::System::Diagnostics::Tracing::SessionMask sessions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*, ::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTACTIVITYSAMPLINGINFO_OFFSET))(this, listener, sessions);
		}
	};
}
