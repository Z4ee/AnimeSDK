#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__FORCEBOUNDSVISIBLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6710)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__FORCEBOUNDSVISIBLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6760)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__FORCEBOUNDSVISIBLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6DBF50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__FORCEBOUNDSVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E66F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__ForceBoundsVisible_TypeDefinitionIndex = 35754;

	class IVRChaperone__ForceBoundsVisible : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__FORCEBOUNDSVISIBLE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean bForce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__FORCEBOUNDSVISIBLE_INVOKE_OFFSET))(this, bForce);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean bForce, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__FORCEBOUNDSVISIBLE_BEGININVOKE_OFFSET))(this, bForce, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__FORCEBOUNDSVISIBLE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
