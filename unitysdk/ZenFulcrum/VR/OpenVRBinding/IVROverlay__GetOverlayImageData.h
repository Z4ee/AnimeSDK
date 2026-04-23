#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F96A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F9770)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F9240)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F9220)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayImageData_TypeDefinitionIndex = 35829;

	class IVROverlay__GetOverlayImageData : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::IntPtr pvBuffer, ::System::UInt32 unBufferSize, ::System::UInt32& punWidth, ::System::UInt32& punHeight)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_INVOKE_OFFSET))(this, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::IntPtr pvBuffer, ::System::UInt32 unBufferSize, ::System::UInt32& punWidth, ::System::UInt32& punHeight, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::UInt32, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt32& punWidth, ::System::UInt32& punHeight, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYIMAGEDATA_ENDINVOKE_OFFSET))(this, punWidth, punHeight, result);
		}
	};
}
