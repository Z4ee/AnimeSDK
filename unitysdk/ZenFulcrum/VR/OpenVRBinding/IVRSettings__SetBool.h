#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE0C80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE0D30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE0C50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE0BD0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__SetBool_TypeDefinitionIndex = 37868;

	class IVRSettings__SetBool : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
