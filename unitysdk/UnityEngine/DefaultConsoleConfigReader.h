#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_Section; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class DefaultConsoleConfigReader_ReadDeviceProfileContext; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_COLLECTOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B28D630)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_DODUMPOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B28F080)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_DUMPOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B2905D0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_ISCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B28A9A0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B289DD0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILESETTINGS_OFFSET UNITYSDK_OFFSET(0x1B28A450)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READFROMPATH_OFFSET UNITYSDK_OFFSET(0x1B285930)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_TRYAPPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B28E900)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_TRYCOLLECTSECTION_OFFSET UNITYSDK_OFFSET(0x1B28CA90)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_USEFORCURRENTDEVICE_OFFSET UNITYSDK_OFFSET(0x1B28AC60)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B290D10)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B290D00)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_TypeDefinitionIndex = 4049;

	class DefaultConsoleConfigReader : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DeviceProfileFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_TypeDefinitionIndex)->GetStaticField(0x2EC80);
		}
		static ::System::String** StaticGet_DefaultSettingFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultConsoleConfigReader_TypeDefinitionIndex)->GetStaticField(0x2EC88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER__CCTOR_OFFSET))();
		}

		::System::Void ReadFromPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READFROMPATH_OFFSET))(this, a1);
		}

		static ::System::Void ReadDefaultSettings(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEFAULTSETTINGS_OFFSET))(a1);
		}

		static ::System::Boolean IsComponent(::IniParserEx::IniFile_Section* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_ISCOMPONENT_OFFSET))(a1, a2);
		}

		static ::System::Boolean UseForCurrentDevice(::IniParserEx::IniFile_Section* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_USEFORCURRENTDEVICE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryCollectSection(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext* a1, ::IniParserEx::IniFile_Section* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext*, ::IniParserEx::IniFile_Section*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_TRYCOLLECTSECTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CollectOptions(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext* a1, ::IniParserEx::IniFile_Section* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext*, ::IniParserEx::IniFile_Section*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_COLLECTOPTIONS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TryApplyOptions(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext* a1)
		{
			return ((::System::Void(*)(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_TRYAPPLYOPTIONS_OFFSET))(a1);
		}

		static ::System::String* DoDumpOptions(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext* a1, ::IniParserEx::IniFile_Section* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext*, ::IniParserEx::IniFile_Section*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_DODUMPOPTIONS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DumpOptions(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext* a1)
		{
			return ((::System::Void(*)(::UnityEngine::DefaultConsoleConfigReader_ReadDeviceProfileContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_DUMPOPTIONS_OFFSET))(a1);
		}

		static ::System::Void ReadDeviceProfileSettings(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_READDEVICEPROFILESETTINGS_OFFSET))(a1);
		}
	};
}
