#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE0470)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE0500)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE0450)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE03D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__GetFloat_TypeDefinitionIndex = 37874;

	class IVRSettings__GetFloat : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Single(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETFLOAT_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
