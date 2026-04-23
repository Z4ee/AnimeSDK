#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_Section; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class DefaultConsoleConfigReader_ReadDeviceProfileContext; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_COLLECTOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A43BC20)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_DODUMPOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A43DA70)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_DUMPOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A43F1C0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_ISCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4390D0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A438440)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILESETTINGS_OFFSET UNITYSDK_OFFSET(0x1A438B60)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READFROMPATH_OFFSET UNITYSDK_OFFSET(0x1A433C60)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_TRYAPPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A43D100)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_TRYCOLLECTSECTION_OFFSET UNITYSDK_OFFSET(0x1A43B140)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_USEFORCURRENTDEVICE_OFFSET UNITYSDK_OFFSET(0x1A439380)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A43F910)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A43F900)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_TypeDefinitionIndex = 3875;

	class DefaultConsoleConfigReader : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DefaultSettingFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_TypeDefinitionIndex)->GetStaticField(0x14A70);
		}
		static ::System::String** StaticGet_DeviceProfileFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_TypeDefinitionIndex)->GetStaticField(0x14A78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER__CCTOR_OFFSET))();
		}

		::System::Void ReadFromPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READFROMPATH_OFFSET))(this, path);
		}

		static ::System::Void ReadDefaultSettings(::System::String* sourcePath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEFAULTSETTINGS_OFFSET))(sourcePath);
		}

		static ::System::Boolean IsComponent(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_ISCOMPONENT_OFFSET))(section, iniPath);
		}

		static ::System::Boolean UseForCurrentDevice(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_USEFORCURRENTDEVICE_OFFSET))(section, iniPath);
		}

		static ::System::Boolean TryCollectSection(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext* context, ::IniParserEx::IniFile_Section* section, ::System::Boolean isTop)
		{
			return ((::System::Boolean(*)(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext*, ::IniParserEx::IniFile_Section*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_TRYCOLLECTSECTION_OFFSET))(context, section, isTop);
		}

		static ::System::Void CollectOptions(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext* context, ::IniParserEx::IniFile_Section* targetSection, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& outOptions)
		{
			return ((::System::Void(*)(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext*, ::IniParserEx::IniFile_Section*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_COLLECTOPTIONS_OFFSET))(context, targetSection, outOptions);
		}

		static ::System::Void TryApplyOptions(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext* context)
		{
			return ((::System::Void(*)(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_TRYAPPLYOPTIONS_OFFSET))(context);
		}

		static ::System::String* DoDumpOptions(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext* context, ::IniParserEx::IniFile_Section* targetSection, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& outOptions, ::System::Int32 level)
		{
			return ((::System::String*(*)(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext*, ::IniParserEx::IniFile_Section*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_DODUMPOPTIONS_OFFSET))(context, targetSection, outOptions, level);
		}

		static ::System::Void DumpOptions(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext* context)
		{
			return ((::System::Void(*)(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_DUMPOPTIONS_OFFSET))(context);
		}

		static ::System::Void ReadDeviceProfileSettings(::System::String* sourcePath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILESETTINGS_OFFSET))(sourcePath);
		}
	};
}
