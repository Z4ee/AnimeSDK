#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Compositor_FrameTiming.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5186A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B518730)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B518690)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B518610)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetFrameTiming_TypeDefinitionIndex = 36085;

	class IVRCompositor__GetFrameTiming : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMING__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming& a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMING_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming& a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMING_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMING_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
