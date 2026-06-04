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

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDEVENTDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x186B6A40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x186A0230)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDPROVIDERENUMKIND_OFFSET UNITYSDK_OFFSET(0x186B49F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDVALUETOMETADATA_OFFSET UNITYSDK_OFFSET(0x186A7160)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ANYEVENTENABLED_OFFSET UNITYSDK_OFFSET(0x186B1A00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ATTRIBUTETYPENAMESMATCH_OFFSET UNITYSDK_OFFSET(0x186B4540)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CREATEMANIFESTANDDESCRIPTORS_OFFSET UNITYSDK_OFFSET(0x186B26C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DEBUGCHECKEVENT_OFFSET UNITYSDK_OFFSET(0x186B5E30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DECODEOBJECT_OFFSET UNITYSDK_OFFSET(0x186AE480)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPATCHTOALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x186AF180)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x186AC7F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186A0680)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DOCOMMAND_OFFSET UNITYSDK_OFFSET(0x186AD470)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENABLEEVENTFORDISPATCHER_OFFSET UNITYSDK_OFFSET(0x186B11E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENSUREDESCRIPTORSINITIALIZED_OFFSET UNITYSDK_OFFSET(0x186B0D20)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x186ACD00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GENERATEGUIDFROMNAME_OFFSET UNITYSDK_OFFSET(0x186A8BB0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETCUSTOMATTRIBUTEHELPER_OFFSET UNITYSDK_OFFSET(0x186A7C90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETDISPATCHER_OFFSET UNITYSDK_OFFSET(0x186AEB50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETETWSESSIONMASK_OFFSET UNITYSDK_OFFSET(0x186AA9D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETEVENTSOURCEBASETYPE_OFFSET UNITYSDK_OFFSET(0x186B4730)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETGUID_OFFSET UNITYSDK_OFFSET(0x186A7A50)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETHELPERCALLFIRSTARG_OFFSET UNITYSDK_OFFSET(0x186B7130)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_1_OFFSET UNITYSDK_OFFSET(0x186A8D90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_OFFSET UNITYSDK_OFFSET(0x186A8D60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETOPCODEWITHDEFAULT_OFFSET UNITYSDK_OFFSET(0x186B0B10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETPARAMLENGTHINCLUDINGBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x186AF0D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_CURRENTTHREADACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1869B610)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_FALLBACKACTIVITYID_OFFSET UNITYSDK_OFFSET(0x186A8E60)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x186A79C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_INTERNALCURRENTTHREADACTIVITYID_OFFSET UNITYSDK_OFFSET(0x18699930)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x186B2680)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x186A79B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_SELFDESCRIBINGEVENTS_OFFSET UNITYSDK_OFFSET(0x186AADA0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_THROWONEVENTWRITEERRORS_OFFSET UNITYSDK_OFFSET(0x186B0A80)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_HEXDIGIT_OFFSET UNITYSDK_OFFSET(0x186A78B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZEPROVIDERMETADATA_OFFSET UNITYSDK_OFFSET(0x186A6C70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x186A9250)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDBYDEFAULT_OFFSET UNITYSDK_OFFSET(0x186B09F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDCOMMON_OFFSET UNITYSDK_OFFSET(0x186A7A20)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_1_OFFSET UNITYSDK_OFFSET(0x186A55F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_2_OFFSET UNITYSDK_OFFSET(0x186A79E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_OFFSET UNITYSDK_OFFSET(0x186A79D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_LOGEVENTARGSMISMATCHES_OFFSET UNITYSDK_OFFSET(0x186AEB80)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ONEVENTCOMMAND_OFFSET UNITYSDK_OFFSET(0x186A9750)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_PARSECOMMANDARGS_OFFSET UNITYSDK_OFFSET(0x186B12A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REMOVEFIRSTARGIFRELATEDACTIVITYID_OFFSET UNITYSDK_OFFSET(0x186B5CD0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTACTIVITYSAMPLINGINFO_OFFSET UNITYSDK_OFFSET(0x186B1BE0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTOUTOFBANDMESSAGE_OFFSET UNITYSDK_OFFSET(0x18699280)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDCOMMAND_OFFSET UNITYSDK_OFFSET(0x186B0B70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDMANIFEST_OFFSET UNITYSDK_OFFSET(0x186AC900)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SERIALIZEEVENTARGS_OFFSET UNITYSDK_OFFSET(0x186AEE40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SETCURRENTTHREADACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1869B860)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_THROWEVENTSOURCEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x186AADC0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186A8F70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TRIMEVENTDESCRIPTORS_OFFSET UNITYSDK_OFFSET(0x186B6C70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x186A6B40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEETWSESSION_OFFSET UNITYSDK_OFFSET(0x186B1590)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEKWDTRIGGERS_OFFSET UNITYSDK_OFFSET(0x186B1A90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATEEVENTOPCODEFORTRANSFER_OFFSET UNITYSDK_OFFSET(0x186AA990)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATESETTINGS_OFFSET UNITYSDK_OFFSET(0x186A91F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITECLEANUP_OFFSET UNITYSDK_OFFSET(0x186A6450)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTCORE_OFFSET UNITYSDK_OFFSET(0x186A9780)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTRAW_OFFSET UNITYSDK_OFFSET(0x186A63D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTSTRING_OFFSET UNITYSDK_OFFSET(0x186ACF00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTVARARGS_OFFSET UNITYSDK_OFFSET(0x186ABC90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTWITHRELATEDACTIVITYIDCORE_OFFSET UNITYSDK_OFFSET(0x186A9F00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_1_OFFSET UNITYSDK_OFFSET(0x186A97A0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_2_OFFSET UNITYSDK_OFFSET(0x186A98E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_3_OFFSET UNITYSDK_OFFSET(0x186A9A40)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_4_OFFSET UNITYSDK_OFFSET(0x186A9B90)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_5_OFFSET UNITYSDK_OFFSET(0x186A9D30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_6_OFFSET UNITYSDK_OFFSET(0x186ABC80)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x186A9760)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGEINNER_OFFSET UNITYSDK_OFFSET(0x186A5630)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_1_OFFSET UNITYSDK_OFFSET(0x186A6540)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_OFFSET UNITYSDK_OFFSET(0x186A5560)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x186B0710)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOLISTENER_OFFSET UNITYSDK_OFFSET(0x186ACD70)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_1_OFFSET UNITYSDK_OFFSET(0x186AED10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x186AB910)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186B74C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186A9100)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x186A9110)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x186A90F0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSource_TypeDefinitionIndex = 1651;

	class EventSource : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_namespaceBytes()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x53F0);
		}
		static ::System::Action_1<::System::Guid>** StaticGet_s_activityDying()
		{
			return (::System::Action_1<::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x53F8);
		}
		static ::System::Guid* StaticGet_AspNetEventSourceGuid()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x2D90);
		}
		static ::System::UInt32* StaticGet_s_currentPid()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x2DA0);
		}
		static ::System::Byte* StaticGet_m_EventSourceExceptionRecurenceCount()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EventSource_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Diagnostics::Tracing::EventSource_OverideEventProvider* m_provider; // 0x10
		::System::String* m_name; // 0x18
		::Il2CppArray<::System::Byte>* providerMetadata; // 0x20
		::System::Diagnostics::Tracing::EventDispatcher* m_Dispatchers; // 0x28
		::System::Exception* m_constructionException; // 0x30
		::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>* m_eventData; // 0x38
		::Il2CppArray<::System::Byte>* m_rawManifest; // 0x40
		::Il2CppArray<::System::String*>* m_traits; // 0x48
		::System::EventHandler_1<::System::Diagnostics::Tracing::EventCommandEventArgs*>* m_eventCommandExecuted; // 0x50
		::Il2CppArray<::System::Diagnostics::Tracing::EtwSession*>* m_etwSessionIdMap; // 0x58
		::System::Diagnostics::Tracing::ActivityTracker* m_activityTracker; // 0x60
		::System::Collections::Generic::List_1<::System::Diagnostics::Tracing::EtwSession*>* m_legacySessions; // 0x68
		::System::Diagnostics::Tracing::EventCommandEventArgs* m_deferredCommands; // 0x70
		::System::Int64 m_keywordTriggers; // 0x78
		::System::Diagnostics::Tracing::EventSourceSettings m_config; // 0x80
		::System::Guid m_guid; // 0x84
		::System::Diagnostics::Tracing::EventKeywords m_matchAnyKeyword; // 0x98
		::System::Boolean m_completelyInited; // 0xA0
		::System::Boolean m_eventSourceEnabled; // 0xA1
		::System::Byte m_outOfBandMessageCount; // 0xA2
		::System::Diagnostics::Tracing::SessionMask m_curLiveSessions; // 0xA4
		::System::Int32 m_id; // 0xA8
		::System::Diagnostics::Tracing::SessionMask m_activityFilteringForETWEnabled; // 0xAC
		::System::Diagnostics::Tracing::EventLevel m_level; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Diagnostics::Tracing::EventSourceSettings a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSourceSettings))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Diagnostics::Tracing::EventSourceSettings a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSourceSettings, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE__CCTOR_OFFSET))();
		}

		::System::Void WriteMultiMerge(::System::String* a1, ::System::Diagnostics::Tracing::EventSourceOptions& a2, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* a3, ::System::Guid* a4, ::System::Guid* a5, ::Il2CppArray<::System::Object*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventSourceOptions&, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::System::Guid*, ::System::Guid*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteMultiMergeInner(::System::String* a1, ::System::Diagnostics::Tracing::EventSourceOptions& a2, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* a3, ::System::Guid* a4, ::System::Guid* a5, ::Il2CppArray<::System::Object*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventSourceOptions&, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::System::Guid*, ::System::Guid*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGEINNER_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteMultiMerge_1(::System::String* a1, ::System::Diagnostics::Tracing::EventSourceOptions& a2, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* a3, ::System::Guid* a4, ::System::Guid* a5, ::System::Diagnostics::Tracing::EventSource_EventData* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventSourceOptions&, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::System::Guid*, ::System::Guid*, ::System::Diagnostics::Tracing::EventSource_EventData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEMULTIMERGE_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteCleanup(::System::Runtime::InteropServices::GCHandle* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::GCHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITECLEANUP_OFFSET))(this, a1, a2);
		}

		::System::Void InitializeProviderMetadata()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZEPROVIDERMETADATA_OFFSET))(this);
		}

		static ::System::Int32 AddValueToMetaData(::System::Collections::Generic::List_1<::System::Byte>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDVALUETOMETADATA_OFFSET))(a1, a2);
		}

		static ::System::Int32 HexDigit(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_HEXDIGIT_OFFSET))(a1);
		}

		::System::Diagnostics::Tracing::NameInfo* UpdateDescriptor(::System::String* a1, ::System::Diagnostics::Tracing::TraceLoggingEventTypes* a2, ::System::Diagnostics::Tracing::EventSourceOptions& a3, ::System::Diagnostics::Tracing::EventDescriptor& a4)
		{
			return ((::System::Diagnostics::Tracing::NameInfo*(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ::System::Diagnostics::Tracing::EventSourceOptions&, ::System::Diagnostics::Tracing::EventDescriptor&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEDESCRIPTOR_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Boolean IsEnabled_1(::System::Diagnostics::Tracing::EventLevel a1, ::System::Diagnostics::Tracing::EventKeywords a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEnabled_2(::System::Diagnostics::Tracing::EventLevel a1, ::System::Diagnostics::Tracing::EventKeywords a2, ::System::Diagnostics::Tracing::EventChannel a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventChannel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLED_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Guid GetGuid(::System::Type* a1)
		{
			return ((::System::Guid(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETGUID_OFFSET))(a1);
		}

		static ::System::String* GetName(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_OFFSET))(a1);
		}

		static ::System::Void SetCurrentThreadActivityId(::System::Guid a1)
		{
			return ((::System::Void(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SETCURRENTTHREADACTIVITYID_OFFSET))(a1);
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

		::System::Void OnEventCommand(::System::Diagnostics::Tracing::EventCommandEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventCommandEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ONEVENTCOMMAND_OFFSET))(this, a1);
		}

		::System::Void WriteEvent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_OFFSET))(this, a1);
		}

		::System::Void WriteEvent_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEvent_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteEvent_3(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_3_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEvent_4(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEvent_5(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteEventCore(::System::Int32 a1, ::System::Int32 a2, ::System::Diagnostics::Tracing::EventSource_EventData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Diagnostics::Tracing::EventSource_EventData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTCORE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEventWithRelatedActivityIdCore(::System::Int32 a1, ::System::Guid* a2, ::System::Int32 a3, ::System::Diagnostics::Tracing::EventSource_EventData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid*, ::System::Int32, ::System::Diagnostics::Tracing::EventSource_EventData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTWITHRELATEDACTIVITYIDCORE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteEvent_6(::System::Int32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENT_6_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_FINALIZE_OFFSET))(this);
		}

		::System::Void WriteStringToListener(::System::Diagnostics::Tracing::EventListener* a1, ::System::String* a2, ::System::Diagnostics::Tracing::SessionMask a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*, ::System::String*, ::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOLISTENER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEventRaw(::System::String* a1, ::System::Diagnostics::Tracing::EventDescriptor& a2, ::System::Guid* a3, ::System::Guid* a4, ::System::Int32 a5, ::System::IntPtr a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTRAW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Initialize(::System::Guid a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* GetName_1(::System::Type* a1, ::System::Diagnostics::Tracing::EventManifestOptions a2)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETNAME_1_OFFSET))(a1, a2);
		}

		static ::System::Guid GenerateGuidFromName(::System::String* a1)
		{
			return ((::System::Guid(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GENERATEGUIDFROMNAME_OFFSET))(a1);
		}

		::System::Object* DecodeObject(::System::Int32 a1, ::System::Int32 a2, ::System::Diagnostics::Tracing::EventSource_EventData*& a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Diagnostics::Tracing::EventSource_EventData*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DECODEOBJECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Diagnostics::Tracing::EventDispatcher* GetDispatcher(::System::Diagnostics::Tracing::EventListener* a1)
		{
			return ((::System::Diagnostics::Tracing::EventDispatcher*(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETDISPATCHER_OFFSET))(this, a1);
		}

		::System::Void WriteEventVarargs(::System::Int32 a1, ::System::Guid* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTVARARGS_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* SerializeEventArgs(::System::Int32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SERIALIZEEVENTARGS_OFFSET))(this, a1, a2);
		}

		::System::Void LogEventArgsMismatches(::Il2CppArray<::System::Reflection::ParameterInfo*>* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_LOGEVENTARGSMISMATCHES_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetParamLengthIncludingByteArray(::Il2CppArray<::System::Reflection::ParameterInfo*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETPARAMLENGTHINCLUDINGBYTEARRAY_OFFSET))(this, a1);
		}

		::System::Void WriteToAllListeners(::System::Int32 a1, ::System::Guid* a2, ::System::Int32 a3, ::System::Diagnostics::Tracing::EventSource_EventData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid*, ::System::Int32, ::System::Diagnostics::Tracing::EventSource_EventData*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteToAllListeners_1(::System::Int32 a1, ::System::Guid* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITETOALLLISTENERS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DispatchToAllListeners(::System::Int32 a1, ::System::Guid* a2, ::System::Diagnostics::Tracing::EventWrittenEventArgs* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Guid*, ::System::Diagnostics::Tracing::EventWrittenEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DISPATCHTOALLLISTENERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEventString(::System::Diagnostics::Tracing::EventLevel a1, ::System::Int64 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventLevel, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITEEVENTSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStringToAllListeners(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_WRITESTRINGTOALLLISTENERS_OFFSET))(this, a1, a2);
		}

		::System::Diagnostics::Tracing::SessionMask GetEtwSessionMask(::System::Int32 a1, ::System::Guid* a2)
		{
			return ((::System::Diagnostics::Tracing::SessionMask(*)(::PVOID, ::System::Int32, ::System::Guid*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETETWSESSIONMASK_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEnabledByDefault(::System::Int32 a1, ::System::Boolean a2, ::System::Diagnostics::Tracing::EventLevel a3, ::System::Diagnostics::Tracing::EventKeywords a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDBYDEFAULT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsEnabledCommon(::System::Boolean a1, ::System::Diagnostics::Tracing::EventLevel a2, ::System::Diagnostics::Tracing::EventKeywords a3, ::System::Diagnostics::Tracing::EventLevel a4, ::System::Diagnostics::Tracing::EventKeywords a5, ::System::Diagnostics::Tracing::EventChannel a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Diagnostics::Tracing::EventChannel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ISENABLEDCOMMON_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ThrowEventSourceException(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_THROWEVENTSOURCEEXCEPTION_OFFSET))(this, a1, a2);
		}

		::System::Void ValidateEventOpcodeForTransfer(::System::Diagnostics::Tracing::EventSource_EventMetadata& a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventSource_EventMetadata&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATEEVENTOPCODEFORTRANSFER_OFFSET))(this, a1, a2);
		}

		static ::System::Diagnostics::Tracing::EventOpcode GetOpcodeWithDefault(::System::Diagnostics::Tracing::EventOpcode a1, ::System::String* a2)
		{
			return ((::System::Diagnostics::Tracing::EventOpcode(*)(::System::Diagnostics::Tracing::EventOpcode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETOPCODEWITHDEFAULT_OFFSET))(a1, a2);
		}

		::System::Void SendCommand(::System::Diagnostics::Tracing::EventListener* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Diagnostics::Tracing::EventCommand a4, ::System::Boolean a5, ::System::Diagnostics::Tracing::EventLevel a6, ::System::Diagnostics::Tracing::EventKeywords a7, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*, ::System::Int32, ::System::Int32, ::System::Diagnostics::Tracing::EventCommand, ::System::Boolean, ::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDCOMMAND_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void DoCommand(::System::Diagnostics::Tracing::EventCommandEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventCommandEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DOCOMMAND_OFFSET))(this, a1);
		}

		::System::Void UpdateEtwSession(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEETWSESSION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ParseCommandArgs(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a1, ::System::Boolean& a2, ::System::String*& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Boolean&, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_PARSECOMMANDARGS_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void UpdateKwdTriggers(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_UPDATEKWDTRIGGERS_OFFSET))(this, a1);
		}

		::System::Boolean EnableEventForDispatcher(::System::Diagnostics::Tracing::EventDispatcher* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::EventDispatcher*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ENABLEEVENTFORDISPATCHER_OFFSET))(this, a1, a2, a3);
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

		::System::Boolean SendManifest(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_SENDMANIFEST_OFFSET))(this, a1);
		}

		static ::System::Attribute* GetCustomAttributeHelper(::System::Reflection::MemberInfo* a1, ::System::Type* a2, ::System::Diagnostics::Tracing::EventManifestOptions a3)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETCUSTOMATTRIBUTEHELPER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean AttributeTypeNamesMatch(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ATTRIBUTETYPENAMESMATCH_OFFSET))(a1, a2);
		}

		static ::System::Type* GetEventSourceBaseType(::System::Type* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETEVENTSOURCEBASETYPE_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* CreateManifestAndDescriptors(::System::Type* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventSource* a3, ::System::Diagnostics::Tracing::EventManifestOptions a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Type*, ::System::String*, ::System::Diagnostics::Tracing::EventSource*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_CREATEMANIFESTANDDESCRIPTORS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean RemoveFirstArgIfRelatedActivityId(::Il2CppArray<::System::Reflection::ParameterInfo*>*& a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Reflection::ParameterInfo*>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REMOVEFIRSTARGIFRELATEDACTIVITYID_OFFSET))(a1);
		}

		static ::System::Void AddProviderEnumKind(::System::Diagnostics::Tracing::ManifestBuilder* a1, ::System::Reflection::FieldInfo* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::ManifestBuilder*, ::System::Reflection::FieldInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDPROVIDERENUMKIND_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddEventDescriptor(::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>*& a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventAttribute* a3, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>*&, ::System::String*, ::System::Diagnostics::Tracing::EventAttribute*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDEVENTDESCRIPTOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void TrimEventDescriptors(::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>*& a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>*&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_TRIMEVENTDESCRIPTORS_OFFSET))(a1);
		}

		::System::Void AddListener(::System::Diagnostics::Tracing::EventListener* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_ADDLISTENER_OFFSET))(this, a1);
		}

		static ::System::Void DebugCheckEvent(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& a1, ::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>* a2, ::System::Reflection::MethodInfo* a3, ::System::Diagnostics::Tracing::EventAttribute* a4, ::System::Diagnostics::Tracing::ManifestBuilder* a5, ::System::Diagnostics::Tracing::EventManifestOptions a6)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&, ::Il2CppArray<::System::Diagnostics::Tracing::EventSource_EventMetadata>*, ::System::Reflection::MethodInfo*, ::System::Diagnostics::Tracing::EventAttribute*, ::System::Diagnostics::Tracing::ManifestBuilder*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_DEBUGCHECKEVENT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 GetHelperCallFirstArg(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GETHELPERCALLFIRSTARG_OFFSET))(a1);
		}

		::System::Void ReportOutOfBandMessage(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTOUTOFBANDMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Diagnostics::Tracing::EventSourceSettings ValidateSettings(::System::Diagnostics::Tracing::EventSourceSettings a1)
		{
			return ((::System::Diagnostics::Tracing::EventSourceSettings(*)(::PVOID, ::System::Diagnostics::Tracing::EventSourceSettings))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_VALIDATESETTINGS_OFFSET))(this, a1);
		}

		::System::Boolean get_ThrowOnEventWriteErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_THROWONEVENTWRITEERRORS_OFFSET))(this);
		}

		::System::Boolean get_SelfDescribingEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_GET_SELFDESCRIBINGEVENTS_OFFSET))(this);
		}

		::System::Void ReportActivitySamplingInfo(::System::Diagnostics::Tracing::EventListener* a1, ::System::Diagnostics::Tracing::SessionMask a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventListener*, ::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCE_REPORTACTIVITYSAMPLINGINFO_OFFSET))(this, a1, a2);
		}
	};
}
