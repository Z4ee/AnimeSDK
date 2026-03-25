#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_Section; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_SECTION_OFFSET UNITYSDK_OFFSET(0x18A06520)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_SHOULDUSE_OFFSET UNITYSDK_OFFSET(0x18A064E0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_TOPSECT_OFFSET UNITYSDK_OFFSET(0x18A06500)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_SECTION_OFFSET UNITYSDK_OFFSET(0x18A06530)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_SHOULDUSE_OFFSET UNITYSDK_OFFSET(0x18A064F0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_TOPSECT_OFFSET UNITYSDK_OFFSET(0x18A06510)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A021A0)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_SectionCache_TypeDefinitionIndex = 3875;

	class DefaultConsoleConfigReader_SectionCache : public ::System::Object
	{
	public:
		::System::Boolean _ShouldUse_k__BackingField; // 0x10
		::System::Boolean _TopSect_k__BackingField; // 0x11
		::IniParserEx::IniFile_Section* _Section_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShouldUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_SHOULDUSE_OFFSET))(this);
		}

		::System::Void set_ShouldUse(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_SHOULDUSE_OFFSET))(this, value);
		}

		::System::Boolean get_TopSect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_TOPSECT_OFFSET))(this);
		}

		::System::Void set_TopSect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_TOPSECT_OFFSET))(this, value);
		}

		::IniParserEx::IniFile_Section* get_Section()
		{
			return ((::IniParserEx::IniFile_Section*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_SECTION_OFFSET))(this);
		}

		::System::Void set_Section(::IniParserEx::IniFile_Section* value)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::IniFile_Section*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_SECTION_OFFSET))(this, value);
		}
	};
}
