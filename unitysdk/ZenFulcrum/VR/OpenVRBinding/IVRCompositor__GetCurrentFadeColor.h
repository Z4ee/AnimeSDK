#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAFBE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAFC30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CAF810)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAF7F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetCurrentFadeColor_TypeDefinitionIndex = 30070;

	class IVRCompositor__GetCurrentFadeColor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdColor_t Invoke(::System::Boolean bBackground)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdColor_t(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_INVOKE_OFFSET))(this, bBackground);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean bBackground, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_BEGININVOKE_OFFSET))(this, bBackground, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdColor_t EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdColor_t(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTFADECOLOR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
