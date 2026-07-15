#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTFRAMERENDERER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B224AD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTFRAMERENDERER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B224B00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTFRAMERENDERER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B224AC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTFRAMERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B224A50)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetLastFrameRenderer_TypeDefinitionIndex = 36882;

	class IVRCompositor__GetLastFrameRenderer : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTFRAMERENDERER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTFRAMERENDERER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTFRAMERENDERER_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETLASTFRAMERENDERER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
