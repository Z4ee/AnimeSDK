#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventManifestOptions.h"
#include "unitysdk/System/Diagnostics/Tracing/EventOpcode.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTask.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics::Tracing { class EventAttribute; }
namespace System::Globalization { class CultureInfo; }
namespace System::Resources { class ResourceManager; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDEVENTPARAMETER_OFFSET UNITYSDK_OFFSET(0x162CB880)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDKEYWORD_OFFSET UNITYSDK_OFFSET(0x162D1820)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDOPCODE_OFFSET UNITYSDK_OFFSET(0x162D38B0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDTASK_OFFSET UNITYSDK_OFFSET(0x162D2090)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_CREATEMANIFESTSTRING_OFFSET UNITYSDK_OFFSET(0x162D8C90)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_CREATEMANIFEST_OFFSET UNITYSDK_OFFSET(0x162CC140)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ENDEVENT_OFFSET UNITYSDK_OFFSET(0x162CBE30)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETKEYWORDS_OFFSET UNITYSDK_OFFSET(0x162D75E0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETLEVELNAME_OFFSET UNITYSDK_OFFSET(0x162D7260)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETLOCALIZEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x162D33F0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETOPCODENAME_OFFSET UNITYSDK_OFFSET(0x162D7980)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETSUPPORTEDCULTURES_OFFSET UNITYSDK_OFFSET(0x162DB580)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETTASKNAME_OFFSET UNITYSDK_OFFSET(0x162D7C70)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x162D7E20)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GET_ERRORS_OFFSET UNITYSDK_OFFSET(0x162DB4E0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_MANIFESTERROR_OFFSET UNITYSDK_OFFSET(0x162D0F90)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_STARTEVENT_OFFSET UNITYSDK_OFFSET(0x162CB580)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_TRANSLATEINDEXTOMANIFESTCONVENTION_OFFSET UNITYSDK_OFFSET(0x162DB930)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_TRANSLATETOMANIFESTCONVENTION_OFFSET UNITYSDK_OFFSET(0x162D8150)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_UPDATESTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x162DB870)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_WRITEMESSAGEATTRIB_OFFSET UNITYSDK_OFFSET(0x162D7300)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_WRITENAMEANDMESSAGEATTRIBS_OFFSET UNITYSDK_OFFSET(0x162DB4F0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x162CAF60)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ManifestBuilder_TypeDefinitionIndex = 1696;

	class ManifestBuilder : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* stringTab; // 0x10
		::System::Collections::Generic::IList_1<::System::String*>* errors; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* perEventByteArrayArgIndices; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>* keywordTab; // 0x28
		::System::Text::StringBuilder* sb; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* taskTab; // 0x38
		::System::Resources::ResourceManager* resources; // 0x40
		::System::Text::StringBuilder* templates; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>* mapsTab; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* byteArrArgIndices; // 0x58
		::System::Text::StringBuilder* events; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* opcodeTab; // 0x68
		::System::String* eventName; // 0x70
		::System::Diagnostics::Tracing::EventManifestOptions flags; // 0x78
		::System::Int32 numParams; // 0x7C

		::System::Void _ctor(::System::String* providerName, ::System::Guid providerGuid, ::System::String* dllName, ::System::Resources::ResourceManager* resources, ::System::Diagnostics::Tracing::EventManifestOptions flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid, ::System::String*, ::System::Resources::ResourceManager*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER__CTOR_OFFSET))(this, providerName, providerGuid, dllName, resources, flags);
		}

		::System::Void AddOpcode(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDOPCODE_OFFSET))(this, name, value);
		}

		::System::Void AddTask(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDTASK_OFFSET))(this, name, value);
		}

		::System::Void AddKeyword(::System::String* name, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDKEYWORD_OFFSET))(this, name, value);
		}

		::System::Void StartEvent(::System::String* eventName, ::System::Diagnostics::Tracing::EventAttribute* eventAttribute)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_STARTEVENT_OFFSET))(this, eventName, eventAttribute);
		}

		::System::Void AddEventParameter(::System::Type* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDEVENTPARAMETER_OFFSET))(this, type, name);
		}

		::System::Void EndEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ENDEVENT_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* CreateManifest()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_CREATEMANIFEST_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::String*>* get_Errors()
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GET_ERRORS_OFFSET))(this);
		}

		::System::Void ManifestError(::System::String* msg, ::System::Boolean runtimeCritical)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_MANIFESTERROR_OFFSET))(this, msg, runtimeCritical);
		}

		::System::String* CreateManifestString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_CREATEMANIFESTSTRING_OFFSET))(this);
		}

		::System::Void WriteNameAndMessageAttribs(::System::Text::StringBuilder* stringBuilder, ::System::String* elementName, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_WRITENAMEANDMESSAGEATTRIBS_OFFSET))(this, stringBuilder, elementName, name);
		}

		::System::Void WriteMessageAttrib(::System::Text::StringBuilder* stringBuilder, ::System::String* elementName, ::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_WRITEMESSAGEATTRIB_OFFSET))(this, stringBuilder, elementName, name, value);
		}

		::System::String* GetLocalizedMessage(::System::String* key, ::System::Globalization::CultureInfo* ci, ::System::Boolean etwFormat)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETLOCALIZEDMESSAGE_OFFSET))(this, key, ci, etwFormat);
		}

		static ::System::Collections::Generic::List_1<::System::Globalization::CultureInfo*>* GetSupportedCultures(::System::Resources::ResourceManager* resources)
		{
			return ((::System::Collections::Generic::List_1<::System::Globalization::CultureInfo*>*(*)(::System::Resources::ResourceManager*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETSUPPORTEDCULTURES_OFFSET))(resources);
		}

		static ::System::String* GetLevelName(::System::Diagnostics::Tracing::EventLevel level)
		{
			return ((::System::String*(*)(::System::Diagnostics::Tracing::EventLevel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETLEVELNAME_OFFSET))(level);
		}

		::System::String* GetTaskName(::System::Diagnostics::Tracing::EventTask task, ::System::String* eventName)
		{
			return ((::System::String*(*)(::PVOID, ::System::Diagnostics::Tracing::EventTask, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETTASKNAME_OFFSET))(this, task, eventName);
		}

		::System::String* GetOpcodeName(::System::Diagnostics::Tracing::EventOpcode opcode, ::System::String* eventName)
		{
			return ((::System::String*(*)(::PVOID, ::System::Diagnostics::Tracing::EventOpcode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETOPCODENAME_OFFSET))(this, opcode, eventName);
		}

		::System::String* GetKeywords(::System::UInt64 keywords, ::System::String* eventName)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETKEYWORDS_OFFSET))(this, keywords, eventName);
		}

		::System::String* GetTypeName(::System::Type* type)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETTYPENAME_OFFSET))(this, type);
		}

		static ::System::Void UpdateStringBuilder(::System::Text::StringBuilder*& stringBuilder, ::System::String* eventMessage, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*&, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_UPDATESTRINGBUILDER_OFFSET))(stringBuilder, eventMessage, startIndex, count);
		}

		::System::String* TranslateToManifestConvention(::System::String* eventMessage, ::System::String* evtName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_TRANSLATETOMANIFESTCONVENTION_OFFSET))(this, eventMessage, evtName);
		}

		::System::Int32 TranslateIndexToManifestConvention(::System::Int32 idx, ::System::String* evtName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_TRANSLATEINDEXTOMANIFESTCONVENTION_OFFSET))(this, idx, evtName);
		}
	};
}
