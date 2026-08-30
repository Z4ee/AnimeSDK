#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTGRIDALPHA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CED51E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTGRIDALPHA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CED5210)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTGRIDALPHA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CED51D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTGRIDALPHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED5160)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetCurrentGridAlpha_TypeDefinitionIndex = 37733;

	class IVRCompositor__GetCurrentGridAlpha : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTGRIDALPHA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTGRIDALPHA_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTGRIDALPHA_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCURRENTGRIDALPHA_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
