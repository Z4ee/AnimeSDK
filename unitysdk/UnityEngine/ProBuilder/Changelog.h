#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine::ProBuilder { class ChangelogEntry; }

#define UNITYENGINE_PROBUILDER_CHANGELOG_CREATEENTRY_OFFSET UNITYSDK_OFFSET(0x1A1FB6B0)
#define UNITYENGINE_PROBUILDER_CHANGELOG_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1A1FB300)
#define UNITYENGINE_PROBUILDER_CHANGELOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FB360)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Changelog_TypeDefinitionIndex = 39897;

	class Changelog : public ::System::Object
	{
	public:
		// static const ::System::String* k_ChangelogEntryPattern; // 0x0
		// static const ::System::String* k_VersionInfoPattern; // 0x0
		// static const ::System::String* k_VersionDatePattern; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>* m_Entries; // 0x10

		::System::Void _ctor(::System::String* log)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CHANGELOG__CTOR_OFFSET))(this, log);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>* get_entries()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CHANGELOG_GET_ENTRIES_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::ChangelogEntry* CreateEntry(::System::String* version, ::System::String* contents)
		{
			return ((::UnityEngine::ProBuilder::ChangelogEntry*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CHANGELOG_CREATEENTRY_OFFSET))(this, version, contents);
		}
	};
}
