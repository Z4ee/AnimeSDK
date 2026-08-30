#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRSettings.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETBOOL_OFFSET UNITYSDK_OFFSET(0x1EFAEEB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1EFAEF10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETINT32_OFFSET UNITYSDK_OFFSET(0x1EFAEEE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETSETTINGSERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1EFAED30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1EFAEF40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_REMOVEKEYINSECTION_OFFSET UNITYSDK_OFFSET(0x1EFAEFB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_REMOVESECTION_OFFSET UNITYSDK_OFFSET(0x1EFAEF80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETBOOL_OFFSET UNITYSDK_OFFSET(0x1EFAEDB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1EFAEE30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETINT32_OFFSET UNITYSDK_OFFSET(0x1EFAEDF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1EFAEE70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SYNC_OFFSET UNITYSDK_OFFSET(0x1EFAED80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAEC30)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSettings_TypeDefinitionIndex = 37912;

	class CVRSettings : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRSettings FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS__CTOR_OFFSET))(this, a1);
		}

		::System::String* GetSettingsErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError a1)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETSETTINGSERRORNAMEFROMENUM_OFFSET))(this, a1);
		}

		::System::Boolean Sync(::System::Boolean a1, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SetBool(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETBOOL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetInt32(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETINT32_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetFloat(::System::String* a1, ::System::String* a2, ::System::Single a3, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETFLOAT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetString(::System::String* a1, ::System::String* a2, ::System::String* a3, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_SETSTRING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetBool(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETBOOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetInt32(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETINT32_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetFloat(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETFLOAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetString(::System::String* a1, ::System::String* a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_GETSTRING_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RemoveSection(::System::String* a1, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_REMOVESECTION_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveKeyInSection(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSETTINGS_REMOVEKEYINSECTION_OFFSET))(this, a1, a2, a3);
		}
	};
}
