#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB74D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB7580)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB74A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB7420)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRExtendedDisplay__GetWindowBounds_TypeDefinitionIndex = 37639;

	class IVRExtendedDisplay__GetWindowBounds : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32& a1, ::System::Int32& a2, ::System::UInt32& a3, ::System::UInt32& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32& a1, ::System::Int32& a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::Int32& a1, ::System::Int32& a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::IAsyncResult* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
