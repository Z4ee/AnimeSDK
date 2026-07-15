#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B226750)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2267C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B226740)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2266C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRExtendedDisplay__GetDXGIOutputInfo_TypeDefinitionIndex = 36782;

	class IVRExtendedDisplay__GetDXGIOutputInfo : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32& a1, ::System::Int32& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::Int32& a1, ::System::Int32& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
