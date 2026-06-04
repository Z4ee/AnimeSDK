#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDXGIOUTPUTINFO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B525540)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDXGIOUTPUTINFO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B525590)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDXGIOUTPUTINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B525530)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDXGIOUTPUTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5254C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetDXGIOutputInfo_TypeDefinitionIndex = 35959;

	class IVRSystem__GetDXGIOutputInfo : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDXGIOUTPUTINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDXGIOUTPUTINFO_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDXGIOUTPUTINFO_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::Int32& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDXGIOUTPUTINFO_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
