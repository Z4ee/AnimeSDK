#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B521770)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5217A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B521760)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5216F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetComponentCount_TypeDefinitionIndex = 36212;

	class IVRRenderModels__GetComponentCount : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
