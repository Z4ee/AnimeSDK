#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORDUMPIMAGES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CADCC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORDUMPIMAGES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CADCF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORDUMPIMAGES_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CADA20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORDUMPIMAGES__CTOR_OFFSET UNITYSDK_OFFSET(0x18CADA00)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__CompositorDumpImages_TypeDefinitionIndex = 30085;

	class IVRCompositor__CompositorDumpImages : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORDUMPIMAGES__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORDUMPIMAGES_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORDUMPIMAGES_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORDUMPIMAGES_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
