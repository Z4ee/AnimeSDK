#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETDEFAULTAPPLICATIONFORMIMETYPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B514DA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETDEFAULTAPPLICATIONFORMIMETYPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B514E10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETDEFAULTAPPLICATIONFORMIMETYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B50E3B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETDEFAULTAPPLICATIONFORMIMETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B514D20)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetDefaultApplicationForMimeType_TypeDefinitionIndex = 36035;

	class IVRApplications__GetDefaultApplicationForMimeType : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETDEFAULTAPPLICATIONFORMIMETYPE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::String* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETDEFAULTAPPLICATIONFORMIMETYPE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETDEFAULTAPPLICATIONFORMIMETYPE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETDEFAULTAPPLICATIONFORMIMETYPE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
