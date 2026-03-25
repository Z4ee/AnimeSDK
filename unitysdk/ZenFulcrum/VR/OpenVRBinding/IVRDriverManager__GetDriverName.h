#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERNAME_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB7540)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERNAME_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB75C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERNAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB71B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB7190)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRDriverManager__GetDriverName_TypeDefinitionIndex = 30230;

	class IVRDriverManager__GetDriverName : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERNAME__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::UInt32 nDriver, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERNAME_INVOKE_OFFSET))(this, nDriver, pchValue, unBufferSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 nDriver, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERNAME_BEGININVOKE_OFFSET))(this, nDriver, pchValue, unBufferSize, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRDRIVERMANAGER__GETDRIVERNAME_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
