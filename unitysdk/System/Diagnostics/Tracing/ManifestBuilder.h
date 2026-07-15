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

#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDEVENTPARAMETER_OFFSET UNITYSDK_OFFSET(0x191ADD00)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDKEYWORD_OFFSET UNITYSDK_OFFSET(0x191B4BA0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDOPCODE_OFFSET UNITYSDK_OFFSET(0x191B69D0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDTASK_OFFSET UNITYSDK_OFFSET(0x191B5320)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_CREATEMANIFESTSTRING_OFFSET UNITYSDK_OFFSET(0x191BC000)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_CREATEMANIFEST_OFFSET UNITYSDK_OFFSET(0x191AE970)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ENDEVENT_OFFSET UNITYSDK_OFFSET(0x191AE670)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETKEYWORDS_OFFSET UNITYSDK_OFFSET(0x191BA8E0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETLEVELNAME_OFFSET UNITYSDK_OFFSET(0x191BA4C0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETLOCALIZEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x191B64E0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETOPCODENAME_OFFSET UNITYSDK_OFFSET(0x191BAC10)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETSUPPORTEDCULTURES_OFFSET UNITYSDK_OFFSET(0x191BEE40)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETTASKNAME_OFFSET UNITYSDK_OFFSET(0x191BAEA0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x191BB010)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GET_ERRORS_OFFSET UNITYSDK_OFFSET(0x191BEDA0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_MANIFESTERROR_OFFSET UNITYSDK_OFFSET(0x191B3E00)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_STARTEVENT_OFFSET UNITYSDK_OFFSET(0x191ADAB0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_TRANSLATEINDEXTOMANIFESTCONVENTION_OFFSET UNITYSDK_OFFSET(0x191BF320)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_TRANSLATETOMANIFESTCONVENTION_OFFSET UNITYSDK_OFFSET(0x191BB450)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_UPDATESTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x191BF260)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_WRITEMESSAGEATTRIB_OFFSET UNITYSDK_OFFSET(0x191BA5C0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_WRITENAMEANDMESSAGEATTRIBS_OFFSET UNITYSDK_OFFSET(0x191BEDB0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x191AD490)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ManifestBuilder_TypeDefinitionIndex = 1699;

	class ManifestBuilder : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* byteArrArgIndices; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* stringTab; // 0x18
		::System::Text::StringBuilder* sb; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* perEventByteArrayArgIndices; // 0x28
		::System::Text::StringBuilder* events; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>* mapsTab; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>* keywordTab; // 0x40
		::System::String* eventName; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* taskTab; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* opcodeTab; // 0x58
		::System::Text::StringBuilder* templates; // 0x60
		::System::Collections::Generic::IList_1<::System::String*>* errors; // 0x68
		::System::Resources::ResourceManager* resources; // 0x70
		::System::Int32 numParams; // 0x78
		::System::Diagnostics::Tracing::EventManifestOptions flags; // 0x7C

		::System::Void _ctor(::System::String* a1, ::System::Guid a2, ::System::String* a3, ::System::Resources::ResourceManager* a4, ::System::Diagnostics::Tracing::EventManifestOptions a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid, ::System::String*, ::System::Resources::ResourceManager*, ::System::Diagnostics::Tracing::EventManifestOptions))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AddOpcode(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDOPCODE_OFFSET))(this, a1, a2);
		}

		::System::Void AddTask(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDTASK_OFFSET))(this, a1, a2);
		}

		::System::Void AddKeyword(::System::String* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDKEYWORD_OFFSET))(this, a1, a2);
		}

		::System::Void StartEvent(::System::String* a1, ::System::Diagnostics::Tracing::EventAttribute* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_STARTEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void AddEventParameter(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_ADDEVENTPARAMETER_OFFSET))(this, a1, a2);
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

		::System::Void ManifestError(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_MANIFESTERROR_OFFSET))(this, a1, a2);
		}

		::System::String* CreateManifestString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_CREATEMANIFESTSTRING_OFFSET))(this);
		}

		::System::Void WriteNameAndMessageAttribs(::System::Text::StringBuilder* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_WRITENAMEANDMESSAGEATTRIBS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteMessageAttrib(::System::Text::StringBuilder* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_WRITEMESSAGEATTRIB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetLocalizedMessage(::System::String* a1, ::System::Globalization::CultureInfo* a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETLOCALIZEDMESSAGE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::System::Globalization::CultureInfo*>* GetSupportedCultures(::System::Resources::ResourceManager* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Globalization::CultureInfo*>*(*)(::System::Resources::ResourceManager*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETSUPPORTEDCULTURES_OFFSET))(a1);
		}

		static ::System::String* GetLevelName(::System::Diagnostics::Tracing::EventLevel a1)
		{
			return ((::System::String*(*)(::System::Diagnostics::Tracing::EventLevel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETLEVELNAME_OFFSET))(a1);
		}

		::System::String* GetTaskName(::System::Diagnostics::Tracing::EventTask a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Diagnostics::Tracing::EventTask, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETTASKNAME_OFFSET))(this, a1, a2);
		}

		::System::String* GetOpcodeName(::System::Diagnostics::Tracing::EventOpcode a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Diagnostics::Tracing::EventOpcode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETOPCODENAME_OFFSET))(this, a1, a2);
		}

		::System::String* GetKeywords(::System::UInt64 a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETKEYWORDS_OFFSET))(this, a1, a2);
		}

		::System::String* GetTypeName(::System::Type* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_GETTYPENAME_OFFSET))(this, a1);
		}

		static ::System::Void UpdateStringBuilder(::System::Text::StringBuilder*& a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*&, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_UPDATESTRINGBUILDER_OFFSET))(a1, a2, a3, a4);
		}

		::System::String* TranslateToManifestConvention(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_TRANSLATETOMANIFESTCONVENTION_OFFSET))(this, a1, a2);
		}

		::System::Int32 TranslateIndexToManifestConvention(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER_TRANSLATEINDEXTOMANIFESTCONVENTION_OFFSET))(this, a1, a2);
		}
	};
}
