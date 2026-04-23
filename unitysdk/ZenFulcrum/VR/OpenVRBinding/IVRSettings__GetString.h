#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A716000)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7160C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7158B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A715890)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__GetString_TypeDefinitionIndex = 35934;

	class IVRSettings__GetString : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unValueLen, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_INVOKE_OFFSET))(this, pchSection, pchSettingsKey, pchValue, unValueLen, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unValueLen, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_BEGININVOKE_OFFSET))(this, pchSection, pchSettingsKey, pchValue, unValueLen, peError, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
