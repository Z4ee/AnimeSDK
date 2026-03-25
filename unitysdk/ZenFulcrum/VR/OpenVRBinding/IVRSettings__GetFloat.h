#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD97B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD9840)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD9170)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD9150)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__GetFloat_TypeDefinitionIndex = 30213;

	class IVRSettings__GetFloat : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_INVOKE_OFFSET))(this, pchSection, pchSettingsKey, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_BEGININVOKE_OFFSET))(this, pchSection, pchSettingsKey, peError, callback, object);
		}

		::System::Single EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
