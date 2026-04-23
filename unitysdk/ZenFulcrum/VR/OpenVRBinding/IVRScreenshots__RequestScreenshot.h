#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A713160)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A713210)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A712DD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A712DB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__RequestScreenshot_TypeDefinitionIndex = 35938;

	class IVRScreenshots__RequestScreenshot : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError Invoke(::System::UInt32& pOutScreenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType type, ::System::String* pchPreviewFilename, ::System::String* pchVRFilename)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_INVOKE_OFFSET))(this, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32& pOutScreenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType type, ::System::String* pchPreviewFilename, ::System::String* pchVRFilename, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_BEGININVOKE_OFFSET))(this, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError EndInvoke(::System::UInt32& pOutScreenshotHandle, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_ENDINVOKE_OFFSET))(this, pOutScreenshotHandle, result);
		}
	};
}
