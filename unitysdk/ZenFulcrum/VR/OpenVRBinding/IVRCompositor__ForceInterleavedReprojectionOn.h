#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CED4DF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CED4E40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CED4DE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED4D70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__ForceInterleavedReprojectionOn_TypeDefinitionIndex = 37748;

	class IVRCompositor__ForceInterleavedReprojectionOn : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
