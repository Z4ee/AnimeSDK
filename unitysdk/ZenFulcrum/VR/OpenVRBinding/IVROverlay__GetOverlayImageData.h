#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B51C120)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B51C1F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B51C0F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51C080)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayImageData_TypeDefinitionIndex = 36129;

	class IVROverlay__GetOverlayImageData : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::UInt32& a4, ::System::UInt32& a5)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::UInt32& a4, ::System::UInt32& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::UInt32, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt32& a1, ::System::UInt32& a2, ::System::IAsyncResult* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
