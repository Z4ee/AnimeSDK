#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELTHUMBNAILURL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD4260)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELTHUMBNAILURL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD4310)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELTHUMBNAILURL_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD3BA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELTHUMBNAILURL__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD3B80)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetRenderModelThumbnailURL_TypeDefinitionIndex = 30198;

	class IVRRenderModels__GetRenderModelThumbnailURL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELTHUMBNAILURL__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::String* pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, ::System::UInt32 unThumbnailURLLen, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError& peError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELTHUMBNAILURL_INVOKE_OFFSET))(this, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, ::System::UInt32 unThumbnailURLLen, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELTHUMBNAILURL_BEGININVOKE_OFFSET))(this, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError, callback, object);
		}

		::System::UInt32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELTHUMBNAILURL_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
