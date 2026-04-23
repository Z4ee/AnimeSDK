#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A700500)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A700530)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A700250)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A700230)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__IsDashboardVisible_TypeDefinitionIndex = 35886;

	class IVROverlay__IsDashboardVisible : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISDASHBOARDVISIBLE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
