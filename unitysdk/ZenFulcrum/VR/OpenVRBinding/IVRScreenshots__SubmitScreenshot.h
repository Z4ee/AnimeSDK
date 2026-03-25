#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__SUBMITSCREENSHOT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD8110)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__SUBMITSCREENSHOT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD81C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__SUBMITSCREENSHOT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD7D10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__SUBMITSCREENSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD7CF0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__SubmitScreenshot_TypeDefinitionIndex = 30224;

	class IVRScreenshots__SubmitScreenshot : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__SUBMITSCREENSHOT__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError Invoke(::System::UInt32 screenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType type, ::System::String* pchSourcePreviewFilename, ::System::String* pchSourceVRFilename)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__SUBMITSCREENSHOT_INVOKE_OFFSET))(this, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 screenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType type, ::System::String* pchSourcePreviewFilename, ::System::String* pchSourceVRFilename, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__SUBMITSCREENSHOT_BEGININVOKE_OFFSET))(this, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__SUBMITSCREENSHOT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
