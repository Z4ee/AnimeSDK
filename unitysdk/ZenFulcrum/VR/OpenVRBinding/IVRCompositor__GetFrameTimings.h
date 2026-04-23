#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Compositor_FrameTiming.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMINGS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EC300)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMINGS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EC390)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMINGS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EBFA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6EBF80)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetFrameTimings_TypeDefinitionIndex = 35786;

	class IVRCompositor__GetFrameTimings : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMINGS__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming& pTiming, ::System::UInt32 nFrames)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMINGS_INVOKE_OFFSET))(this, pTiming, nFrames);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming& pTiming, ::System::UInt32 nFrames, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMINGS_BEGININVOKE_OFFSET))(this, pTiming, nFrames, callback, object);
		}

		::System::UInt32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming& pTiming, ::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMINGS_ENDINVOKE_OFFSET))(this, pTiming, result);
		}
	};
}
