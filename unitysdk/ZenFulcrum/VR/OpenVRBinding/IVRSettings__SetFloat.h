#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETFLOAT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A717C40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETFLOAT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A717CF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A717600)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7175E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__SetFloat_TypeDefinitionIndex = 35929;

	class IVRSettings__SetFloat : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETFLOAT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Single flValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETFLOAT_INVOKE_OFFSET))(this, pchSection, pchSettingsKey, flValue, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Single flValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETFLOAT_BEGININVOKE_OFFSET))(this, pchSection, pchSettingsKey, flValue, peError, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETFLOAT_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
