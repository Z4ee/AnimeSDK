#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Diagnostics/EventLogEntryType.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_EQUALS_OFFSET UNITYSDK_OFFSET(0x193A79F0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_CATEGORYNUMBER_OFFSET UNITYSDK_OFFSET(0x193A76B0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x193A7670)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_DATA_OFFSET UNITYSDK_OFFSET(0x193A76F0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_ENTRYTYPE_OFFSET UNITYSDK_OFFSET(0x193A7730)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x193A7770)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x193A77B0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x193A77F0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x193A7830)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x193A7870)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_REPLACEMENTSTRINGS_OFFSET UNITYSDK_OFFSET(0x193A78B0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x193A78F0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_TIMEGENERATED_OFFSET UNITYSDK_OFFSET(0x193A7930)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_TIMEWRITTEN_OFFSET UNITYSDK_OFFSET(0x193A7970)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x193A79B0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x193A7A30)
#define SYSTEM_DIAGNOSTICS_EVENTLOGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x193A7630)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventLogEntry_TypeDefinitionIndex = 4092;

	class EventLogEntry : public ::System::ComponentModel::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_CATEGORY_OFFSET))(this);
		}

		::System::Int16 get_CategoryNumber()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_CATEGORYNUMBER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_DATA_OFFSET))(this);
		}

		::System::Diagnostics::EventLogEntryType get_EntryType()
		{
			return ((::System::Diagnostics::EventLogEntryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_ENTRYTYPE_OFFSET))(this);
		}

		::System::Int32 get_EventID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_EVENTID_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_INDEX_OFFSET))(this);
		}

		::System::Int64 get_InstanceId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_INSTANCEID_OFFSET))(this);
		}

		::System::String* get_MachineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_MACHINENAME_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_MESSAGE_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_ReplacementStrings()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_REPLACEMENTSTRINGS_OFFSET))(this);
		}

		::System::String* get_Source()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_SOURCE_OFFSET))(this);
		}

		::System::DateTime get_TimeGenerated()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_TIMEGENERATED_OFFSET))(this);
		}

		::System::DateTime get_TimeWritten()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_TIMEWRITTEN_OFFSET))(this);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_GET_USERNAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Diagnostics::EventLogEntry* otherEntry)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::EventLogEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_EQUALS_OFFSET))(this, otherEntry);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGENTRY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
