#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B523A80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B523B40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B523A40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5239C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__GetString_TypeDefinitionIndex = 36234;

	class IVRSettings__GetString : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSTRING_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
