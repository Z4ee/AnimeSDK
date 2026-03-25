#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISDISPLAYONDESKTOP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE7310)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISDISPLAYONDESKTOP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE7340)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISDISPLAYONDESKTOP_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE7060)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISDISPLAYONDESKTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE7040)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__IsDisplayOnDesktop_TypeDefinitionIndex = 29941;

	class IVRSystem__IsDisplayOnDesktop : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISDISPLAYONDESKTOP__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISDISPLAYONDESKTOP_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISDISPLAYONDESKTOP_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISDISPLAYONDESKTOP_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
