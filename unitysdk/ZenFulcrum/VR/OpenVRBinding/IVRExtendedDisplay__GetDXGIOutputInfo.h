#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB7960)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB79D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB7610)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB75F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRExtendedDisplay__GetDXGIOutputInfo_TypeDefinitionIndex = 29980;

	class IVRExtendedDisplay__GetDXGIOutputInfo : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32& pnAdapterIndex, ::System::Int32& pnAdapterOutputIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_INVOKE_OFFSET))(this, pnAdapterIndex, pnAdapterOutputIndex);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32& pnAdapterIndex, ::System::Int32& pnAdapterOutputIndex, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_BEGININVOKE_OFFSET))(this, pnAdapterIndex, pnAdapterOutputIndex, callback, object);
		}

		::System::Void EndInvoke(::System::Int32& pnAdapterIndex, ::System::Int32& pnAdapterOutputIndex, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETDXGIOUTPUTINFO_ENDINVOKE_OFFSET))(this, pnAdapterIndex, pnAdapterOutputIndex, result);
		}
	};
}
