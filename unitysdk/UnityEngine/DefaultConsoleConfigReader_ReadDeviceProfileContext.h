#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class DefaultConsoleConfigReader_SectionCache; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILECONTEXT_GET_GLOBALAPPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0x18A064D0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILECONTEXT_GET_INIFILE_OFFSET UNITYSDK_OFFSET(0x18A064B0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILECONTEXT_GET_SECTIONCACHES_OFFSET UNITYSDK_OFFSET(0x18A064C0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A05D80)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_ReadDeviceProfileContext_TypeDefinitionIndex = 3876;

	class DefaultConsoleConfigReader_ReadDeviceProfileContext : public ::System::Object
	{
	public:
		::IniParserEx::IniFile* _IniFile_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::DefaultConsoleConfigReader_SectionCache*>* _SectionCaches_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _GlobalApplyOptions_k__BackingField; // 0x20

		::System::Void _ctor(::IniParserEx::IniFile* file)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::IniFile*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILECONTEXT__CTOR_OFFSET))(this, file);
		}

		::IniParserEx::IniFile* get_IniFile()
		{
			return ((::IniParserEx::IniFile*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILECONTEXT_GET_INIFILE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::DefaultConsoleConfigReader_SectionCache*>* get_SectionCaches()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::DefaultConsoleConfigReader_SectionCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILECONTEXT_GET_SECTIONCACHES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_GlobalApplyOptions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILECONTEXT_GET_GLOBALAPPLYOPTIONS_OFFSET))(this);
		}
	};
}
