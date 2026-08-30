#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB4EE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB4F30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB4EC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB4E50)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetCurrentFadeColor_TypeDefinitionIndex = 37731;

	class IVRCompositor__GetCurrentFadeColor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdColor_t Invoke(::System::Boolean a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdColor_t(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdColor_t EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdColor_t(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
