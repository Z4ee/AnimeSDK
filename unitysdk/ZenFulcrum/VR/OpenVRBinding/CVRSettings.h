#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRSettings.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETBOOL_OFFSET UNITYSDK_OFFSET(0x18CA7DE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x18CA7E20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETINT32_OFFSET UNITYSDK_OFFSET(0x18CA7E00)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETSETTINGSERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x18CA7D00)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x18CA7E40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_REMOVEKEYINSECTION_OFFSET UNITYSDK_OFFSET(0x18CA7E80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_REMOVESECTION_OFFSET UNITYSDK_OFFSET(0x18CA7E60)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETBOOL_OFFSET UNITYSDK_OFFSET(0x18CA7D60)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x18CA7DA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETINT32_OFFSET UNITYSDK_OFFSET(0x18CA7D80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETSTRING_OFFSET UNITYSDK_OFFSET(0x18CA7DC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SYNC_OFFSET UNITYSDK_OFFSET(0x18CA7D40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA7C00)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSettings_TypeDefinitionIndex = 30251;

	class CVRSettings : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS__CTOR_OFFSET))(this, pInterface);
		}

		::System::String* GetSettingsErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError eError)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETSETTINGSERRORNAMEFROMENUM_OFFSET))(this, eError);
		}

		::System::Boolean Sync(::System::Boolean bForce, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SYNC_OFFSET))(this, bForce, peError);
		}

		::System::Void SetBool(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Boolean bValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETBOOL_OFFSET))(this, pchSection, pchSettingsKey, bValue, peError);
		}

		::System::Void SetInt32(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Int32 nValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETINT32_OFFSET))(this, pchSection, pchSettingsKey, nValue, peError);
		}

		::System::Void SetFloat(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Single flValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETFLOAT_OFFSET))(this, pchSection, pchSettingsKey, flValue, peError);
		}

		::System::Void SetString(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::String* pchValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETSTRING_OFFSET))(this, pchSection, pchSettingsKey, pchValue, peError);
		}

		::System::Boolean GetBool(::System::String* pchSection, ::System::String* pchSettingsKey, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETBOOL_OFFSET))(this, pchSection, pchSettingsKey, peError);
		}

		::System::Int32 GetInt32(::System::String* pchSection, ::System::String* pchSettingsKey, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETINT32_OFFSET))(this, pchSection, pchSettingsKey, peError);
		}

		::System::Single GetFloat(::System::String* pchSection, ::System::String* pchSettingsKey, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETFLOAT_OFFSET))(this, pchSection, pchSettingsKey, peError);
		}

		::System::Void GetString(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unValueLen, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETSTRING_OFFSET))(this, pchSection, pchSettingsKey, pchValue, unValueLen, peError);
		}

		::System::Void RemoveSection(::System::String* pchSection, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_REMOVESECTION_OFFSET))(this, pchSection, peError);
		}

		::System::Void RemoveKeyInSection(::System::String* pchSection, ::System::String* pchSettingsKey, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_REMOVEKEYINSECTION_OFFSET))(this, pchSection, pchSettingsKey, peError);
		}
	};
}
