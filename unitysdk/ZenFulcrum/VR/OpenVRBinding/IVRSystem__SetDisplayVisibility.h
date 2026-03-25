#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__SETDISPLAYVISIBILITY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE90C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__SETDISPLAYVISIBILITY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE9110)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__SETDISPLAYVISIBILITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE8D60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__SETDISPLAYVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE8D40)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__SetDisplayVisibility_TypeDefinitionIndex = 29942;

	class IVRSystem__SetDisplayVisibility : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__SETDISPLAYVISIBILITY__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Boolean bIsVisibleOnDesktop)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__SETDISPLAYVISIBILITY_INVOKE_OFFSET))(this, bIsVisibleOnDesktop);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean bIsVisibleOnDesktop, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__SETDISPLAYVISIBILITY_BEGININVOKE_OFFSET))(this, bIsVisibleOnDesktop, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__SETDISPLAYVISIBILITY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
