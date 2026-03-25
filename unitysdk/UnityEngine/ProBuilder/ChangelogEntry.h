#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::ProBuilder { class SemVer; }

#define UNITYENGINE_PROBUILDER_CHANGELOGENTRY_GET_RELEASENOTES_OFFSET UNITYSDK_OFFSET(0x187C1900)
#define UNITYENGINE_PROBUILDER_CHANGELOGENTRY_GET_VERSIONINFO_OFFSET UNITYSDK_OFFSET(0x187C18F0)
#define UNITYENGINE_PROBUILDER_CHANGELOGENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x187C1910)
#define UNITYENGINE_PROBUILDER_CHANGELOGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x187C18E0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ChangelogEntry_TypeDefinitionIndex = 34077;

	class ChangelogEntry : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::SemVer* m_VersionInfo; // 0x10
		::System::String* m_ReleaseNotes; // 0x18

		::System::Void _ctor(::UnityEngine::ProBuilder::SemVer* version, ::System::String* releaseNotes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::SemVer*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CHANGELOGENTRY__CTOR_OFFSET))(this, version, releaseNotes);
		}

		::UnityEngine::ProBuilder::SemVer* get_versionInfo()
		{
			return ((::UnityEngine::ProBuilder::SemVer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CHANGELOGENTRY_GET_VERSIONINFO_OFFSET))(this);
		}

		::System::String* get_releaseNotes()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CHANGELOGENTRY_GET_RELEASENOTES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_CHANGELOGENTRY_TOSTRING_OFFSET))(this);
		}
	};
}
