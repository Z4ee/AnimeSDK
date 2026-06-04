#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMITEXPLICITTIMINGDATA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B519F70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMITEXPLICITTIMINGDATA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B519FA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMITEXPLICITTIMINGDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B519F60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMITEXPLICITTIMINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B519EF0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__SubmitExplicitTimingData_TypeDefinitionIndex = 36119;

	class IVRCompositor__SubmitExplicitTimingData : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMITEXPLICITTIMINGDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMITEXPLICITTIMINGDATA_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMITEXPLICITTIMINGDATA_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMITEXPLICITTIMINGDATA_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
