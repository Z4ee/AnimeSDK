#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B523D40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B523DC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B523D30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B523CB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__RemoveSection_TypeDefinitionIndex = 36235;

	class IVRSettings__RemoveSection : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__REMOVESECTION_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
