#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB8370)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB8420)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB7FF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB7FD0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRExtendedDisplay__GetWindowBounds_TypeDefinitionIndex = 29978;

	class IVRExtendedDisplay__GetWindowBounds : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32& pnX, ::System::Int32& pnY, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_INVOKE_OFFSET))(this, pnX, pnY, pnWidth, pnHeight);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32& pnX, ::System::Int32& pnY, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_BEGININVOKE_OFFSET))(this, pnX, pnY, pnWidth, pnHeight, callback, object);
		}

		::System::Void EndInvoke(::System::Int32& pnX, ::System::Int32& pnY, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETWINDOWBOUNDS_ENDINVOKE_OFFSET))(this, pnX, pnY, pnWidth, pnHeight, result);
		}
	};
}
