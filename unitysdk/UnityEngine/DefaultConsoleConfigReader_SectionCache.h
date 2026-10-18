#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_Section; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_SECTION_OFFSET UNITYSDK_OFFSET(0x1F3E73B0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_SHOULDUSE_OFFSET UNITYSDK_OFFSET(0x1F3E7370)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_TOPSECT_OFFSET UNITYSDK_OFFSET(0x1F3E7390)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_SECTION_OFFSET UNITYSDK_OFFSET(0x1F3E73C0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_SHOULDUSE_OFFSET UNITYSDK_OFFSET(0x1F3E7380)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_TOPSECT_OFFSET UNITYSDK_OFFSET(0x1F3E73A0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E3590)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_SectionCache_TypeDefinitionIndex = 4065;

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

		::System::Void set_ShouldUse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_SHOULDUSE_OFFSET))(this, a1);
		}

		::System::Boolean get_TopSect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_TOPSECT_OFFSET))(this);
		}

		::System::Void set_TopSect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_TOPSECT_OFFSET))(this, a1);
		}

		::IniParserEx::IniFile_Section* get_Section()
		{
			return ((::IniParserEx::IniFile_Section*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_GET_SECTION_OFFSET))(this);
		}

		::System::Void set_Section(::IniParserEx::IniFile_Section* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::IniFile_Section*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_SECTIONCACHE_SET_SECTION_OFFSET))(this, a1);
		}
	};
}
