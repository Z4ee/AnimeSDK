#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERCOUNT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB7130)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERCOUNT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB7160)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB6E80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB6E60)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRDriverManager__GetDriverCount_TypeDefinitionIndex = 30229;

	class IVRDriverManager__GetDriverCount : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERCOUNT__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERCOUNT_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERCOUNT_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERCOUNT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
