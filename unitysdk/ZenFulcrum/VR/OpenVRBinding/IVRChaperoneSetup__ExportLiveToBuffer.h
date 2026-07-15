#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBF7180)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBF71E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBEFE90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF7100)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__ExportLiveToBuffer_TypeDefinitionIndex = 36856;

	class IVRChaperoneSetup__ExportLiveToBuffer : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Text::StringBuilder* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* a1, ::System::UInt32& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::UInt32& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
