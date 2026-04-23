#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A716D90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A716E10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A716810)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7167F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__RemoveSection_TypeDefinitionIndex = 35935;

	class IVRSettings__RemoveSection : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* pchSection, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_INVOKE_OFFSET))(this, pchSection, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchSection, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_BEGININVOKE_OFFSET))(this, pchSection, peError, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
