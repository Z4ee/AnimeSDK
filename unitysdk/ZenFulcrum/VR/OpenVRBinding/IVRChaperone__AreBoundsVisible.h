#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6690)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E66C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6DBC80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E6670)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__AreBoundsVisible_TypeDefinitionIndex = 35753;

	class IVRChaperone__AreBoundsVisible : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
