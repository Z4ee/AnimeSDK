#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ACKNOWLEDGEQUIT_USERPROMPT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CDE0E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ACKNOWLEDGEQUIT_USERPROMPT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CDE110)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ACKNOWLEDGEQUIT_USERPROMPT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CDDE40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ACKNOWLEDGEQUIT_USERPROMPT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDDE20)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__AcknowledgeQuit_UserPrompt_TypeDefinitionIndex = 29976;

	class IVRSystem__AcknowledgeQuit_UserPrompt : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ACKNOWLEDGEQUIT_USERPROMPT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ACKNOWLEDGEQUIT_USERPROMPT_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ACKNOWLEDGEQUIT_USERPROMPT_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ACKNOWLEDGEQUIT_USERPROMPT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
