#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETSTRING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A718BA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETSTRING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A718C40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETSTRING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7184E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7184C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__SetString_TypeDefinitionIndex = 35930;

	class IVRSettings__SetString : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETSTRING__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::String* pchValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETSTRING_INVOKE_OFFSET))(this, pchSection, pchSettingsKey, pchValue, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::String* pchValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETSTRING_BEGININVOKE_OFFSET))(this, pchSection, pchSettingsKey, pchValue, peError, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETSTRING_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
