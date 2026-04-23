#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7001B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A700200)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FFEB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FFE90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__IsActiveDashboardOverlay_TypeDefinitionIndex = 35887;

	class IVROverlay__IsActiveDashboardOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt64 ulOverlayHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_INVOKE_OFFSET))(this, ulOverlayHandle);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_BEGININVOKE_OFFSET))(this, ulOverlayHandle, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__ISACTIVEDASHBOARDOVERLAY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
