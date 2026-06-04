#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5219F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B521A60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5219C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B521940)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetComponentRenderModelName_TypeDefinitionIndex = 36215;

	class IVRRenderModels__GetComponentRenderModelName : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::String* a1, ::System::String* a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
