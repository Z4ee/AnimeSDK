#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B22A3C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B22A3F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B22A3B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B22A340)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__IsDashboardVisible_TypeDefinitionIndex = 36968;

	class IVROverlay__IsDashboardVisible : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
