#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYSORTORDER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FB720)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYSORTORDER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FB790)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYSORTORDER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FB3B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYSORTORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FB390)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlaySortOrder_TypeDefinitionIndex = 35842;

	class IVROverlay__GetOverlaySortOrder : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYSORTORDER__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::UInt32& punSortOrder)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYSORTORDER_INVOKE_OFFSET))(this, ulOverlayHandle, punSortOrder);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::UInt32& punSortOrder, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYSORTORDER_BEGININVOKE_OFFSET))(this, ulOverlayHandle, punSortOrder, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt32& punSortOrder, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYSORTORDER_ENDINVOKE_OFFSET))(this, punSortOrder, result);
		}
	};
}
