#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVEKEYINSECTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B22FDA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVEKEYINSECTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B22FE30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVEKEYINSECTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B22FD80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVEKEYINSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B22FD00)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__RemoveKeyInSection_TypeDefinitionIndex = 37018;

	class IVRSettings__RemoveKeyInSection : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVEKEYINSECTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVEKEYINSECTION_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVEKEYINSECTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVEKEYINSECTION_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
